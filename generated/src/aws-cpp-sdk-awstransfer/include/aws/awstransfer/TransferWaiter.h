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
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace Transfer {

template <typename DerivedClient = TransferClient>
class TransferWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeServerOutcome> WaitUntilServerOffline(const Model::DescribeServerRequest& request) {
    using OutcomeT = Model::DescribeServerOutcome;
    using RequestT = Model::DescribeServerRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServerOfflineWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("OFFLINE"),
        [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServerOfflineWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STOP_FAILED"),
        [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeServer(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 120, std::move(acceptors), operation, "WaitUntilServerOffline");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeServerOutcome> WaitUntilServerOnline(const Model::DescribeServerRequest& request) {
    using OutcomeT = Model::DescribeServerOutcome;
    using RequestT = Model::DescribeServerRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServerOnlineWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ONLINE"),
        [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ServerOnlineWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("START_FAILED"),
        [](const Model::DescribeServerOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::StateMapper::GetNameForState(result.GetServer().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeServer(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 120, std::move(acceptors), operation, "WaitUntilServerOnline");
    return waiter.Wait(request);
  }
};
}  // namespace Transfer
}  // namespace Aws
