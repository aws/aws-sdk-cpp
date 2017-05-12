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

#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/threading/ThreadTask.h>
#include <thread>

static const char* POOLED_CLASS_TAG = "PooledThreadExecutor";

using namespace Aws::Utils::Threading;

bool DefaultExecutor::SubmitToThread(std::function<void()>&&  fx)
{
    std::thread t(fx);
    t.detach();
    return true;
}

PooledThreadExecutor::PooledThreadExecutor(size_t poolSize, OverflowPolicy overflowPolicy) :
    m_poolSize(poolSize), m_overflowPolicy(overflowPolicy)
{
    for (size_t index = 0; index < m_poolSize; ++index)
    {
        m_threadTaskHandles.push_back(Aws::New<ThreadTask>(POOLED_CLASS_TAG, *this));
    }
}

PooledThreadExecutor::~PooledThreadExecutor()
{
    for(auto threadTask : m_threadTaskHandles)
    {
        threadTask->StopProcessingWork();       
    }

    m_syncPoint.notify_all();

    for (auto threadTask : m_threadTaskHandles)
    {
        Aws::Delete(threadTask);
    }

    while(m_tasks.size() > 0)
    {
        std::function<void()>* fn = m_tasks.front();
        m_tasks.pop();

        if(fn)
        {
            Aws::Delete(fn);
        }
    }

}

bool PooledThreadExecutor::SubmitToThread(std::function<void()>&& fn)
{
    //avoid the need to do copies inside the lock. Instead lets do a pointer push.
    std::function<void()>* fnCpy = Aws::New<std::function<void()>>(POOLED_CLASS_TAG, std::forward<std::function<void()>>(fn));

    {
        std::lock_guard<std::mutex> locker(m_queueLock);

        if (m_overflowPolicy == OverflowPolicy::REJECT_IMMEDIATELY && m_tasks.size() >= m_poolSize)
        {
            return false;
        }

        m_tasks.push(fnCpy);
    }

    m_syncPoint.notify_one();
  
    return true;
}

std::function<void()>* PooledThreadExecutor::PopTask()
{
    std::lock_guard<std::mutex> locker(m_queueLock);

    if (m_tasks.size() > 0)
    {
        std::function<void()>* fn = m_tasks.front();
        if (fn)
        {           
            m_tasks.pop();
            return fn;
        }
    }

    return nullptr;
}

bool PooledThreadExecutor::HasTasks()
{
    std::lock_guard<std::mutex> locker(m_queueLock);
    return m_tasks.size() > 0;
}

BlockingExecutor::BlockingExecutor(std::shared_ptr<Executor> executor, size_t poolSize) :
    m_executor(executor), m_poolSize(poolSize), m_numTasksRunning(0)
{
}

BlockingExecutor::~BlockingExecutor()
{
    WaitForCompletion();
}

bool BlockingExecutor::SubmitToThread(std::function<void()>&& fn)
{
    std::unique_lock<std::recursive_mutex> locker(m_syncPointLock);
    if (m_numTasksRunning >= m_poolSize)
    {
        m_syncPoint.wait(locker, [&]{
            return m_numTasksRunning < m_poolSize;
        });
    }
    m_numTasksRunning++;
    locker.unlock();
    
    m_executor->Submit(&BlockingExecutor::ExecuteTask, this, fn);
    return true;
}

void BlockingExecutor::ExecuteTask(std::function<void()> fn)
{
    fn();
    OnTaskComplete();
}

void BlockingExecutor::OnTaskComplete()
{
    std::unique_lock<std::recursive_mutex> locker(m_syncPointLock);
    m_numTasksRunning--;
    m_syncPoint.notify_one();
    locker.unlock();
}

void BlockingExecutor::WaitForCompletion()
{
    while (m_numTasksRunning != 0)
    {
        std::this_thread::yield();
        if (m_numTasksRunning == 0)
        {
            // Make sure the condition actually does hold under the lock
            std::lock_guard<std::recursive_mutex> locker(m_syncPointLock);
            if (m_numTasksRunning == 0)
            {
                break;
            }
        }
    }
}
