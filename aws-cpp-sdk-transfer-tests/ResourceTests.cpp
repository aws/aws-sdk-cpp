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

#include <aws/core/utils/logging/LogMacros.h>

#include <aws/transfer/resource/FairBoundedResourceManager.h>
#include <aws/transfer/resource/ScopedResourceSet.h>

#include <functional>
#include <thread>

using namespace Aws::Transfer;

static const char* TAG = "ResourceTests";

using ResourceType = uint32_t; // doesn't really matter what this is
using ResourceManagerTestType = FairBoundedResourceManager< ResourceType >;
using ScopedResourceSetTestType = ScopedResourceSet< ResourceType >;
using ResourceListTestType = ResourceManagerTestType::ResourceListType;


static ResourceType ResourceFactoryFunction(void)
{
    return 0;
}

TEST(FairBoundedResourceManagerTest, Trivial)
{
    // make a single, non-contentious resource request
    ResourceManagerTestType manager(ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    ResourceListTestType resources;
    manager.AcquireResources(1, resources);
    ASSERT_TRUE(resources.size() == 1);

    manager.ReleaseResources(resources);
    ASSERT_TRUE(resources.size() == 0);
}

TEST(FairBoundedResourceManagerTest, Overflow)
{
    // request more resources than the manager holds
    ResourceManagerTestType manager(ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    ResourceListTestType resources;
    manager.AcquireResources(7, resources);
    ASSERT_TRUE(resources.size() == 5);

    manager.ReleaseResources(resources);
    ASSERT_TRUE(resources.size() == 0);
}

TEST(FairBoundedResourceManagerTest, Multiple)
{
    // make multiple fulfillable requests
    ResourceManagerTestType manager(ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    ResourceListTestType resources;
    manager.AcquireResources(3, resources);
    ASSERT_TRUE(resources.size() == 3);

    ResourceListTestType resources2;
    manager.AcquireResources(2, resources2);
    ASSERT_TRUE(resources2.size() == 2);

    manager.ReleaseResources(resources2);
    ASSERT_TRUE(resources2.size() == 0);

    manager.ReleaseResources(resources);
    ASSERT_TRUE(resources.size() == 0);
}

TEST(FairBoundedResourceManagerTest, MultipleOverflow)
{
    // make multiple requests that exceed capacity; because our wait type is AT_LEAST_ONE_AVAILABLE we won't block but we won't get as many as we asked for
    ResourceManagerTestType manager(ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // take almost all the resources
    ResourceListTestType resources;
    manager.AcquireResources(4, resources);
    ASSERT_TRUE(resources.size() == 4);

    // ask for too many, verify we didn't get as much as we asked for
    ResourceListTestType resources2;
    manager.AcquireResources(3, resources2);
    ASSERT_TRUE(resources2.size() == 1);

    // release the first set of resources
    manager.ReleaseResources(resources);
    ASSERT_TRUE(resources.size() == 0);

    // try the second request again, this time we should get everything we asked for
    manager.AcquireResources(3, resources2);
    ASSERT_TRUE(resources2.size() == 3);

    manager.ReleaseResources(resources2);
    ASSERT_TRUE(resources2.size() == 0);
}

TEST(FairBoundedResourceManagerTest, ScopedTest)
{
    // grab all the resources using the scoped resource set type, then verify that they automatically release their acquired resources when they get destroyed
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    {
        ScopedResourceSetTestType scopedSet(3, manager);
        ASSERT_TRUE(scopedSet.GetResources().size() == 3);

        ScopedResourceSetTestType scopedSet2(5, manager);
        ASSERT_TRUE(scopedSet2.GetResources().size() == 2);
    }

    ScopedResourceSetTestType scopedSet3(5, manager);
    ASSERT_TRUE(scopedSet3.GetResources().size() == 5);
}

TEST(FairBoundedResourceManagerTest, ScopedReacquireTest)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // similar to the scoped test, but we manually destroy the scoped set by assigning the unique ptr reference to it to nullptr
    // this lets us test the Reacquire function of a scoped set that was declared after the first one
    auto bufferHog = Aws::MakeUnique<ScopedResourceSetTestType>(TAG, 3, manager);
    ASSERT_TRUE(bufferHog->GetResources().size() == 3);

    ScopedResourceSetTestType scopedSet2(5, manager);
    ASSERT_TRUE(scopedSet2.GetResources().size() == 2);

    scopedSet2.TryReacquire();
    ASSERT_TRUE(scopedSet2.GetResources().size() == 2);

    bufferHog = nullptr;

    scopedSet2.TryReacquire();
    ASSERT_TRUE(scopedSet2.GetResources().size() == 5);
}


void AllAcquireThreadFunction(std::shared_ptr<ResourceManagerTestType> manager, uint32_t resourceCount, uint32_t holdTimeInMilliseconds, uint32_t iterations)
{
    for(uint32_t i = 0; i < iterations; ++i)
    {
        ScopedResourceSetTestType scopedSet(resourceCount, manager);
        ASSERT_TRUE(scopedSet.GetResources().size() == resourceCount);

        AWS_LOGSTREAM_INFO( TAG, "Acquired " << scopedSet.GetResources().size() << " resources\n" );

        std::this_thread::sleep_for(std::chrono::milliseconds(holdTimeInMilliseconds));

        AWS_LOGSTREAM_INFO( TAG, "Releasing " << scopedSet.GetResources().size() << " resources\n" );   
    }     
}

TEST(FairBoundedResourceManagerTest, EasyMultiThreadAllAcquire)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::ALL_AVAILABLE);

    // a single iteration of contentious acquire-release using long length hold intervals
    std::thread requester1(AllAcquireThreadFunction, manager, 1, 2000, 1);
    std::thread requester2(AllAcquireThreadFunction, manager, 1, 2500, 1);
    std::thread requester3(AllAcquireThreadFunction, manager, 1, 1000, 1);
    std::thread requester4(AllAcquireThreadFunction, manager, 1, 3500, 1);
    std::thread requester5(AllAcquireThreadFunction, manager, 1, 500, 1);

    requester1.join();
    requester2.join();
    requester3.join();
    requester4.join();
    requester5.join();

    ScopedResourceSetTestType scopedSet(5, manager);
    ASSERT_TRUE(scopedSet.GetResources().size() == 5);
}

TEST(FairBoundedResourceManagerTest, HardMultiThreadAllAcquire)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::ALL_AVAILABLE);

    // 10 iterations of contentious acquire-release using medium length hold intervals
    std::thread requester1(AllAcquireThreadFunction, manager, 4, 200, 10);
    std::thread requester2(AllAcquireThreadFunction, manager, 3, 250, 10);
    std::thread requester3(AllAcquireThreadFunction, manager, 5, 100, 10);
    std::thread requester4(AllAcquireThreadFunction, manager, 2, 350, 10);

    requester1.join();
    requester2.join();
    requester3.join();
    requester4.join();

    ScopedResourceSetTestType scopedSet(5, manager);
    ASSERT_TRUE(scopedSet.GetResources().size() == 5);
}

TEST(FairBoundedResourceManagerTest, TortuousMultiThreadAllAcquire)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::ALL_AVAILABLE);

    // 100 iterations of contentious acquire-release using short length hold intervals
    std::thread requester1(AllAcquireThreadFunction, manager, 4, 20, 100);
    std::thread requester2(AllAcquireThreadFunction, manager, 3, 25, 100);
    std::thread requester3(AllAcquireThreadFunction, manager, 5, 10, 100);
    std::thread requester4(AllAcquireThreadFunction, manager, 2, 35, 100);
    std::thread requester5(AllAcquireThreadFunction, manager, 1, 50, 100);
    std::thread requester6(AllAcquireThreadFunction, manager, 5, 5,  100);

    requester1.join();
    requester2.join();
    requester3.join();
    requester4.join();
    requester5.join();
    requester6.join();

    ScopedResourceSetTestType scopedSet(5, manager);
    ASSERT_TRUE(scopedSet.GetResources().size() == 5);
}

void PartialAcquireThreadFunction(std::shared_ptr<ResourceManagerTestType> manager, uint32_t resourceCount, uint32_t holdTimeInMilliseconds, uint32_t iterations)
{
    static const uint32_t MAX_REACQUIRE_ATTEMPTS = 20;
    for(uint32_t i = 0; i < iterations; ++i)
    {
        uint32_t attempts = 0;
        ScopedResourceSetTestType scopedSet(resourceCount, manager);

        while(scopedSet.GetResources().size() != resourceCount && attempts < MAX_REACQUIRE_ATTEMPTS)
        {
            scopedSet.TryReacquire();
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            attempts++;
        }
        ASSERT_TRUE(scopedSet.GetResources().size() > 0);

        AWS_LOGSTREAM_INFO( TAG, "Eventually acquired " << scopedSet.GetResources().size() << " buffers, wanted " << resourceCount << " buffers\n" );

        std::this_thread::sleep_for(std::chrono::milliseconds(holdTimeInMilliseconds));

        AWS_LOGSTREAM_INFO( TAG, "Releasing " << scopedSet.GetResources().size() << " buffers\n" );         
    }       
}

TEST(FairBoundedResourceManagerTest, MultiThreadPartialAcquireHard)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // 15 iterations of partial, contentious acquire-release using medium length hold intervals
    std::thread requester1(PartialAcquireThreadFunction, manager, 4, 200, 15);
    std::thread requester2(PartialAcquireThreadFunction, manager, 3, 250, 15);
    std::thread requester3(PartialAcquireThreadFunction, manager, 5, 100, 15);
    std::thread requester4(PartialAcquireThreadFunction, manager, 2, 350, 15);

    requester1.join();
    requester2.join();
    requester3.join();
    requester4.join();

    ScopedResourceSetTestType scopedSet(5, manager);
    ASSERT_TRUE(scopedSet.GetResources().size() == 5);
}

TEST(FairBoundedResourceManagerTest, MultiThreadPartialAcquireTortuous)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // 150 iterations of partial, contentious acquire-release using short hold intervals
    std::thread requester1(PartialAcquireThreadFunction, manager, 4, 20, 150);
    std::thread requester2(PartialAcquireThreadFunction, manager, 3, 25, 150);
    std::thread requester3(PartialAcquireThreadFunction, manager, 5, 10, 150);
    std::thread requester4(PartialAcquireThreadFunction, manager, 2, 35, 150);

    requester1.join();
    requester2.join();
    requester3.join();
    requester4.join();

    ScopedResourceSetTestType scopedSet(5, manager);
    ASSERT_TRUE(scopedSet.GetResources().size() == 5);
}

TEST(FairBoundedResourceManagerTest, GrowResourcePool)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 5, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // take all the resources
    ScopedResourceSetTestType scopedSet(5, manager);
    ASSERT_TRUE(scopedSet.GetResources().size() == 5);

    // spawn a thread that wants a resource; it will block permanently since we've taken everything
    std::thread requester(PartialAcquireThreadFunction, manager, 1, 0, 1);

    // wait until the spawned thread has visibly blocked on the resource acquisition
    while(manager->GetWaiterCount() == 0)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(0));
    }

    // grow the resource pool, the blocked thread should manage to acquire the newly added resource and so we can join against it and the test will not loop endlessly
    manager->AdjustResourceCount(6);

    requester.join();
}

TEST(FairBoundedResourceManagerTest, ShrinkResourcePoolEasy1)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 3, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // the easy case is when there aren't any requesters that we need to wake up due to existing allocations exceeding the new pool size
    // for the first easy test, there aren't any waiters; just verify the pool size shrunk

    // Take all but 1 resource
    ResourceListTestType resources1;
    manager->AcquireResources(1, resources1);

    ResourceListTestType resources2;
    manager->AcquireResources(1, resources2);

    // Shrink the resource pool to 2, which are currently acquired; this should free the 1 resource that was still in the pool
    manager->AdjustResourceCount(2);

    // try to take a resource, non-blocking; we should get nothing since the pool got emptied
    ResourceListTestType clamped;
    manager->TryAcquireResources(1, clamped);
    ASSERT_TRUE(clamped.size() == 0);

    // release 1 resource and try to take 2, we should get 1
    manager->ReleaseResources(resources2);

    manager->TryAcquireResources(2, clamped);
    ASSERT_TRUE(clamped.size() == 1);

    // release the other outstanding resource
    manager->ReleaseResources(resources1);

    // up our request to 3 (remember that we already have 1 acquired); afterwards we should have both the remaining resources
    manager->TryAcquireResources(3, clamped);
    ASSERT_TRUE(clamped.size() == 2);

    manager->ReleaseResources(clamped);
}

TEST(FairBoundedResourceManagerTest, ShrinkResourcePoolEasy2)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 2, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // the easy case is when there aren't any requesters that we need to wake up due to existing allocations exceeding the new pool size
    // for the second easy test, add waiters but don't shrink the pool enough to cause their request to fail

    // grab all the resources
    ResourceListTestType resources;
    manager->AcquireResources(2, resources);

    // spawn a thread that blocks on its request because there's no resources available
    std::thread requester(PartialAcquireThreadFunction, manager, 1, 0, 1);

    while(manager->GetWaiterCount() == 0)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(0));
    }

    // shrink the pool and wait a bit
    manager->AdjustResourceCount(1);
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    // verify the thread is still waiting
    ASSERT_TRUE(manager->GetWaiterCount() == 1);

    // release our resources and wait on the spawned thread
    manager->ReleaseResources(resources);

    requester.join();
}

void ShrinkTestWithBrokenAcquire(const std::shared_ptr<ResourceManagerTestType>& manager, ResourceListTestType& resources)
{
    ASSERT_TRUE(resources.size() == 1);

    // at the point we reach here, there's no resources left in the manager and this call will block
    // the main thread then shrinks the resource pool making this request impossible to fulfill
    // we expect to unblock and find that resources has not changed in size
    manager->AcquireResources(2, resources);

    ASSERT_TRUE(resources.size() == 1);
}

TEST(FairBoundedResourceManagerTest, ShrinkResourcePoolHard)
{
    auto manager = Aws::MakeShared<ResourceManagerTestType>(TAG, ResourceFactoryFunction, 2, ResourceWaitPolicy::AT_LEAST_ONE_AVAILABLE);

    // for the hard case, add a waiter whose request will be unfillable due to the pool shrinkage

    // take all resources
    ResourceListTestType resources;
    manager->AcquireResources(1, resources);
    ASSERT_TRUE(resources.size() == 1);

    ResourceListTestType badResources;
    manager->AcquireResources(1, badResources);
    ASSERT_TRUE(resources.size() == 1);

    // spawn a thread that tries to take an additional resource for badResources; this will block
    std::thread failedRequest(ShrinkTestWithBrokenAcquire, std::ref(manager), std::ref(badResources));

    // verify that the spawned thread is waiting
    while(manager->GetWaiterCount() == 0)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(0));
    }

    // shrink the pool; this will make the blocked request impossible to fulfill even if all other resources were released; we expect that we can now join the spawned thread because it unblocked
    // the spawned thread will verify that it did not get any additional resources from the broken call
    manager->AdjustResourceCount(1);

    failedRequest.join();

    ASSERT_TRUE(badResources.size() == 1);

    manager->ReleaseResources(resources);
    manager->ReleaseResources(badResources);
}
