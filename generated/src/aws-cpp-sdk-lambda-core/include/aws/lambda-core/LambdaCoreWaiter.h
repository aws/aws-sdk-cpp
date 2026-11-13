/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/lambda-core/LambdaCoreClient.h>
#include <aws/lambda-core/model/GetRuntimeAliasRequest.h>
#include <aws/lambda-core/model/GetRuntimeAliasResult.h>
#include <aws/lambda-core/model/GetRuntimeVersionRequest.h>
#include <aws/lambda-core/model/GetRuntimeVersionResult.h>
#include <aws/lambda-core/model/RuntimeAliasState.h>
#include <aws/lambda-core/model/RuntimeVersionState.h>

#include <algorithm>

namespace Aws {
namespace LambdaCore {

template <typename DerivedClient = LambdaCoreClient>
class LambdaCoreWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetRuntimeAliasOutcome> WaitUntilRuntimeAliasActive(const Model::GetRuntimeAliasRequest& request) {
    using OutcomeT = Model::GetRuntimeAliasOutcome;
    using RequestT = Model::GetRuntimeAliasRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RuntimeAliasActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetRuntimeAliasOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RuntimeAliasStateMapper::GetNameForRuntimeAliasState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRuntimeAlias(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilRuntimeAliasActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRuntimeVersionOutcome> WaitUntilRuntimeVersionActive(const Model::GetRuntimeVersionRequest& request) {
    using OutcomeT = Model::GetRuntimeVersionOutcome;
    using RequestT = Model::GetRuntimeVersionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RuntimeVersionActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetRuntimeVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RuntimeVersionStateMapper::GetNameForRuntimeVersionState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RuntimeVersionActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetRuntimeVersionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RuntimeVersionStateMapper::GetNameForRuntimeVersionState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRuntimeVersion(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilRuntimeVersionActive");
    return waiter.Wait(request);
  }
};
}  // namespace LambdaCore
}  // namespace Aws
