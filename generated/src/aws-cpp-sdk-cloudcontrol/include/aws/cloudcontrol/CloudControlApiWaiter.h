/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApiClient.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusRequest.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusResult.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace CloudControlApi {

template <typename DerivedClient = CloudControlApiClient>
class CloudControlApiWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetResourceRequestStatusOutcome> WaitUntilResourceRequestSuccess(
      const Model::GetResourceRequestStatusRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetResourceRequestStatusOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SUCCESS"),
                         [](const Model::GetResourceRequestStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetProgressEvent().GetOperationStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED"),
                         [](const Model::GetResourceRequestStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetProgressEvent().GetOperationStatus() == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("CANCEL_COMPLETE"),
                         [](const Model::GetResourceRequestStatusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetProgressEvent().GetOperationStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetResourceRequestStatusRequest& req) {
      return static_cast<DerivedClient*>(this)->GetResourceRequestStatus(req);
    };
    Aws::Utils::Waiter<Model::GetResourceRequestStatusRequest, Model::GetResourceRequestStatusOutcome> waiter(
        5, 24, acceptors, operation, "WaitUntilResourceRequestSuccess");
    return waiter.Wait(request);
  }
};
}  // namespace CloudControlApi
}  // namespace Aws
