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
    
    ASSERT_TRUE(taskOrder.size() == FINAL_SIZE);
    ASSERT_TRUE(taskOrder.at(0) == 0);
    
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
    
    ASSERT_TRUE(taskOrder.size() == FINAL_SIZE);
    // Order should be deterministic because mock executor is not concurrent
    for (size_t i = 0; i < FINAL_SIZE; i++)
    {
        ASSERT_TRUE(taskOrder.at(i) == i);
    }
    
    AWS_END_MEMORY_TEST
}

// TODO: moved these variables outside temporarily for testing
std::atomic<std::size_t> numReceivedTasks;
std::atomic<std::size_t> numFinishedTasks;

std::condition_variable checkpointSignal;
std::condition_variable doneSignal;

size_t CHECKPOINT_SIZE = 3;
size_t FINAL_SIZE = 4;

class MockExecutor : public Executor
{
public:
    MockExecutor() /*: m_numReceivedTasks(0), m_numFinishedTasks(0)*/ { }
    ~MockExecutor() { }
    
    MockExecutor(const MockExecutor&) = delete;
    MockExecutor& operator =(const MockExecutor&) = delete;
    MockExecutor(MockExecutor&&) = delete;
    MockExecutor& operator =(MockExecutor&&) = delete;
    
//    std::atomic<std::size_t>* GetNumReceivedTasks() { return &m_numReceivedTasks; }
//    std::atomic<std::size_t>* GetNumFinishedTasks() { return &m_numFinishedTasks; }
    //    std::mutex* GetTaskLock() { return &m_taskLock; }
    //    std::condition_variable* GetTaskSignal() { return &m_taskSignal; }
    
protected:
    bool SubmitToThread(std::function<void()>&& fn)
    {
        numReceivedTasks++;
        
        auto taskWrapper = [&]()
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
        //        std::thread t(fn);
        t.detach();
        return true;
    }
    
private:
//    std::atomic<std::size_t> m_numReceivedTasks;
//    std::atomic<std::size_t> m_numFinishedTasks;
    //    std::mutex m_taskLock;
    //    std::condition_variable m_taskSignal;
};

/** Test whether a task gets blocked properly if max pool size is exceeded */
TEST(BlockingExecutorTest, TestBlockSingleTask)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    numReceivedTasks = 0;
    numFinishedTasks = 0;
    
    std::shared_ptr<MockExecutor> mockExecutor =
            Aws::MakeShared<MockExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, 3);
    
    Aws::Vector<u_long> taskOrder;
    std::mutex vectorLock;
    std::mutex taskLock;
    std::condition_variable taskSignal;
    std::atomic<bool> tasksStarted;
    tasksStarted = false;
    
    auto executeTask = [&](u_long id)
    {
        std::unique_lock<std::mutex> taskLocker(taskLock);
        taskSignal.wait(taskLocker);
    
        tasksStarted = true;
        std::unique_lock<std::mutex> locker(vectorLock);
        taskOrder.emplace_back(id);
    };
    
    blockingExecutor.Submit(executeTask, 0);
    blockingExecutor.Submit(executeTask, 1);
    blockingExecutor.Submit(executeTask, 2);
    
    auto submitLastTask = [&] ()
    {
        blockingExecutor.Submit(executeTask, 3);
    };
    
    std::thread t(submitLastTask);
    t.detach();
    
//    ASSERT_TRUE(*mockExecutor->GetNumReceivedTasks() == CHECKPOINT_SIZE);
    ASSERT_TRUE(numReceivedTasks == CHECKPOINT_SIZE);
    ASSERT_FALSE(tasksStarted);
    std::unique_lock<std::mutex> locker(vectorLock);
    ASSERT_TRUE(taskOrder.size() == 0);
    locker.unlock();
    
    //    mockExecutor->GetTaskSignal()->notify_all();
    taskSignal.notify_all();
    //    std::unique_lock<std::mutex> taskLocker(*mockExecutor->GetTaskLock());
    locker.lock();
    
    
    checkpointSignal.wait(locker);
    
    ASSERT_TRUE(taskOrder.size() == CHECKPOINT_SIZE);
    for (size_t i = 0; i < taskOrder.size(); i++)
    {
        ASSERT_FALSE(taskOrder.at(i) == 3);
    }
    locker.unlock();
//    ASSERT_TRUE(*mockExecutor->GetNumReceivedTasks() == FINAL_SIZE);
    ASSERT_TRUE(numReceivedTasks == FINAL_SIZE);
    
    //    mockExecutor->GetTaskSignal()->notify_all();
    taskSignal.notify_all();
    
    locker.lock();
    
    doneSignal.wait(locker);
    
    ASSERT_TRUE(taskOrder.size() == FINAL_SIZE);
    ASSERT_TRUE(taskOrder.at(3) == 3);
    locker.unlock();
    
    AWS_END_MEMORY_TEST
}
