/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeployClient.h>
#include <aws/codedeploy/model/DeploymentStatus.h>
#include <aws/codedeploy/model/GetDeploymentRequest.h>
#include <aws/codedeploy/model/GetDeploymentResult.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CodeDeploy {

template <typename DerivedClient = CodeDeployClient>
class CodeDeployWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetDeploymentOutcome> WaitUntilDeploymentSuccessful(const Model::GetDeploymentRequest& request) {
    using OutcomeT = Model::GetDeploymentOutcome;
    using RequestT = Model::GetDeploymentRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DeploymentSuccessfulWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Succeeded"),
        [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DeploymentStatusMapper::GetNameForDeploymentStatus(result.GetDeploymentInfo().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DeploymentSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DeploymentStatusMapper::GetNameForDeploymentStatus(result.GetDeploymentInfo().GetStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DeploymentSuccessfulWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Stopped"),
        [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::DeploymentStatusMapper::GetNameForDeploymentStatus(result.GetDeploymentInfo().GetStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetDeployment(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilDeploymentSuccessful");
    return waiter.Wait(request);
  }
};
}  // namespace CodeDeploy
}  // namespace Aws
