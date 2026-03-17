/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
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
    std::vector<Aws::Utils::Acceptor<Model::DescribeContactOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("FAILED_TO_SCHEDULE"),
                         [](const Model::DescribeContactOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ContactStatusMapper::GetNameForContactStatus(result.GetContactStatus()) ==
                                  expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("SCHEDULED"),
                         [](const Model::DescribeContactOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::ContactStatusMapper::GetNameForContactStatus(result.GetContactStatus()) ==
                                  expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeContactRequest& req) { return static_cast<DerivedClient*>(this)->DescribeContact(req); };
    Aws::Utils::Waiter<Model::DescribeContactRequest, Model::DescribeContactOutcome> waiter(5, 180, acceptors, operation,
                                                                                            "WaitUntilContactScheduled");
    return waiter.Wait(request);
  }
};
}  // namespace GroundStation
}  // namespace Aws
