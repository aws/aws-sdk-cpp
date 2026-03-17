/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/iam/IAMClient.h>
#include <aws/iam/model/GetInstanceProfileRequest.h>
#include <aws/iam/model/GetInstanceProfileResult.h>
#include <aws/iam/model/GetPolicyRequest.h>
#include <aws/iam/model/GetPolicyResult.h>
#include <aws/iam/model/GetRoleRequest.h>
#include <aws/iam/model/GetRoleResult.h>
#include <aws/iam/model/GetUserRequest.h>
#include <aws/iam/model/GetUserResult.h>

#include <algorithm>

namespace Aws {
namespace IAM {

template <typename DerivedClient = IAMClient>
class IAMWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetInstanceProfileOutcome> WaitUntilInstanceProfileExists(
      const Model::GetInstanceProfileRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetInstanceProfileOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("NoSuchEntityException")});

    auto operation = [this](const Model::GetInstanceProfileRequest& req) {
      return static_cast<DerivedClient*>(this)->GetInstanceProfile(req);
    };
    Aws::Utils::Waiter<Model::GetInstanceProfileRequest, Model::GetInstanceProfileOutcome> waiter(1, 120, acceptors, operation,
                                                                                                  "WaitUntilInstanceProfileExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyOutcome> WaitUntilPolicyExists(const Model::GetPolicyRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetPolicyOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("NoSuchEntity")});

    auto operation = [this](const Model::GetPolicyRequest& req) { return static_cast<DerivedClient*>(this)->GetPolicy(req); };
    Aws::Utils::Waiter<Model::GetPolicyRequest, Model::GetPolicyOutcome> waiter(1, 120, acceptors, operation, "WaitUntilPolicyExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRoleOutcome> WaitUntilRoleExists(const Model::GetRoleRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetRoleOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("NoSuchEntity")});

    auto operation = [this](const Model::GetRoleRequest& req) { return static_cast<DerivedClient*>(this)->GetRole(req); };
    Aws::Utils::Waiter<Model::GetRoleRequest, Model::GetRoleOutcome> waiter(1, 120, acceptors, operation, "WaitUntilRoleExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetUserOutcome> WaitUntilUserExists(const Model::GetUserRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetUserOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("NoSuchEntity")});

    auto operation = [this](const Model::GetUserRequest& req) { return static_cast<DerivedClient*>(this)->GetUser(req); };
    Aws::Utils::Waiter<Model::GetUserRequest, Model::GetUserOutcome> waiter(1, 120, acceptors, operation, "WaitUntilUserExists");
    return waiter.Wait(request);
  }
};
}  // namespace IAM
}  // namespace Aws
