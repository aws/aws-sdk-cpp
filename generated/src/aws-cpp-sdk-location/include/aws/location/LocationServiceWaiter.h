/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/location/LocationServiceClient.h>
#include <aws/location/model/GetJobRequest.h>
#include <aws/location/model/GetJobResult.h>
#include <aws/location/model/JobStatus.h>

#include <algorithm>

namespace Aws {
namespace LocationService {

template <typename DerivedClient = LocationServiceClient>
class LocationServiceWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetJobOutcome> WaitUntilJobCompleted(const Model::GetJobRequest& request) {
    using OutcomeT = Model::GetJobOutcome;
    using RequestT = Model::GetJobRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Failed"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "JobCompletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("Cancelled"),
        [](const Model::GetJobOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::JobStatusMapper::GetNameForJobStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetJob(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 2, std::move(acceptors), operation, "WaitUntilJobCompleted");
    return waiter.Wait(request);
  }
};
}  // namespace LocationService
}  // namespace Aws
