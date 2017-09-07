/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    auto main = [fx, this] { 
        fx(); 
        Detach(std::this_thread::get_id()); 
    };
    std::lock_guard<std::mutex> locker(m_listLock);
    std::thread t(main);
    m_threads.emplace(t.get_id(), std::move(t));
    return true;
}

void DefaultExecutor::Detach(std::thread::id id)
{
    if(m_shuttingdown)
    {
        // we're shutting down, therefore the dtor is waiting on all the threads to join. We'll deadlock if we attempt
        // to acquire the mutex |m_listLock|.
        return;
    }
    std::lock_guard<std::mutex> locker(m_listLock);
    auto it = m_threads.find(id);
    assert(it != m_threads.end());
    it->second.detach();
    m_threads.erase(it);
}

DefaultExecutor::~DefaultExecutor()
{
    m_shuttingdown = true;
    std::lock_guard<std::mutex> locker(m_listLock);
    for (auto& pair : m_threads)
    {
        pair.second.join();
    }
    m_threads.clear();
}

PooledThreadExecutor::PooledThreadExecutor(size_t poolSize, OverflowPolicy overflowPolicy) :
    m_sync(0, poolSize), m_poolSize(poolSize), m_overflowPolicy(overflowPolicy)
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

    m_sync.ReleaseAll();

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

    m_sync.Release();
  
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
