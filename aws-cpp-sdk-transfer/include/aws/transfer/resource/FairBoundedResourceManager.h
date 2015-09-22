
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

#pragma once

#include <aws/transfer/resource/ResourceManagerInterface.h>

#include <aws/core/utils/memory/stl/AWSDeque.h>

#include <algorithm>
#include <atomic>
#include <condition_variable>
#include <functional>
#include <mutex>

namespace Aws
{
namespace Transfer
{

class WaitingBufferRequester;

enum class ResourceWaitPolicy
{
    AT_LEAST_ONE_AVAILABLE,
    ALL_AVAILABLE
};

static const char* RESOURCE_MANAGER_ALLOCATION_TAG = "FairBoundedResourceManager";

/*
A thread-safe resource manager that guarantees fairness and allows several different wait policies.

C++ concurrency primitives do not provide fairness by default, so we have to implement it ourselves

type T requirements: copyable, self-cleaning 

The copyable requirement could be relaxed to just movable
*/
template< typename T >
class FairBoundedResourceManager : public ResourceManagerInterface< T >
{
    public:
    
        using ResourceFactoryType = std::function< T(void) >;
        using typename ResourceManagerInterface< T >::ResourceListType;

        FairBoundedResourceManager(ResourceFactoryType resourceFactory, uint32_t resourceCount, ResourceWaitPolicy waitPolicy = ResourceWaitPolicy::ALL_AVAILABLE);
        virtual ~FairBoundedResourceManager();

        virtual void AcquireResources(uint32_t resourceCount, ResourceListType& acquiredResources) override { AcquireResourcesInternal(resourceCount, acquiredResources, false); }
        virtual void TryAcquireResources(uint32_t resourceCount, ResourceListType& acquiredResources) override { AcquireResourcesInternal(resourceCount, acquiredResources, true); }

        virtual void ReleaseResources(ResourceListType& resources) override;

        virtual void AdjustResourceCount(uint32_t m_resourceCount) override;

        // Testing interface
        size_t GetWaiterCount();

    private:

        class WaitingResourceRequester
        {
            public:
                WaitingResourceRequester(uint32_t resourceCount, ResourceListType& acquiredResources) :
                    m_resourceList(&acquiredResources),
                    m_requestedCount(resourceCount),
                    m_readySignal(),
                    m_done(false)
                {}

                ResourceListType *m_resourceList;
                uint32_t m_requestedCount;
                std::condition_variable m_readySignal;
                std::atomic<bool> m_done;  // atomic so that changes to m_done are guaranteed visible to threads waiting on m_readySignal
        };

        using WaiterListType = Aws::Vector< std::shared_ptr< WaitingResourceRequester > >;
        using WaiterQueueType = Aws::Deque< std::shared_ptr< WaitingResourceRequester > >;  // A regular queue can't be used by std:: algorithms since it lacks iterators

        void ShrinkResourcePool();

        bool IsRequestFulfilled(uint32_t initialResourceCount, uint32_t acquiredResourceCount, uint32_t desiredResourceCount);

        void AcquireResourcesInternal(uint32_t resourceCount, ResourceListType& acquiredResources, bool returnInsteadOfWait);
        void ReleaseResourcesInternal(ResourceListType& resources, WaiterListType& fulfilledRequests);

        void FulfillRequests(const WaiterListType& requests);

        ResourceFactoryType m_resourceFactory;

        ResourceWaitPolicy m_waitPolicy;

        uint32_t m_desiredResourceCount;
        uint32_t m_currentResourceCount;
          
        ResourceListType m_freeResources;

        std::mutex m_resourcesMutex;
        WaiterQueueType m_waiters;
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Implementation

template< typename T >
FairBoundedResourceManager< T >::FairBoundedResourceManager(ResourceFactoryType resourceFactory, uint32_t resourceCount, ResourceWaitPolicy waitPolicy) :
    m_resourceFactory(resourceFactory),
    m_waitPolicy(waitPolicy),
    m_desiredResourceCount(0),
    m_currentResourceCount(0),
    m_freeResources(),
    m_resourcesMutex(),
    m_waiters()
{
    // for now, require that at least one resource be present; this helps ensure the invariant that calling Acquire with a positive amount always returns with at least one
    // resource
    uint32_t modifiedResourceCount = std::max(resourceCount, 1U);
    m_desiredResourceCount = modifiedResourceCount;
    m_currentResourceCount = modifiedResourceCount;

    std::lock_guard<std::mutex> lock(m_resourcesMutex);

    for(uint32_t i = 0; i < m_desiredResourceCount; ++i)
    {
        m_freeResources.push_back(m_resourceFactory());
    }   
}

template< typename T >
FairBoundedResourceManager< T >::~FairBoundedResourceManager()
{
    std::lock_guard<std::mutex> lock(m_resourcesMutex);

    m_freeResources.clear();
    m_currentResourceCount = 0;
    m_desiredResourceCount = 0;
}

// assumes m_resourcesMutex has been locked by the caller
template< typename T >
void FairBoundedResourceManager< T >::ReleaseResourcesInternal(ResourceListType& resources, WaiterListType& fulfilledRequests)
{
    // add the resources back to the pool
    std::for_each(resources.begin(), resources.end(), [&](const T& resource){ m_freeResources.push_back(resource); });
    resources.clear();

    // lazy dynamic pool resizing
    ShrinkResourcePool();

    // is anyone waiting for resources?
    while(m_freeResources.size() > 0 && m_waiters.size() > 0)
    {
        auto firstWaiter = m_waiters.front();
        auto initialResourceCount = firstWaiter->m_resourceList->size();

        // add resources to the oldest waiter
        while(m_freeResources.size() > 0 && firstWaiter->m_resourceList->size() < firstWaiter->m_requestedCount)
        {
            firstWaiter->m_resourceList->push_back(m_freeResources.back());
            m_freeResources.pop_back();
        }

        if (IsRequestFulfilled(static_cast<uint32_t>(initialResourceCount), static_cast<uint32_t>(firstWaiter->m_resourceList->size()), firstWaiter->m_requestedCount))
        {
            // remove from queue and push it into a local array so that we can signal the notification when we're out of the overall resource pool lock
            fulfilledRequests.push_back(firstWaiter);
            m_waiters.pop_front();
        }
        else
        {
            break;
        }
    }
}

template< typename T >
void FairBoundedResourceManager< T >::ReleaseResources(ResourceListType& resources)
{
    WaiterListType fulfilledRequests;

    {  // begin resource lock
        std::lock_guard<std::mutex> lock(m_resourcesMutex);

        ReleaseResourcesInternal(resources, fulfilledRequests);
    } // end resource lock

    FulfillRequests(fulfilledRequests);
}

// This was surprisingly unpleasant and made things quite a bit more complex; I mildly regret doing it
template< typename T >
void FairBoundedResourceManager< T >::AdjustResourceCount(uint32_t resourceCount)
{
    // don't allow this for now because it breaks an invariant that I'd like to maintain (Acquire always returns with at least one resource)
    if (resourceCount == 0)
    {
        return;
    }

    std::unique_lock<std::mutex> lock(m_resourcesMutex);

    if(resourceCount > m_currentResourceCount)
    {
        // Grow request

        // add a corresponding amount of resources
        for(uint32_t i = 0; i < resourceCount - m_currentResourceCount; ++i)
        {
            m_freeResources.push_back(m_resourceFactory());
        }

        // if anyone's waiting, pass the resources on to them by calling a zero-length release
        // This is what forced ReleaseResources to be split into an internal function that did not touch m_resourcesMutex, and a wrapper function that did
        // If we unlocked our lock before calling the top-level ReleaseResources function, someone could sneak in and take what we just gave back; this would break fairness
        if(m_waiters.size() > 0)
        {
            WaiterListType fulfilledRequests;
            ResourceListType emptyResources;
            ReleaseResourcesInternal(emptyResources, fulfilledRequests);

            lock.unlock();
            FulfillRequests(fulfilledRequests);
            return;
        }
    }
    else if (resourceCount < m_currentResourceCount)
    {
        // Shrink request

        m_desiredResourceCount = resourceCount;

        // empty the resource pool of any excess; if the pool empties before we reach the desired amount, we'll remove the remaining items as users release resources in the future
        ShrinkResourcePool();

        // clamp each request's desired resource count by the new maximum amount
        std::for_each(m_waiters.begin(), m_waiters.end(), [&](const std::shared_ptr< WaitingResourceRequester > &waiter){ waiter->m_requestedCount = std::min(waiter->m_requestedCount, m_desiredResourceCount); });

        // If we're using the partially-fillable wait policy (AT_LEAST_ONE_AVAILABLE) then something worse can happen:
        // If the overall pool size drops <= a request's existing resource allocation, we need to just force-return the request because it has become impossible to fulfill progressively
        // Do this by partitioning the queue elements by whether or not they violate this property and then pop-and-notify all violators off the queue
        // Use a stable partition to preserve fairness
        std::stable_partition(m_waiters.begin(), m_waiters.end(), [&](const std::shared_ptr< WaitingResourceRequester > &waiter){ return waiter->m_resourceList->size() >= m_desiredResourceCount; });

        // pull off the impossible-to-fulfill violators
        Aws::Vector< std::shared_ptr< WaitingResourceRequester > > forceWakes;
        while(m_waiters.size() > 0 && m_waiters.front()->m_resourceList->size() >= m_desiredResourceCount)
        {
            forceWakes.push_back(m_waiters.front());
            m_waiters.pop_front();
        }

        lock.unlock();

        FulfillRequests(forceWakes);
    }
}

// Unprotected; assumes caller has locked m_resourcesMutex
template< typename T >
void FairBoundedResourceManager< T >::ShrinkResourcePool()
{
    if(m_currentResourceCount <= m_desiredResourceCount)
    {
        return;
    }

    size_t freeableSize = std::min( m_freeResources.size(), static_cast< size_t >(m_currentResourceCount - m_desiredResourceCount) );
    if (freeableSize > 0)
    {
        m_freeResources.erase(m_freeResources.begin() + m_freeResources.size() - freeableSize, m_freeResources.end());
        m_currentResourceCount -= static_cast<uint32_t>(freeableSize);
    }
}

template< typename T >
bool FairBoundedResourceManager< T >::IsRequestFulfilled(uint32_t initialResourceCount, uint32_t acquiredResourceCount, uint32_t desiredResourceCount)
{
    switch(m_waitPolicy)
    {
        case ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE:
            return desiredResourceCount == 0 || acquiredResourceCount > initialResourceCount;

        case ResourceWaitPolicy::ALL_AVAILABLE:
            return acquiredResourceCount >= desiredResourceCount;

        default:
            return true;
    }
}

template< typename T >
void FairBoundedResourceManager< T >::AcquireResourcesInternal(uint32_t resourceCount, ResourceListType& acquiredResources, bool returnInsteadOfWait)
{
    std::unique_lock<std::mutex> lock(m_resourcesMutex);

    size_t acquiredSize = acquiredResources.size();
    resourceCount = std::min(resourceCount, m_desiredResourceCount);
    if (acquiredSize >= resourceCount)
    {
        return;
    }

    bool shouldWait = m_waiters.size() > 0 || 
                      m_freeResources.size() == 0 || 
                      !IsRequestFulfilled(static_cast<uint32_t>(acquiredSize), static_cast<uint32_t>(acquiredSize + m_freeResources.size()), resourceCount);
    if (shouldWait)
    {
        if (returnInsteadOfWait)
        {
            return;
        }

        auto waitMemento = Aws::MakeShared< WaitingResourceRequester >(RESOURCE_MANAGER_ALLOCATION_TAG, resourceCount, acquiredResources);
        m_waiters.push_back(waitMemento);

        waitMemento->m_readySignal.wait(lock, [&](){ return waitMemento->m_done.load(); } );

        return;
    }
    
    size_t copyCount = std::min(m_freeResources.size(), static_cast<size_t>(resourceCount - acquiredSize));
    size_t startIndex = m_freeResources.size() - copyCount;
    auto rangeStart = m_freeResources.begin() + startIndex;
    auto rangeEnd = m_freeResources.end();
    std::copy(rangeStart, rangeEnd, std::back_inserter(acquiredResources));
    m_freeResources.erase(rangeStart, rangeEnd);
}

template< typename T >
void FairBoundedResourceManager< T >::FulfillRequests(const Aws::Vector< std::shared_ptr< WaitingResourceRequester > >& requests)
{
    for(uint32_t i = 0; i < requests.size(); ++i)
    {
        requests[i]->m_done = true;
        requests[i]->m_readySignal.notify_one();
    }
}

template< typename T >
size_t FairBoundedResourceManager< T >::GetWaiterCount()
{
    std::lock_guard< std::mutex > lock(m_resourcesMutex);

    return m_waiters.size();
}

} // namespace Transfer
} // namespace Aws
