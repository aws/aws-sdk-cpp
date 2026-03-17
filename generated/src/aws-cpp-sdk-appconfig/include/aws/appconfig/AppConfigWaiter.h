/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfigClient.h>
#include <aws/appconfig/model/DeploymentState.h>
#include <aws/appconfig/model/EnvironmentState.h>
#include <aws/appconfig/model/GetDeploymentRequest.h>
#include <aws/appconfig/model/GetDeploymentResult.h>
#include <aws/appconfig/model/GetEnvironmentRequest.h>
#include <aws/appconfig/model/GetEnvironmentResult.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace AppConfig {

template <typename DerivedClient = AppConfigClient>
class AppConfigWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetDeploymentOutcome> WaitUntilDeploymentComplete(const Model::GetDeploymentRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetDeploymentOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("COMPLETE"),
                         [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DeploymentStateMapper::GetNameForDeploymentState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("ROLLED_BACK"),
                         [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DeploymentStateMapper::GetNameForDeploymentState(result.GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("REVERTED"),
                         [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DeploymentStateMapper::GetNameForDeploymentState(result.GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetDeploymentRequest& req) { return static_cast<DerivedClient*>(this)->GetDeployment(req); };
    Aws::Utils::Waiter<Model::GetDeploymentRequest, Model::GetDeploymentOutcome> waiter(30, 4, acceptors, operation,
                                                                                        "WaitUntilDeploymentComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetEnvironmentOutcome> WaitUntilEnvironmentReadyForDeployment(
      const Model::GetEnvironmentRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetEnvironmentOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ReadyForDeployment"),
                         [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EnvironmentStateMapper::GetNameForEnvironmentState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("RolledBack"),
                         [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EnvironmentStateMapper::GetNameForEnvironmentState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Reverted"),
                         [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::EnvironmentStateMapper::GetNameForEnvironmentState(result.GetState()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetEnvironmentRequest& req) { return static_cast<DerivedClient*>(this)->GetEnvironment(req); };
    Aws::Utils::Waiter<Model::GetEnvironmentRequest, Model::GetEnvironmentOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilEnvironmentReadyForDeployment");
    return waiter.Wait(request);
  }
};
}  // namespace AppConfig
}  // namespace Aws
