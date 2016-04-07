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

#pragma once

#include <aws/core/utils/LocklessQueue.h>
#include <functional>
#include <mutex>
#include <thread>

namespace Aws
{
    namespace Utils
    {
        namespace Threading
        {
            class AWS_CORE_API ThreadTask
            {
            public:
                ThreadTask(size_t maxQueueLength = 1);
                ~ThreadTask();

                /**
                * Rule of 5 stuff.
                * Don't copy or move
                */
                ThreadTask(const ThreadTask&) = delete;
                ThreadTask& operator =(const ThreadTask&) = delete;
                ThreadTask(ThreadTask&&) = delete;
                ThreadTask& operator =(ThreadTask&&) = delete;

                bool QueueWork(std::function<void()>&&);
                void StopProcessingWork();
                inline size_t GetQueuedCount() const { return m_taskQueue.Size(); }
                inline bool CanAcceptWork() const { return GetQueuedCount() < m_maxQueueLength; }

            protected:
                void MainTaskRunner();

            private:
                LocklessQueue<std::function<void()>> m_taskQueue;
                std::atomic<bool> m_continue;
                std::mutex m_semaphoreLock;
                std::condition_variable m_semaphore;
                size_t m_maxQueueLength;
                std::thread m_thread;
            };
        }
    }
}
