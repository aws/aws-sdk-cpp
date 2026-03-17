/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeConnectionsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("successful"),
                         [](const Model::DescribeConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetConnections().begin(), result.GetConnections().end(),
                               [&](const Model::Connection& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeConnectionsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetConnections().begin(), result.GetConnections().end(),
                               [&](const Model::Connection& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeConnectionsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeConnections(req);
    };
    Aws::Utils::Waiter<Model::DescribeConnectionsRequest, Model::DescribeConnectionsOutcome> waiter(5, 24, acceptors, operation,
                                                                                                    "WaitUntilTestConnectionSucceeds");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEndpointsOutcome> WaitUntilEndpointDeleted(const Model::DescribeEndpointsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeEndpointsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundFault")});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("active"),
                         [](const Model::DescribeEndpointsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetEndpoints().begin(), result.GetEndpoints().end(),
                                              [&](const Model::Endpoint& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeEndpointsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetEndpoints().begin(), result.GetEndpoints().end(),
                                              [&](const Model::Endpoint& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeEndpointsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeEndpoints(req);
    };
    Aws::Utils::Waiter<Model::DescribeEndpointsRequest, Model::DescribeEndpointsOutcome> waiter(5, 24, acceptors, operation,
                                                                                                "WaitUntilEndpointDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationInstancesOutcome> WaitUntilReplicationInstanceAvailable(
      const Model::DescribeReplicationInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
                                              [&](const Model::ReplicationInstance& item) {
                                                return item.GetReplicationInstanceStatus() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
                                              [&](const Model::ReplicationInstance& item) {
                                                return item.GetReplicationInstanceStatus() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-credentials"),
                         [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
                                              [&](const Model::ReplicationInstance& item) {
                                                return item.GetReplicationInstanceStatus() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("incompatible-network"),
                         [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
                                              [&](const Model::ReplicationInstance& item) {
                                                return item.GetReplicationInstanceStatus() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("inaccessible-encryption-credentials"),
         [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(
               result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
               [&](const Model::ReplicationInstance& item) { return item.GetReplicationInstanceStatus() == expected.get<Aws::String>(); });
         }});

    auto operation = [this](const Model::DescribeReplicationInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationInstancesRequest, Model::DescribeReplicationInstancesOutcome> waiter(
        60, 2, acceptors, operation, "WaitUntilReplicationInstanceAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationInstancesOutcome> WaitUntilReplicationInstanceDeleted(
      const Model::DescribeReplicationInstancesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationInstancesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("available"),
                         [](const Model::DescribeReplicationInstancesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetReplicationInstances().begin(), result.GetReplicationInstances().end(),
                                              [&](const Model::ReplicationInstance& item) {
                                                return item.GetReplicationInstanceStatus() == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundFault")});

    auto operation = [this](const Model::DescribeReplicationInstancesRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationInstances(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationInstancesRequest, Model::DescribeReplicationInstancesOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationInstanceDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskDeleted(
      const Model::DescribeReplicationTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ready"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopped"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("running"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("ResourceNotFoundFault")});

    auto operation = [this](const Model::DescribeReplicationTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationTasksRequest, Model::DescribeReplicationTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationTaskDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskReady(
      const Model::DescribeReplicationTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ready"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("starting"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("running"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopping"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopped"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("testing"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeReplicationTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationTasksRequest, Model::DescribeReplicationTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationTaskReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskRunning(
      const Model::DescribeReplicationTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("running"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ready"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopping"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("stopped"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("testing"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeReplicationTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationTasksRequest, Model::DescribeReplicationTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationTaskRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeReplicationTasksOutcome> WaitUntilReplicationTaskStopped(
      const Model::DescribeReplicationTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeReplicationTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("stopped"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ready"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("creating"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("starting"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("failed"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("modifying"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("testing"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("deleting"),
                         [](const Model::DescribeReplicationTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetReplicationTasks().begin(), result.GetReplicationTasks().end(),
                               [&](const Model::ReplicationTask& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeReplicationTasksRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeReplicationTasks(req);
    };
    Aws::Utils::Waiter<Model::DescribeReplicationTasksRequest, Model::DescribeReplicationTasksOutcome> waiter(
        15, 8, acceptors, operation, "WaitUntilReplicationTaskStopped");
    return waiter.Wait(request);
  }
};
}  // namespace DatabaseMigrationService
}  // namespace Aws
