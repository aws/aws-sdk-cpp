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
    size_t taskQueueSize = SIZE_MAX;

    if (m_overflowPolicy == OverflowPolicy::REJECT_IMMEDIATELY)
    {
        taskQueueSize = 1u;
    }

    for (size_t index = 0; index < m_poolSize; ++index)
    {
        m_threadPool.Push(Aws::New<ThreadTask>(POOLED_CLASS_TAG, taskQueueSize));
    }
}

PooledThreadExecutor::~PooledThreadExecutor()
{
    ThreadTask* threadTask = nullptr;
    while (m_threadPool.Pop(threadTask) && threadTask)
    {
        threadTask->StopProcessingWork();
        Aws::Delete(threadTask);
    }
}

bool PooledThreadExecutor::SubmitToThread(std::function<void()>&& fn)
{
    ThreadTask* threadTask = nullptr;
    bool availableThread = m_threadPool.Pop(threadTask);

    if (!availableThread || !threadTask)
    {
        return false;
    }

    m_threadPool.Push(threadTask);

    if (threadTask->CanAcceptWork())
    {
        return threadTask->QueueWork(std::forward<std::function<void()>>(fn));
    }

    return false;
}
