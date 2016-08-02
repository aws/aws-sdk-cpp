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
using namespace std::chrono;

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

class MockExecutor : public Executor
{
public:
    MockExecutor() : m_numReceivedTasks(0), m_numFinishedTasks(0) { }
    ~MockExecutor() { }
    
    MockExecutor(const MockExecutor&) = delete;
    MockExecutor& operator =(const MockExecutor&) = delete;
    MockExecutor(MockExecutor&&) = delete;
    MockExecutor& operator =(MockExecutor&&) = delete;

    std::atomic<std::size_t>* getNumReceivedTasks() { return &m_numReceivedTasks; }
    std::atomic<std::size_t>* getNumFinishedTasks() { return &m_numFinishedTasks; }
    
    /** Called when a task is received (after incrementing the number of received tasks) */
    std::function<void()> uponReceivingTask = []{};
    
    /** Called after a task finishes (and after number of finished tasks is incremented) */
    std::function<void()> uponFinishingTask = []{};
    
protected:
    bool SubmitToThread(std::function<void()>&& fn)
    {
        m_numReceivedTasks++;
        uponReceivingTask();
        
        std::function<void(std::function<void()>&&)> taskWrapper = [&](std::function<void()>&& fn)
        {
            fn();
            m_numFinishedTasks++;
            uponFinishingTask();
        };
        
        std::thread t(taskWrapper, fn);
        t.detach();
        return true;
    }
    
private:
    std::atomic<std::size_t> m_numReceivedTasks;
    std::atomic<std::size_t> m_numFinishedTasks;
};

/** Test whether a task gets blocked properly if max pool size is exceeded */
TEST(BlockingExecutorTest, TestBlockSingleTask)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    const size_t POOL_SIZE = 3;
    
    std::shared_ptr<MockExecutor> mockExecutor =
            Aws::MakeShared<MockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, POOL_SIZE);
    
    const size_t FINAL_SIZE = 4;
    
    Aws::Vector<u_long> taskOrder;
    std::mutex vectorLock;
    std::condition_variable taskSignal;
    std::condition_variable poolSizeHitSignal;
    
    volatile bool lastTaskWaiting = false;
    
    /* Each tasks waits for a "task signal" before proceeding. The last task will set a
     * special flag. */
    auto executeTask = [&](u_long id)
    {
        std::unique_lock<std::mutex> locker(vectorLock);
        if (id == FINAL_SIZE - 1)
        {
            lastTaskWaiting = true;
        }
        taskOrder.emplace_back(id);
        taskSignal.wait(locker);
    };
    
    // Notify after a certain number of tasks are complete
    mockExecutor->uponFinishingTask = [&]
    {
        if (*mockExecutor->getNumFinishedTasks() == POOL_SIZE)
        {
            poolSizeHitSignal.notify_all();
        }
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
    ASSERT_EQ(*mockExecutor->getNumReceivedTasks(), POOL_SIZE);
    std::unique_lock<std::mutex> locker(vectorLock);
    
    // Wait until all 3 tasks are waiting for the task signal
    while (taskOrder.size() != POOL_SIZE)
    {
        locker.unlock();
        std::this_thread::yield();
        locker.lock();
    }
    locker.unlock();
    
    ASSERT_EQ(*mockExecutor->getNumFinishedTasks(), 0u);
    
    // Signal the currently queued tasks to run.
    taskSignal.notify_all();
    locker.lock();
    
    // If queued tasks aren't finished yet, wait for them to finish.
    if (taskOrder.size() != POOL_SIZE)
    {
        poolSizeHitSignal.wait(locker, [&] {
            return taskOrder.size() == POOL_SIZE;
        });
    }
    
    // Check that all those tasks ran successfully.
    ASSERT_EQ(taskOrder.size(), POOL_SIZE);
    for (size_t i = 0; i < taskOrder.size(); i++)
    {
        ASSERT_NE(taskOrder.at(i), 3ul);
    }
    locker.unlock();
    
    /* Additionally, the last task should now have been queued up (i.e. received by the mock executor,
     * now that the others have finished. It may take some time for the last task to queue up, so we
     * wait until it does. */
    while (*mockExecutor->getNumReceivedTasks() != FINAL_SIZE)
    {
        std::this_thread::yield();
    }
    
    // Wait for the last task to let us know it's ready, then signal it.
    while (!lastTaskWaiting)
    {
        std::this_thread::yield();
        if (lastTaskWaiting)
        {
            std::lock_guard<std::mutex> locker(vectorLock);
            if (lastTaskWaiting)
            {
                break;
            }
        }
    }
    taskSignal.notify_all();
    
    blockingExecutor.WaitForCompletion();
    
    locker.lock();
    // Check completion and ordering of tasks.
    ASSERT_EQ(taskOrder.size(), FINAL_SIZE);
    ASSERT_EQ(taskOrder.at(3), 3ul);
    locker.unlock();
    
    AWS_END_MEMORY_TEST
}

/** Test whether multiple tasks past the max pool size get queued properly. */
TEST(BlockingExecutorTest, TestSeveralQueuedTasks)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    const size_t POOL_SIZE = 3;
    
    std::shared_ptr<MockExecutor> mockExecutor =
            Aws::MakeShared<MockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, POOL_SIZE);
    
    const size_t FINAL_SIZE = POOL_SIZE * 2 + 1;
    // Keeps track of order in which the inner mock executor received tasks
    Aws::Vector<unsigned long> taskReceivedOrder;
    std::mutex vectorLock;
    
    std::atomic<unsigned long> taskId;
    taskId = 0;
    
    /* Once the mock executor receives a task, push its id onto the vector. The task id is passed
     * by reference to the executor and will be updated after every task submission. */
    mockExecutor->uponReceivingTask = [&]
    {
        std::unique_lock<std::mutex> locker(vectorLock);
        taskReceivedOrder.emplace_back(taskId);
        locker.unlock();
    };

    auto executeTask = [] {
        std::this_thread::sleep_for(milliseconds(10));
    };
    
    for (unsigned int i = 0; i < POOL_SIZE; i++)
    {
        blockingExecutor.Submit(executeTask);
        taskId++;
    }
    
    /* These tasks need to be submitted in a seperate thread because the pool size was hit and
     * the blocking executor will block. */
    auto submitRemainingTasks = [&]
    {
        for (unsigned int i = POOL_SIZE; i < FINAL_SIZE; i++)
        {
            blockingExecutor.Submit(executeTask);
            taskId++;
        }
    };
    
    std::thread t(submitRemainingTasks);
    t.detach();
    
    blockingExecutor.WaitForCompletion();

    /* Check that the tasks were all received correctly in order. We could check the order of task
     * completion, but that would require a lot more effort to make the execution order deterministic
     * with the multithreading. */
    std::lock_guard<std::mutex> locker(vectorLock);
    for (unsigned int i = 0; i < FINAL_SIZE; i++)
    {
        ASSERT_EQ(taskReceivedOrder[i], i);
    }
    
    AWS_END_MEMORY_TEST
}

/** Tests whether the blocking executor properly delegates tasks concurrently */
TEST(BlockingExecutorTest, ConcurrencyTimingTest)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    const size_t NUM_TASKS = 15;
    const size_t POOL_SIZE = 5;
    
    unsigned int counter = 0;
    std::mutex counterLock;
    std::condition_variable doneSignal;
    
    auto executeTask = [&] () {
        std::this_thread::sleep_for(milliseconds(10));
        std::unique_lock<std::mutex> locker(counterLock);
        counter++;
        if (counter == NUM_TASKS)
        {
            locker.unlock();
            doneSignal.notify_all();
        }
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
    std::unique_lock<std::mutex> locker(counterLock);
    while (counter != NUM_TASKS)
    {
        doneSignal.wait(locker);
    }
    counter = 0;
    locker.unlock();
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
    locker.lock();
    while (counter != NUM_TASKS)
    {
        doneSignal.wait(locker);
    }
    endTime = high_resolution_clock::now();
    auto sequentialDuration = duration_cast<milliseconds>(endTime - startTime).count();
    
    /* Check if the concurrent time was faster, with an adjustable tolerance for the strictness of
     * the test */
    const double TOLERANCE = 1.0;
    ASSERT_LE(asyncDuration, sequentialDuration * TOLERANCE);

    AWS_END_MEMORY_TEST
}

/** Stress test where number of tasks ran >> pool size */
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
