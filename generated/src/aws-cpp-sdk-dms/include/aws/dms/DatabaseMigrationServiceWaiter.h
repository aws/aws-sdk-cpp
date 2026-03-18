/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/dms/DatabaseMigrationServiceClient.h>
#include <aws/dms/model/DescribeConnectionsRequest.h>
#include <aws/dms/model/DescribeConnectionsResult.h>
#include <aws/dms/model/DescribeEndpointsRequest.h>
#include <aws/dms/model/DescribeEndpointsResult.h>
#include <aws/dms/model/DescribeReplicationInstancesRequest.h>
#include <aws/dms/model/DescribeReplicationInstancesResult.h>
#include <aws/dms/model/DescribeReplicationTasksRequest.h>
#include <aws/dms/model/DescribeReplicationTasksResult.h>

#include <algorithm>

namespace Aws {
namespace DatabaseMigrationService {

template <typename DerivedClient = DatabaseMigrationServiceClient>
class DatabaseMigrationServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeConnectionsOutcome> WaitUntilTestConnectionSucceeds(
      const Model::DescribeConnectionsRequest& request) {
    using OutcomeT = Model::DescribeConnectionsOutcome;
    using RequestT = Model::DescribeConnectionsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TestConnectionSucceedsWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("successful"),
        [](const Model::DescribeConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetConnections().begin(), result.GetConnections().end(),
                             [&](const Model::Connection& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TestConnectionSucceedsWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetConnections().begin(), result.GetConnections().end(),
                             [&](const Model::Connection& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeConnections(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilTestConnectionSucceeds");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEndpointsOutcome> WaitUntilEndpointDeleted(const Model::DescribeEndpointsRequest& request) {
    using OutcomeT = Model::DescribeEndpointsOutcome;
    using RequestT = Model::DescribeEndpointsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("EndpointDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundFault")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("active"),
        [](const Model::DescribeEndpointsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetEndpoints().begin(), result.GetEndpoints().end(),
                             [&](const Model::Endpoint& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EndpointDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeEndpointsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetEndpoints().begin(), result.GetEndpoints().end(),
                             [&](const Model::Endpoint& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEndpoints(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationInstancesOutcome> WaitUntilReplicationInstanceAvailable(
      const Model::DescribeReplicationInstancesRequest& request) {
    using OutcomeT = Model::DescribeReplicationInstancesOutcome;
    using RequestT = Model::DescribeReplicationInstancesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-credentials"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("incompatible-network"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("inaccessible-encryption-credentials"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilReplicationInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationInstancesOutcome> WaitUntilReplicationInstanceDeleted(
      const Model::DescribeReplicationInstancesRequest& request) {
    using OutcomeT = Model::DescribeReplicationInstancesOutcome;
    using RequestT = Model::DescribeReplicationInstancesRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationInstanceDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("available"),
        [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
              result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
              [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ReplicationInstanceDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundFault")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationInstances(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskDeleted(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("running"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "ReplicationTaskDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ResourceNotFoundFault")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskReady(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("starting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("running"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopping"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("testing"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskRunning(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("running"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopping"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("testing"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskStopped(
      const Model::DescribeReplicationTasksRequest& request) {
    using OutcomeT = Model::DescribeReplicationTasksOutcome;
    using RequestT = Model::DescribeReplicationTasksRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("stopped"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ready"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("creating"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("starting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("failed"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("modifying"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("testing"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ReplicationTaskStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleting"),
        [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                             [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilReplicationTaskStopped");
    return waiter.Wait(request);
  }
};
}  // namespace DatabaseMigrationService
}  // namespace Aws
