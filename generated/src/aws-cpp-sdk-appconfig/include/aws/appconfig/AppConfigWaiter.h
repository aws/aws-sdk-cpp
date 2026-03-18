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
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AppConfig {

template <typename DerivedClient = AppConfigClient>
class AppConfigWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetDeploymentOutcome> WaitUntilDeploymentComplete(const Model::GetDeploymentRequest& request) {
    using OutcomeT = Model::GetDeploymentOutcome;
    using RequestT = Model::GetDeploymentRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DeploymentCompleteWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("COMPLETE"),
        [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DeploymentStateMapper::GetNameForDeploymentState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DeploymentCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("ROLLED_BACK"),
        [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DeploymentStateMapper::GetNameForDeploymentState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DeploymentCompleteWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REVERTED"),
        [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DeploymentStateMapper::GetNameForDeploymentState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetDeployment(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilDeploymentComplete");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetEnvironmentOutcome> WaitUntilEnvironmentReadyForDeployment(
      const Model::GetEnvironmentRequest& request) {
    using OutcomeT = Model::GetEnvironmentOutcome;
    using RequestT = Model::GetEnvironmentRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentReadyForDeploymentWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ReadyForDeployment"),
        [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EnvironmentStateMapper::GetNameForEnvironmentState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentReadyForDeploymentWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("RolledBack"),
        [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EnvironmentStateMapper::GetNameForEnvironmentState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EnvironmentReadyForDeploymentWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Reverted"),
        [](const Model::GetEnvironmentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::EnvironmentStateMapper::GetNameForEnvironmentState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetEnvironment(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilEnvironmentReadyForDeployment");
    return waiter.Wait(request);
  }
};
}  // namespace AppConfig
}  // namespace Aws
