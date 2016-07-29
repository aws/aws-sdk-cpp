/*
 * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#include <aws/external/gtest.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/core/utils/threading/Executor.h>
#include <thread>
#include <chrono>

using namespace Aws::Utils::Threading;

const char* EXECUTOR_TEST_ALLOCATION_TAG = "ExecutorTest";

/** Mock executor that immediately runs a submitted function without using threads */
class ThreadlessMockExecutor : public Executor
{
public:
    ThreadlessMockExecutor() { }
    ~ThreadlessMockExecutor() { }
    
    ThreadlessMockExecutor(const ThreadlessMockExecutor&) = delete;
    ThreadlessMockExecutor& operator =(const ThreadlessMockExecutor&) = delete;
    ThreadlessMockExecutor(ThreadlessMockExecutor&&) = delete;
    ThreadlessMockExecutor& operator =(ThreadlessMockExecutor&&) = delete;

private:
    bool SubmitToThread(std::function<void()>&& fn)
    {
        fn();
        return true;
    }
    
};

/** Trivial test to see if BlockingExecutor can run a single task. */
TEST(BlockingExecutorTest, TestExecuteSingleTask)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    std::shared_ptr<ThreadlessMockExecutor> mockExecutor =
            Aws::MakeShared<ThreadlessMockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, 5);
    
    Aws::Vector<u_int> taskOrder;
    size_t FINAL_SIZE = 1;
    
    auto executeTask = [&taskOrder](u_int id)
    {
        taskOrder.emplace_back(id);
    };
    
    blockingExecutor.Submit(executeTask, 0);
    
    ASSERT_EQ(taskOrder.size(), FINAL_SIZE);
    ASSERT_EQ(taskOrder.at(0), 0u);
    
    AWS_END_MEMORY_TEST
}

/** Test if BlockingExecutor can successfully run more tasks than its pool size. */
TEST(BlockingExecutorTest, TestExecuteMoreTasksThanPoolSize)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    std::shared_ptr<ThreadlessMockExecutor> mockExecutor =
    Aws::MakeShared<ThreadlessMockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, 5);
    
    Aws::Vector<u_long> taskOrder;
    size_t FINAL_SIZE = 7;
    
    auto executeTask = [&taskOrder](u_long id)
    {
        taskOrder.emplace_back(id);
    };
    
    for (size_t i = 0; i < FINAL_SIZE; i++)
    {
        blockingExecutor.Submit(executeTask, i);
    }
    
    ASSERT_EQ(taskOrder.size(), FINAL_SIZE);
    // Order should be deterministic because mock executor is not concurrent
    for (size_t i = 0; i < FINAL_SIZE; i++)
    {
        ASSERT_EQ(taskOrder.at(i), i);
    }
    
    AWS_END_MEMORY_TEST
}

std::atomic<std::size_t> numReceivedTasks;
std::atomic<std::size_t> numFinishedTasks;

std::condition_variable checkpointSignal;
std::condition_variable doneSignal;

size_t CHECKPOINT_SIZE = 3;
size_t FINAL_SIZE = 4;

class MockExecutor : public Executor
{
public:
    MockExecutor() { }
    ~MockExecutor() { }
    
    MockExecutor(const MockExecutor&) = delete;
    MockExecutor& operator =(const MockExecutor&) = delete;
    MockExecutor(MockExecutor&&) = delete;
    MockExecutor& operator =(MockExecutor&&) = delete;
    
protected:
    bool SubmitToThread(std::function<void()>&& fn)
    {
        numReceivedTasks++;
        
        auto taskWrapper = [fn]()
        {
            fn();
            numFinishedTasks++;
            
            if (numFinishedTasks == CHECKPOINT_SIZE)
            {
                checkpointSignal.notify_all();
            }
            else if (numFinishedTasks == FINAL_SIZE)
            {
                doneSignal.notify_all();
            }
        };
        
        std::thread t(taskWrapper);
        t.detach();
        return true;
    }
};

/** Test whether a task gets blocked properly if max pool size is exceeded */
TEST(BlockingExecutorTest, TestBlockSingleTask)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    numReceivedTasks = 0;
    numFinishedTasks = 0;
    const size_t POOL_SIZE = 3;
    
    std::shared_ptr<MockExecutor> mockExecutor =
            Aws::MakeShared<MockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, POOL_SIZE);
    
    Aws::Vector<u_long> taskOrder;
    std::mutex vectorLock;
    std::condition_variable taskSignal;
    
    std::atomic<bool> lastTaskWaiting;
    lastTaskWaiting = false;
    
    /* Each tasks waits for a "task signal" before proceeding. The last task will set a
     * special flag. */
    auto executeTask = [&](u_long id)
    {
        std::unique_lock<std::mutex> locker(vectorLock);
        if (id == FINAL_SIZE - 1)
        {
            lastTaskWaiting = true;
        }
        taskSignal.wait(locker);
        taskOrder.emplace_back(id);
    };
    
    // Submit POOL_SIZE tasks to fill up the thread pool
    blockingExecutor.Submit(executeTask, 0);
    blockingExecutor.Submit(executeTask, 1);
    blockingExecutor.Submit(executeTask, 2);
    
    // Submit an additional task. This one should get blocked, so we submit it in a separate thread.
    auto submitLastTask = [&] ()
    {
        blockingExecutor.Submit(executeTask, 3);
    };
    std::thread t(submitLastTask);
    t.detach();
    
    /* Check that we've received all tasks but the last one (since it should have been blocked
     * in the blocking executor before being received by the mock executor) */
    ASSERT_EQ(numReceivedTasks, CHECKPOINT_SIZE);
    std::unique_lock<std::mutex> locker(vectorLock);
    ASSERT_EQ(taskOrder.size(), 0ul);
    locker.unlock();
    
    // Signal the currently queued tasks to run.
    taskSignal.notify_all();
    locker.lock();
    
    checkpointSignal.wait(locker);
    
    // Check that all those tasks ran successfully.
    ASSERT_EQ(taskOrder.size(), CHECKPOINT_SIZE);
    for (size_t i = 0; i < taskOrder.size(); i++)
    {
        ASSERT_NE(taskOrder.at(i), 3ul);
    }
    locker.unlock();
    
    /* Additionally, the last task should now have been queued up (i.e. received by the mock executor
     * , now that the others have finished. */
    ASSERT_EQ(numReceivedTasks, FINAL_SIZE);
    
    // Wait for the last task to let us know it's ready, then signal it.
    while (!lastTaskWaiting)
    {
        std::this_thread::yield();
    }
    taskSignal.notify_all();
    
    locker.lock();
    doneSignal.wait(locker);
    
    // Check completion and ordering of tasks.
    ASSERT_EQ(taskOrder.size(), FINAL_SIZE);
    ASSERT_EQ(taskOrder.at(3), 3ul);
    locker.unlock();
    
    AWS_END_MEMORY_TEST
}

// Tests whether the blocking executor properly delegates tasks concurrently.
TEST(BlockingExecutorTest, ConcurrencyTimingTest)
{
    using namespace std::chrono;
    
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    const size_t NUM_TASKS = 15;
    const size_t POOL_SIZE = 5;
    
    auto executeTask = [&] () {
        std::this_thread::sleep_for(milliseconds(10));
    };

    // Time how long it takes to run the tasks with an underlying executor that's concurrent
    std::shared_ptr<DefaultExecutor> mockExecutor =
            Aws::MakeShared<DefaultExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, POOL_SIZE);
    
    high_resolution_clock::time_point startTime = high_resolution_clock::now();
    for (u_long i = 0; i < NUM_TASKS; i++)
    {
        blockingExecutor.Submit(executeTask);
    }
    high_resolution_clock::time_point endTime = high_resolution_clock::now();
    auto asyncDuration = duration_cast<milliseconds>(endTime - startTime).count();
    
    // Time how long it takes to run the tasks with an underlying executor that doesn't use threads
    std::shared_ptr<ThreadlessMockExecutor> threadlessMockExecutor =
            Aws::MakeShared<ThreadlessMockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor threadlessBlockingExecutor(threadlessMockExecutor, POOL_SIZE);
    
    startTime = high_resolution_clock::now();
    for (u_long i = 0; i < NUM_TASKS; i++)
    {
        threadlessBlockingExecutor.Submit(executeTask);
    }
    endTime = high_resolution_clock::now();
    auto sequentialDuration = duration_cast<milliseconds>(endTime - startTime).count();
    
    /* Check if the concurrent time was faster, with an adjustable tolerance for the strictness of
     * the test */
    const double TOLERANCE = 1.0;
    ASSERT_LE(asyncDuration, sequentialDuration * TOLERANCE);

    AWS_END_MEMORY_TEST
}

// Stress test where number of tasks ran >> pool size.
TEST(BlockingExecutorTest, StressTest)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    const size_t NUM_TASKS = 1000;
    const size_t POOL_SIZE = 10;
    
    std::shared_ptr<DefaultExecutor> mockExecutor =
            Aws::MakeShared<DefaultExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, POOL_SIZE);
    
    Aws::Vector<u_long> taskIds;
    std::mutex vectorLock;
    std::condition_variable doneSignal;
    
    auto executeTask = [&] (u_long id) {
        std::unique_lock<std::mutex> locker(vectorLock);
        taskIds.emplace_back(id);
        if (taskIds.size() == NUM_TASKS)
        {
            locker.unlock();
            doneSignal.notify_all();
        }
    };
    
    for (u_long i = 0; i < NUM_TASKS; i++)
    {
        blockingExecutor.Submit(executeTask, i);
    }
    
    // If all tasks aren't done yet, wait for completion or time out.
    std::unique_lock<std::mutex> locker(vectorLock);
    while (taskIds.size() != NUM_TASKS)
    {
        doneSignal.wait_for(locker, std::chrono::seconds(1));
    }
    
    ASSERT_EQ(taskIds.size(), NUM_TASKS);
    
    AWS_END_MEMORY_TEST
}
