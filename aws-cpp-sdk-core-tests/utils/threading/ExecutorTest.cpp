/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

///** Mock executor spawns a thread for each function.
// *  This executor supports "isolated tasks". An isolated task blocks any other task from starting until
// *  it is complete. This is used to guarantee ordering in some tests below. */
//class MockExecutor : public Executor
//{
//public:
//    MockExecutor() { }
//    ~MockExecutor() { }
//    
//    MockExecutor(const MockExecutor&) = delete;
//    MockExecutor& operator =(const MockExecutor&) = delete;
//    MockExecutor(MockExecutor&&) = delete;
//    MockExecutor& operator =(ThreadlessMockExecutor&&) = delete;
//    
//    /* TODO: Not the best way to implement isolated tasks. Ideally, you should be able to specify whether
//     * a task is isolated upon submission. With this implementation, it's impossible to have fine-tuned
//     * control over which tasks are isolated and which aren't. */
//    void StartCreateIsolatedTask()
//    {
//        m_createIsolatedTask = true;
//    }
//    
//    void StopCreateIsolatedTask()
//    {
//        m_createIsolatedTask = false;
//    }
//    
//    bool IsIsolatedTaskRunning()
//    {
//        return m_isolatedTaskRunning;
//    }
//    
//    std::mutex
//    
//protected:
//    bool SubmitToThread(std::function<void()>&& fn)
//    {
//        // Check if there's an isolated task running. If so, don't unlock until it's done.
//        std::unique_lock<std::mutex> locker(m_isolatedTaskLock);
//        if (m_isolatedTaskRunning)
//        {
//            m_isolatedTaskDoneSignal.wait(locker);
//        }
//        locker.unlock();
//        
//        if (m_createIsolatedTask)
//        {
//            std::unique_lock<std::mutex> locker(m_isolatedTaskLock);
//            m_isolatedTaskRunning = true;
//            locker.unlock();
//            
//            auto isolatedFn = [&]
//            {
//                fn();
//                OnIsolatedTaskComplete();
//            };
//            
//            std::thread t(isolatedFn);
//            t.detach();
//        }
//        else
//        {
//            std::thread t(fn);
//            t.detach();
//        }
//        return true;
//    }
//    
//    void OnIsolatedTaskComplete()
//    {
//        std::unique_lock<std::mutex> locker(m_isolatedTaskLock);
//        m_isolatedTaskRunning = false;
//        locker.unlock();
//        m_isolatedTaskDoneSignal.notify_all();
//    }
//    
//private:
//    bool m_createIsolatedTask = false;
//    bool m_isolatedTaskRunning = false;
//    std::mutex m_isolatedTaskLock;
//    std::condition_variable m_isolatedTaskDoneSignal;
//    
//};

///** Test whether a task gets blocked properly if max pool size is exceeded */
//TEST(BlockingExecutorTest, TestBlockSingleTask)
//{
//    AWS_BEGIN_MEMORY_TEST(16, 10)
//    
////    std::shared_ptr<MockExecutor> mockExecutor = Aws::MakeShared<MockExecutor>(ALLOCATION_TAG);
////    BlockingExecutor blockingExecutor(mockExecutor, 3);
//    
//    std::shared_ptr<DefaultExecutor> mockExecutor =
//            Aws::MakeShared<DefaultExecutor>(EXECUTOR_TEST_ALLOCATION_TAG);
//    BlockingExecutor blockingExecutor(mockExecutor, 3);
//    
//    Aws::Vector<u_long> taskOrder;
//    size_t FINAL_SIZE = 4;
//    
//    std::mutex taskLock;
//    std::condition_variable startSignal;
//    std::condition_variable taskSignal;
//    std::condition_variable doneSignal;
//    
//    const u_int8_t WAIT_FOR_START_SIGNAL = 1 << 0;
//    const u_int8_t WAIT_FOR_TASK_SIGNAL = 1 << 1;
//    const u_int8_t SIGNAL_OTHER_TASKS = 1 << 2;
//    
//    auto executeTask = [&](u_long id, u_int8_t flags)
//    {
//        std::unique_lock<std::mutex> locker(taskLock);
//        
//        if ((flags & WAIT_FOR_START_SIGNAL) == WAIT_FOR_START_SIGNAL)
//        {
//            startSignal.wait(locker);
//        }
//        if ((flags & WAIT_FOR_TASK_SIGNAL) == WAIT_FOR_TASK_SIGNAL)
//        {
//            taskSignal.wait(locker);
//        }
////        // TODO: This tight coupling with the task needing to access the executor
////        // is probably not the best code architecture.
////        std::unique_lock<std::mutex> isolatedLocker(mockExecutor->)
////        if (mockExecutor->IsIsolatedTaskRunning())
////        {
////            
////        }
//        taskOrder.emplace_back(id);
//        if (taskOrder.size() == FINAL_SIZE)
//        {
//            locker.unlock();
//            doneSignal.notify_all();
//        }
//        else
//        {
//            if ((flags & SIGNAL_OTHER_TASKS) == SIGNAL_OTHER_TASKS)
//            {
//                locker.unlock();
//                taskSignal.notify_all();
//                locker.lock();
//            }
//        }
//    };
//    
//    // Tasks 0 and 1 wait until they are signaled by another task
//    blockingExecutor.Submit(executeTask, 0, WAIT_FOR_TASK_SIGNAL);
//    blockingExecutor.Submit(executeTask, 1, WAIT_FOR_TASK_SIGNAL);
//    
//    // Task 2 waits for a start signal
//    blockingExecutor.Submit(executeTask, 2, WAIT_FOR_START_SIGNAL);
//    
//    // Task 3 starts on its own and then signals other tasks
////    mockExecutor->StartCreateIsolatedTask();
//    blockingExecutor.Submit(executeTask, 3, SIGNAL_OTHER_TASKS);
////    mockExecutor->StopCreateIsolatedTask();
//    
//    startSignal.notify_all();
//    
//    std::unique_lock<std::mutex> locker(taskLock);
//    doneSignal.wait(locker);
//    
//    ASSERT_TRUE(taskOrder.size() == FINAL_SIZE);
//    
//    /* Max pool size is 3, so task 3 should get blocked. If blocking did not work properly,
//     * task 3 would likely finish first because it would start without needing to wait for a signal */
////     * it would prevent task 2 from finishing execution until it was done since it's an
////     * isolated task. */
//    ASSERT_TRUE(taskOrder.at(0) == 2);
//    ASSERT_TRUE(taskOrder.at(1) == 3);
//    ASSERT_TRUE(taskOrder.at(2) == 0 || taskOrder.at(2) == 1);
//    ASSERT_TRUE(taskOrder.at(3) == 1 || taskOrder.at(3) == 0);
//    
//    AWS_END_MEMORY_TEST
//}
