/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/groundstation/GroundStationClient.h>
#include <aws/groundstation/model/ContactStatus.h>
#include <aws/groundstation/model/DescribeContactRequest.h>
#include <aws/groundstation/model/DescribeContactResult.h>

#include <algorithm>

namespace Aws {
namespace GroundStation {

template <typename DerivedClient = GroundStationClient>
class GroundStationWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeContactOutcome> WaitUntilContactScheduled(const Model::DescribeContactRequest& request) {
    using OutcomeT = Model::DescribeContactOutcome;
    using RequestT = Model::DescribeContactRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ContactScheduledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED_TO_SCHEDULE"),
        [](const Model::DescribeContactOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ContactStatusMapper::GetNameForContactStatus(result.GetContactStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ContactScheduledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("SCHEDULED"),
        [](const Model::DescribeContactOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ContactStatusMapper::GetNameForContactStatus(result.GetContactStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeContact(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 180, std::move(acceptors), operation, "WaitUntilContactScheduled");
    return waiter.Wait(request);
  }
};
}  // namespace GroundStation
}  // namespace Aws
