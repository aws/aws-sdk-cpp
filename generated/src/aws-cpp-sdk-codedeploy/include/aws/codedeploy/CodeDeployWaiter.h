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

#include <algorithm>

namespace Aws {
namespace CodeDeploy {

template <typename DerivedClient = CodeDeployClient>
class CodeDeployWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetDeploymentOutcome> WaitUntilDeploymentSuccessful(const Model::GetDeploymentRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetDeploymentOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Succeeded"),
                         [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DeploymentStatusMapper::GetNameForDeploymentStatus(result.GetDeploymentInfo().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Failed"),
                         [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DeploymentStatusMapper::GetNameForDeploymentStatus(result.GetDeploymentInfo().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("Stopped"),
                         [](const Model::GetDeploymentOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::DeploymentStatusMapper::GetNameForDeploymentStatus(result.GetDeploymentInfo().GetStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetDeploymentRequest& req) { return static_cast<DerivedClient*>(this)->GetDeployment(req); };
    Aws::Utils::Waiter<Model::GetDeploymentRequest, Model::GetDeploymentOutcome> waiter(15, 8, acceptors, operation,
                                                                                        "WaitUntilDeploymentSuccessful");
    return waiter.Wait(request);
  }
};
}  // namespace CodeDeploy
}  // namespace Aws
