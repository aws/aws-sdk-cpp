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

#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <mutex>
#include <condition_variable>
#include <atomic>

namespace Aws
{
    namespace Utils
    {
        /**
         * Generic resource manager with Acquire/Release semantics. Acquire will block waiting on a an available resource. Release will
         * cause one blocked acquisition to unblock.
         */
        template< typename RESOURCE_TYPE>
        class ResourceManager
        {
        public:
            ResourceManager() : m_shutdown(false) {}

            ~ResourceManager()
            {
                ShutdownAndWait();
            }

            /**
             * Returns a resource with exclusive ownership. You must call Release on the resource when you are finished or other
             * threads will block waiting to acquire it.
             *
             * @return instance of RESOURCE_TYPE
             */
            RESOURCE_TYPE Acquire()
            {
                std::unique_lock<std::mutex> locker(m_queueLock);
                while(!m_shutdown.load() && m_resources.size() == 0)
                {
                    m_semaphore.wait(locker, [&](){ return m_shutdown.load() || m_resources.size() > 0; });                    
                }

                RESOURCE_TYPE resource = m_resources.front();
                m_resources.pop();

                return resource;
            }

            /**
             * Returns whether or not resources are currently available for acquisition
             *
             * @return true means that at this instant some resources are available (though another thread may grab them from under you),
             * this is only a hint.
             */
            bool HasResourcesAvailable()
            {
                std::lock_guard<std::mutex> locker(m_queueLock);
                return m_resources.size() > 0;
            }

            /**
             * Releases a resource back to the pool. This will unblock one waiting Acquire call if any are waiting.
             *
             * @param resource resource to release back to the pool
             */
            void Release(RESOURCE_TYPE resource)
            {
                std::unique_lock<std::mutex> locker(m_queueLock);
                m_resources.push(resource);
                locker.unlock();
                m_semaphore.notify_one();
            }

            /**
             * Does not block or even touch the semaphores. This is intended for setup only, do not use this after Acquire has been called for the first time.
             *
             * @param resource resource to be managed.
             */
            void PutResource(RESOURCE_TYPE resource)
            {
                m_resources.push(resource);
            }

            /**
             * Empties the queue and then notifies all waiting threads to quit blocking.
             */
            Aws::Vector<RESOURCE_TYPE> ShutdownAndWait()
            {
                Aws::Vector<RESOURCE_TYPE> resources;
                std::lock_guard<std::mutex> locker(m_queueLock);
                while (m_resources.size() > 0)
                {
                    resources.push_back(m_resources.front());
                    m_resources.pop();
                }

                m_shutdown = true;
                m_semaphore.notify_all();
                return resources;
            }

        private:
            Aws::Queue<RESOURCE_TYPE> m_resources;
            std::mutex m_queueLock;
            std::condition_variable m_semaphore;
            std::atomic<bool> m_shutdown;
        };
    }
}