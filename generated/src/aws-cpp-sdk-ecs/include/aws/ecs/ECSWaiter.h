/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/ecs/ECSClient.h>
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
  Aws::Utils::WaiterOutcome<Model::DescribeServicesOutcome> WaitUntilServicesInactive(const Model::DescribeServicesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeServicesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("MISSING"),
                         [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                                              [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("INACTIVE"),
                         [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetServices().begin(), result.GetServices().end(),
                                              [&](const Model::Service& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeServicesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeServices(req); };
    Aws::Utils::Waiter<Model::DescribeServicesRequest, Model::DescribeServicesOutcome> waiter(15, 40, acceptors, operation,
                                                                                              "WaitUntilServicesInactive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeServicesOutcome> WaitUntilServicesStable(const Model::DescribeServicesRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeServicesOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("MISSING"),
                         [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                                              [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("DRAINING"),
                         [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetServices().begin(), result.GetServices().end(),
                                              [&](const Model::Service& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("INACTIVE"),
                         [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetServices().begin(), result.GetServices().end(),
                                              [&](const Model::Service& item) { return item.GetStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeServicesOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (std::count_if(result.GetServices().begin(), result.GetServices().end(), [](const Model::Service& item) {
                                     return !((item.GetDeployments().size() == 1) && (item.GetRunningCount() == item.GetDesiredCount()));
                                   }) == 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::DescribeServicesRequest& req) { return static_cast<DerivedClient*>(this)->DescribeServices(req); };
    Aws::Utils::Waiter<Model::DescribeServicesRequest, Model::DescribeServicesOutcome> waiter(15, 40, acceptors, operation,
                                                                                              "WaitUntilServicesStable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTasksOutcome> WaitUntilTasksRunning(const Model::DescribeTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetTasks().begin(), result.GetTasks().end(),
                                              [&](const Model::Task& item) { return item.GetLastStatus() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("MISSING"),
                         [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFailures().begin(), result.GetFailures().end(),
                                              [&](const Model::Failure& item) { return item.GetReason() == expected.get<Aws::String>(); });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetTasks().begin(), result.GetTasks().end(),
                                              [&](const Model::Task& item) { return item.GetLastStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeTasksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeTasks(req); };
    Aws::Utils::Waiter<Model::DescribeTasksRequest, Model::DescribeTasksOutcome> waiter(6, 100, acceptors, operation,
                                                                                        "WaitUntilTasksRunning");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTasksOutcome> WaitUntilTasksStopped(const Model::DescribeTasksRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTasksOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::DescribeTasksOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetTasks().begin(), result.GetTasks().end(),
                                              [&](const Model::Task& item) { return item.GetLastStatus() == expected.get<Aws::String>(); });
                         }});

    auto operation = [this](const Model::DescribeTasksRequest& req) { return static_cast<DerivedClient*>(this)->DescribeTasks(req); };
    Aws::Utils::Waiter<Model::DescribeTasksRequest, Model::DescribeTasksOutcome> waiter(6, 100, acceptors, operation,
                                                                                        "WaitUntilTasksStopped");
    return waiter.Wait(request);
  }
};
}  // namespace ECS
}  // namespace Aws
