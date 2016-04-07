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

#include <aws/core/utils/threading/ThreadTask.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Threading;

ThreadTask::ThreadTask(size_t maxQueueLength) : m_continue(true), m_maxQueueLength(maxQueueLength), m_thread(std::bind(&ThreadTask::MainTaskRunner, this))
{
}

ThreadTask::~ThreadTask()
{
    StopProcessingWork();
    m_thread.join();
}

void ThreadTask::MainTaskRunner()
{
    std::function<void()> fn;

    while (m_continue)
    {
        while (m_taskQueue.Pop(fn) && m_continue)
        {
            fn();
        }

        std::unique_lock<std::mutex> locker(m_semaphoreLock);
        m_semaphore.wait(locker);
    }
}

bool ThreadTask::QueueWork(std::function<void()>&& fn)
{
    if (!CanAcceptWork())
    {
        return false;
    }

    m_taskQueue.Push(std::forward<std::function<void()>>(fn));
    m_semaphore.notify_one();
    return true;
}

void ThreadTask::StopProcessingWork()
{
    if (m_continue)
    {
        m_continue = false;
        m_semaphore.notify_one();
    }
}
