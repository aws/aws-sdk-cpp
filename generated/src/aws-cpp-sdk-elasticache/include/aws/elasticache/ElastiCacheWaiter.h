/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/elasticache/ElastiCacheClient.h>
#include <aws/elasticache/model/DescribeCacheClustersRequest.h>
#include <aws/elasticache/model/DescribeCacheClustersResult.h>
#include <aws/elasticache/model/DescribeReplicationGroupsRequest.h>
#include <aws/elasticache/model/DescribeReplicationGroupsResult.h>

#include <algorithm>

namespace Aws {
namespace ElastiCache {

template <typename DerivedClient = ElastiCacheClient>
class ElastiCacheWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeCacheClustersOutcome> WaitUntilCacheClusterAvailable(
      const Model::DescribeCacheClustersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeCacheClustersOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-network"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("restore-failed"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});

    auto operation = [this](const Model::DescribeCacheClustersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeCacheClusters(req);
    };
    Aws::Utils::Waiter<Model::DescribeCacheClustersRequest, Model::DescribeCacheClustersOutcome> waiter(15, 8, acceptors, operation,
                                                                                                        "WaitUntilCacheClusterAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeCacheClustersOutcome> WaitUntilCacheClusterDeleted(
      const Model::DescribeCacheClustersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeCacheClustersOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::all_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("CacheClusterNotFound")});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("available"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-network"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("restore-failed"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("snapshotting"),
         [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                              [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
         }});

    auto operation = [this](const Model::DescribeCacheClustersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeCacheClusters(req);
    };
    Aws::Utils::Waiter<Model::DescribeCacheClustersRequest, Model::DescribeCacheClustersOutcome> waiter(15, 8, acceptors, operation,
                                                                                                        "WaitUntilCacheClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationGroupsOutcome> WaitUntilReplicationGroupAvailable(
      const Model::DescribeReplicationGroupsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationGroupsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                               [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                               [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeReplicationGroupsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationGroups(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationGroupsRequest, Model::DescribeReplicationGroupsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationGroupAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationGroupsOutcome> WaitUntilReplicationGroupDeleted(
      const Model::DescribeReplicationGroupsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationGroupsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("deleted"),
                         [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                               [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                               [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ReplicationGroupNotFoundFault")});

    auto operation = [this](const Model::DescribeReplicationGroupsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationGroups(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationGroupsRequest, Model::DescribeReplicationGroupsOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationGroupDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace ElastiCache
}  // namespace Aws
