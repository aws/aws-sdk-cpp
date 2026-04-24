/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeCacheClustersOutcome;
    using RequestT = Model::DescribeCacheClustersRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-network"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("restore-failed"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCacheClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilCacheClusterAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeCacheClustersOutcome> WaitUntilCacheClusterDeleted(
      const Model::DescribeCacheClustersRequest& request) {
    using OutcomeT = Model::DescribeCacheClustersOutcome;
    using RequestT = Model::DescribeCacheClustersRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CacheClusterNotFound")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("available"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-network"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("restore-failed"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "CacheClusterDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("snapshotting"),
        [](const Model::DescribeCacheClustersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetCacheClusters().begin(), result.GetCacheClusters().end(),
                             [&](const Model::CacheCluster& item) { return item.GetCacheClusterStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeCacheClusters(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilCacheClusterDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationGroupsOutcome> WaitUntilReplicationGroupAvailable(
      const Model::DescribeReplicationGroupsRequest& request) {
    using OutcomeT = Model::DescribeReplicationGroupsOutcome;
    using RequestT = Model::DescribeReplicationGroupsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationGroupAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                             [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationGroupAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                             [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationGroups(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationGroupAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationGroupsOutcome> WaitUntilReplicationGroupDeleted(
      const Model::DescribeReplicationGroupsRequest& request) {
    using OutcomeT = Model::DescribeReplicationGroupsOutcome;
    using RequestT = Model::DescribeReplicationGroupsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationGroupDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                             [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationGroupDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("available"),
        [](const Model::DescribeReplicationGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationGroups().begin(), result.GetReplicationGroups().end(),
                             [&](const Model::ReplicationGroup& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ReplicationGroupDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ReplicationGroupNotFoundFault")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationGroups(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationGroupDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace ElastiCache
}  // namespace Aws
