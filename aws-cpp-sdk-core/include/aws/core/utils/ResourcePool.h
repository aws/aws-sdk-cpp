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
#pragma once

#include <aws/core/utils/memory/stl/AWSVector.h>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <cassert>


namespace Aws
{
    namespace Utils
    {
        /**
         * Generic resource pool with maximum size and Acquire/Release semantics. Acquire will block waiting on a an available resource.
         * Release will cause one blocked acquisition to unblock.
         *
         * `RESOURCE_TYPE` should be a pointer-like type satisfying the following requirements:
         * Given:
         * - `r` and `r1` are objects of type `RESOURCE_TYPE`
         * The following should be valid:
         * - `RESOURCE_TYPE r = r1`
         * - `!r` is `true` when and only when `r` represents invalid resource
         * - Value-initialized `RESOURCE_TYPE` (i.e. `RESOURCE_TYPE r{}`) represents invalid value
         *
         * `RESOURCE_MANAGER_TYPE` requirements:
         * Given:
         * - `rm` is object of type `RESOURCE_MANAGER_TYPE`
         * - `r` is object of type `RESOURCE_TYPE`
         * The following should be valid:
         * - `RESOURCE_TYPE r = rm.Create()` creates resource `r`
         * - `rm.Reset(r)` resets resource `r` between usages
         * - `rm.Destroy(r)` deletes resource `r`
         */
        template<class RESOURCE_TYPE, class RESOURCE_MANAGER_TYPE>
        class ResourcePool
        {
        public:
            template<class... T>
            explicit ResourcePool(unsigned maxSize, T&&... resourceManagerParameters)
            : m_maxSize(maxSize)
            , m_resourceManager(std::forward<T>(resourceManagerParameters)...)
            {}

            ~ResourcePool()
            {
                ShutdownAndWait();

                for (auto& r: m_resources)
                    m_resourceManager.Destroy(r);
            }

            /**
             * Returns a resource with exclusive ownership. Caller must call Release on the resource when it is finished
             * or other threads will block waiting to acquire it.
             *
             * @return instance of RESOURCE_TYPE
             */
            RESOURCE_TYPE Acquire()
            {
                std::unique_lock<std::mutex> lock(m_mutex);
                auto resource = DoAcquire(lock, false);
                if (resource)
                    return resource;

                // Create new resource, does not require the lock
                ++m_acquired;
                lock.unlock();
                if ((resource = m_resourceManager.Create()))
                    return resource;

                // Resource creation failed, "rollback" m_acquired and wait someone released a resource
                lock.lock();
                --m_acquired;  // Let's retry resource creation on next `Acquire()` call
                return DoAcquire(lock, true);
            }

            /**
             * Releases a resource back to the pool. This will unblock one waiting Acquire call if any are waiting.
             *
             * @param resource resource to release back to the pool
             */
            void Release(RESOURCE_TYPE resource)
            {
                assert(resource);
                std::unique_lock<std::mutex> lock(m_mutex);
                m_resourceManager.Reset(resource);
                m_resources.push_back(resource);
                --m_acquired;
                lock.unlock();
                m_semaphore.notify_one();
            }

            /**
             * Populates the pool thus one has at least the specified number of resources available.
             * Does not block or even touch the semaphores. This is intended for setup only, do not use this after Acquire has been called for the first time.
             * Number of resources should be less than pool max size.
             *
             * @return whether the operation succeeded
             * @param size desired number of resources available in the pool.
             */
            bool Reserve(unsigned size)
            {
                assert(size <= m_maxSize);
                assert(!m_acquired);
                assert(!m_shutdown);

                while (m_resources.size() < size)
                {
                    auto resource = m_resourceManager.Create();
                    if (!resource)
                        return false;
                    m_resources.push_back(resource);
                }
                return true;
            }

        private:
            RESOURCE_TYPE DoAcquire(std::unique_lock<std::mutex>& lock, bool mustExist)
            {
                m_semaphore.wait(lock, [this, mustExist]() {
                    return m_shutdown || !m_resources.empty() || (!mustExist && m_acquired != m_maxSize);
                });

                assert(!m_shutdown);

                if (m_resources.empty())
                    return RESOURCE_TYPE{};

                auto resource = m_resources.back();
                m_resources.pop_back();
                ++m_acquired;
                return resource;
            }

            void ShutdownAndWait()
            {
                std::unique_lock<std::mutex> lock(m_mutex);
                m_shutdown = true;

                m_semaphore.wait(lock, [this]() {
                    return m_acquired == 0;
                });
            }

            const unsigned m_maxSize;
            const RESOURCE_MANAGER_TYPE m_resourceManager;
            std::mutex m_mutex;
            std::condition_variable m_semaphore;
            Aws::Vector<RESOURCE_TYPE> m_resources;
            unsigned m_acquired = 0;
            bool m_shutdown = false;
        };
    }
}
