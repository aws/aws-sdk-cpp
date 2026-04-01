/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ecs/ECSClient.h>
#include <aws/ecs/model/DaemonDeploymentStatus.h>
#include <aws/ecs/model/DaemonStatus.h>
#include <aws/ecs/model/DaemonTaskDefinitionStatus.h>
#include <aws/ecs/model/DescribeDaemonDeploymentsRequest.h>
#include <aws/ecs/model/DescribeDaemonDeploymentsResult.h>
#include <aws/ecs/model/DescribeDaemonRequest.h>
#include <aws/ecs/model/DescribeDaemonResult.h>
#include <aws/ecs/model/DescribeDaemonTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeDaemonTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeServicesRequest.h>
#include <aws/ecs/model/DescribeServicesResult.h>
#include <aws/ecs/model/DescribeTasksRequest.h>
#include <aws/ecs/model/DescribeTasksResult.h>

#include <algorithm>

namespace Aws {
namespace ECS {

template <typename DerivedClient = ECSClient>
class ECSWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeDaemonOutcome> WaitUntilDaemonActive(const Model::DescribeDaemonRequest& request) {
    using OutcomeT = Model::DescribeDaemonOutcome;
    using RequestT = Model::DescribeDaemonRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeDaemonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DaemonStatusMapper::GetNameForDaemonStatus(result.GetDaemon().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_IN_PROGRESS"),
        [](const Model::DescribeDaemonOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DaemonStatusMapper::GetNameForDaemonStatus(result.GetDaemon().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDaemon(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilDaemonActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDaemonDeploymentsOutcome> WaitUntilDaemonDeploymentSuccessful(
      const Model::DescribeDaemonDeploymentsRequest& request) {
    using OutcomeT = Model::DescribeDaemonDeploymentsOutcome;
    using RequestT = Model::DescribeDaemonDeploymentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentSuccessfulWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESSFUL"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDaemonDeployments().begin(), result.GetDaemonDeployments().end(),
                             [&](const Model::DaemonDeployment& item) {
                               return Model::DaemonDeploymentStatusMapper::GetNameForDaemonDeploymentStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STOPPED"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDaemonDeployments().begin(), result.GetDaemonDeployments().end(),
                             [&](const Model::DaemonDeployment& item) {
                               return Model::DaemonDeploymentStatusMapper::GetNameForDaemonDeploymentStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_FAILED"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDaemonDeployments().begin(), result.GetDaemonDeployments().end(),
                             [&](const Model::DaemonDeployment& item) {
                               return Model::DaemonDeploymentStatusMapper::GetNameForDaemonDeploymentStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLBACK_SUCCESSFUL"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetDaemonDeployments().begin(), result.GetDaemonDeployments().end(),
                             [&](const Model::DaemonDeployment& item) {
                               return Model::DaemonDeploymentStatusMapper::GetNameForDaemonDeploymentStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("MISSING"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                             [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDaemonDeployments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilDaemonDeploymentSuccessful");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDaemonDeploymentsOutcome> WaitUntilDaemonDeploymentStopped(
      const Model::DescribeDaemonDeploymentsRequest& request) {
    using OutcomeT = Model::DescribeDaemonDeploymentsOutcome;
    using RequestT = Model::DescribeDaemonDeploymentsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STOPPED"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetDaemonDeployments().begin(), result.GetDaemonDeployments().end(),
                             [&](const Model::DaemonDeployment& item) {
                               return Model::DaemonDeploymentStatusMapper::GetNameForDaemonDeploymentStatus(item.GetStatus()) ==
                                      expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonDeploymentStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("MISSING"),
        [](const Model::DescribeDaemonDeploymentsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                             [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDaemonDeployments(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilDaemonDeploymentStopped");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDaemonTaskDefinitionOutcome> WaitUntilDaemonTaskDefinitionActive(
      const Model::DescribeDaemonTaskDefinitionRequest& request) {
    using OutcomeT = Model::DescribeDaemonTaskDefinitionOutcome;
    using RequestT = Model::DescribeDaemonTaskDefinitionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonTaskDefinitionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeDaemonTaskDefinitionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DaemonTaskDefinitionStatusMapper::GetNameForDaemonTaskDefinitionStatus(
                     result.GetDaemonTaskDefinition().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonTaskDefinitionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_IN_PROGRESS"),
        [](const Model::DescribeDaemonTaskDefinitionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DaemonTaskDefinitionStatusMapper::GetNameForDaemonTaskDefinitionStatus(
                     result.GetDaemonTaskDefinition().GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonTaskDefinitionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETED"),
        [](const Model::DescribeDaemonTaskDefinitionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DaemonTaskDefinitionStatusMapper::GetNameForDaemonTaskDefinitionStatus(
                     result.GetDaemonTaskDefinition().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDaemonTaskDefinition(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilDaemonTaskDefinitionActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeDaemonTaskDefinitionOutcome> WaitUntilDaemonTaskDefinitionDeleted(
      const Model::DescribeDaemonTaskDefinitionRequest& request) {
    using OutcomeT = Model::DescribeDaemonTaskDefinitionOutcome;
    using RequestT = Model::DescribeDaemonTaskDefinitionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DaemonTaskDefinitionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("DELETED"),
        [](const Model::DescribeDaemonTaskDefinitionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DaemonTaskDefinitionStatusMapper::GetNameForDaemonTaskDefinitionStatus(
                     result.GetDaemonTaskDefinition().GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeDaemonTaskDefinition(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilDaemonTaskDefinitionDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeServicesOutcome> WaitUntilServicesInactive(const Model::DescribeServicesRequest& request) {
    using OutcomeT = Model::DescribeServicesOutcome;
    using RequestT = Model::DescribeServicesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicesInactiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("MISSING"),
        [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                             [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicesInactiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("INACTIVE"),
        [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetServices().begin(), result.GetServices().end(),
                             [&](const Model::Service& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeServices(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 40, std::move(acceptors), operation, "WaitUntilServicesInactive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeServicesOutcome> WaitUntilServicesStable(const Model::DescribeServicesRequest& request) {
    using OutcomeT = Model::DescribeServicesOutcome;
    using RequestT = Model::DescribeServicesRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicesStableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("MISSING"),
        [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                             [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicesStableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DRAINING"),
        [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetServices().begin(), result.GetServices().end(),
                             [&](const Model::Service& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicesStableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("INACTIVE"),
        [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetServices().begin(), result.GetServices().end(),
                             [&](const Model::Service& item) { return item.GetStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServicesStableWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (std::count_if(result.GetServices().begin(), result.GetServices().end(), [](const Model::Service& item) {
                    return !((item.GetDeployments().size() == 1) && (item.GetRunningCount() == item.GetDesiredCount()));
                  }) == 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeServices(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 40, std::move(acceptors), operation, "WaitUntilServicesStable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTasksOutcome> WaitUntilTasksRunning(const Model::DescribeTasksRequest& request) {
    using OutcomeT = Model::DescribeTasksOutcome;
    using RequestT = Model::DescribeTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TasksRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STOPPED"),
        [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetTasks().begin(), result.GetTasks().end(),
                             [&](const Model::Task& item) { return item.GetLastStatus() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TasksRunningWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("MISSING"),
        [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                             [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TasksRunningWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetTasks().begin(), result.GetTasks().end(),
                             [&](const Model::Task& item) { return item.GetLastStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(6, 100, std::move(acceptors), operation, "WaitUntilTasksRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTasksOutcome> WaitUntilTasksStopped(const Model::DescribeTasksRequest& request) {
    using OutcomeT = Model::DescribeTasksOutcome;
    using RequestT = Model::DescribeTasksRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TasksStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STOPPED"),
        [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetTasks().begin(), result.GetTasks().end(),
                             [&](const Model::Task& item) { return item.GetLastStatus() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTasks(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(6, 100, std::move(acceptors), operation, "WaitUntilTasksStopped");
    return waiter.Wait(request);
  }
};
}  // namespace ECS
}  // namespace Aws
