/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/endusermessaging/EndUserMessagingClient.h>
#include <aws/endusermessaging/model/GetBrandProfileRequest.h>
#include <aws/endusermessaging/model/GetBrandProfileResult.h>
#include <aws/endusermessaging/model/GetJobRequest.h>
#include <aws/endusermessaging/model/GetJobResult.h>
#include <aws/endusermessaging/model/JobStatus.h>
#include <aws/endusermessaging/model/Status.h>

#include <algorithm>

namespace Aws {
namespace EndUserMessaging {

template <typename DerivedClient = EndUserMessagingClient>
class EndUserMessagingWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetBrandProfileOutcome> WaitUntilBrandProfileActive(const Model::GetBrandProfileRequest& request) {
    using OutcomeT = Model::GetBrandProfileOutcome;
    using RequestT = Model::GetBrandProfileRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BrandProfileActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::GetBrandProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BrandProfileActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("BLOCKED"),
        [](const Model::GetBrandProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BrandProfileActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCELLED"),
        [](const Model::GetBrandProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "BrandProfileActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetBrandProfileOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StatusMapper::GetNameForStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetBrandProfile(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilBrandProfileActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobSuccess(const Model::GetJobRequest& request) {
    using OutcomeT = Model::GetJobOutcome;
    using RequestT = Model::GetJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSuccessWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobSuccessWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilJobSuccess");
    return waiter.Wait(request);
  }
};
}  // namespace EndUserMessaging
}  // namespace Aws
