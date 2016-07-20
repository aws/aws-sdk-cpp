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

const char* ALLOCATION_TAG = "ExecutorTest";

// TODO: currently works just like DefaultExecutor
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
        std::thread t(fn);
        t.detach();
        return true;
    }
};

/** Vector to track order in which tasks have run */
std::vector<int> taskOrder;
std::mutex taskOrderLock;
std::condition_variable taskOrderSignal;
bool shouldClearTaskOrder;

/** Adds id to taskOrder vector and notifies waiting threads if the size of taskOrder reaches
 *  the specified size */
void executeTask(int id, size_t whenToSignal)
{
    std::unique_lock<std::mutex> locker(taskOrderLock);
    if (!shouldClearTaskOrder)
    {
        taskOrder.push_back(id);
        if (taskOrder.size() == whenToSignal)
        {
            locker.release();
            taskOrderSignal.notify_all();
        }
    }
}

/** Clears all entries in the task order tracker */
void clearTaskOrder()
{
    std::lock_guard<std::mutex> locker(taskOrderLock);
    shouldClearTaskOrder = true;
    taskOrder.clear();
}

/** Trivial test to see if BlockingExecutor can run a single task. */
TEST(BlockingExecutorTest, TestExecuteSingleTask)
{
    AWS_BEGIN_MEMORY_TEST(16, 10)
    
    std::shared_ptr<MockExecutor> mockExecutor = Aws::MakeShared<MockExecutor>(ALLOCATION_TAG);
    BlockingExecutor blockingExecutor(mockExecutor, 5);
    
    size_t FINAL_SIZE = 1;
    
    blockingExecutor.Submit(executeTask, 0, FINAL_SIZE);
    std::unique_lock<std::mutex> locker(taskOrderLock);
    taskOrderSignal.wait(locker);
    
    ASSERT_TRUE(taskOrder.size() == 1);
    ASSERT_TRUE(taskOrder.at(0) == 0);
    
    clearTaskOrder();
    
    AWS_END_MEMORY_TEST
}
