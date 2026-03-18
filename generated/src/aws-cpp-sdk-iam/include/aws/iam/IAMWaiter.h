/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::GetInstanceProfileOutcome;
    using RequestT = Model::GetInstanceProfileRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InstanceProfileExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "InstanceProfileExistsWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("NoSuchEntityException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetInstanceProfile(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 120, std::move(acceptors), operation, "WaitUntilInstanceProfileExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetPolicyOutcome> WaitUntilPolicyExists(const Model::GetPolicyRequest& request) {
    using OutcomeT = Model::GetPolicyOutcome;
    using RequestT = Model::GetPolicyRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("PolicyExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("PolicyExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("NoSuchEntity")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetPolicy(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 120, std::move(acceptors), operation, "WaitUntilPolicyExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRoleOutcome> WaitUntilRoleExists(const Model::GetRoleRequest& request) {
    using OutcomeT = Model::GetRoleOutcome;
    using RequestT = Model::GetRoleRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("RoleExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("RoleExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("NoSuchEntity")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRole(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 120, std::move(acceptors), operation, "WaitUntilRoleExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetUserOutcome> WaitUntilUserExists(const Model::GetUserRequest& request) {
    using OutcomeT = Model::GetUserOutcome;
    using RequestT = Model::GetUserRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("UserExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("UserExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("NoSuchEntity")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetUser(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(1, 120, std::move(acceptors), operation, "WaitUntilUserExists");
    return waiter.Wait(request);
  }
};
}  // namespace IAM
}  // namespace Aws
