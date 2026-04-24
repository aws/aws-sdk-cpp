/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApiClient.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusRequest.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusResult.h>
#include <aws/cloudcontrol/model/OperationStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudControlApi {

template <typename DerivedClient = CloudControlApiClient>
class CloudControlApiWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetResourceRequestStatusOutcome> WaitUntilResourceRequestSuccess(
      const Model::GetResourceRequestStatusRequest& request) {
    using OutcomeT = Model::GetResourceRequestStatusOutcome;
    using RequestT = Model::GetResourceRequestStatusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResourceRequestSuccessWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SUCCESS"),
        [](const Model::GetResourceRequestStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::OperationStatusMapper::GetNameForOperationStatus(result.GetProgressEvent().GetOperationStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResourceRequestSuccessWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED"),
        [](const Model::GetResourceRequestStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::OperationStatusMapper::GetNameForOperationStatus(result.GetProgressEvent().GetOperationStatus()) ==
                 expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ResourceRequestSuccessWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CANCEL_COMPLETE"),
        [](const Model::GetResourceRequestStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::OperationStatusMapper::GetNameForOperationStatus(result.GetProgressEvent().GetOperationStatus()) ==
                 expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetResourceRequestStatus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilResourceRequestSuccess");
    return waiter.Wait(request);
  }
};
}  // namespace CloudControlApi
}  // namespace Aws
