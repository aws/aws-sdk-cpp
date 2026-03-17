/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/TransferClient.h>
#include <aws/awstransfer/model/DescribeServerRequest.h>
#include <aws/awstransfer/model/DescribeServerResult.h>
#include <aws/awstransfer/model/State.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace Transfer {

template <typename DerivedClient = TransferClient>
class TransferWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeServerOutcome> WaitUntilServerOffline(const Model::DescribeServerRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeServerOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("OFFLINE"),
                         [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("STOP_FAILED"),
                         [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeServerRequest& req) { return static_cast<DerivedClient*>(this)->DescribeServer(req); };
    Aws::Utils::Waiter<Model::DescribeServerRequest, Model::DescribeServerOutcome> waiter(30, 120, acceptors, operation,
                                                                                          "WaitUntilServerOffline");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeServerOutcome> WaitUntilServerOnline(const Model::DescribeServerRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeServerOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("ONLINE"),
                         [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("START_FAILED"),
                         [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::DescribeServerRequest& req) { return static_cast<DerivedClient*>(this)->DescribeServer(req); };
    Aws::Utils::Waiter<Model::DescribeServerRequest, Model::DescribeServerOutcome> waiter(30, 120, acceptors, operation,
                                                                                          "WaitUntilServerOnline");
    return waiter.Wait(request);
  }
};
}  // namespace Transfer
}  // namespace Aws
