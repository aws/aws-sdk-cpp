/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/interconnect/InterconnectClient.h>
#include <aws/interconnect/model/ConnectionState.h>
#include <aws/interconnect/model/GetConnectionRequest.h>
#include <aws/interconnect/model/GetConnectionResult.h>

#include <algorithm>

namespace Aws {
namespace Interconnect {

template <typename DerivedClient = InterconnectClient>
class InterconnectWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetConnectionOutcome> WaitUntilConnectionAvailable(const Model::GetConnectionRequest& request) {
    using OutcomeT = Model::GetConnectionOutcome;
    using RequestT = Model::GetConnectionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectionAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("available"),
        [](const Model::GetConnectionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ConnectionStateMapper::GetNameForConnectionState(result.GetConnection().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("deleted"),
        [](const Model::GetConnectionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ConnectionStateMapper::GetNameForConnectionState(result.GetConnection().GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectionAvailableWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("down"),
        [](const Model::GetConnectionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ConnectionStateMapper::GetNameForConnectionState(result.GetConnection().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetConnection(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilConnectionAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetConnectionOutcome> WaitUntilConnectionDeleted(const Model::GetConnectionRequest& request) {
    using OutcomeT = Model::GetConnectionOutcome;
    using RequestT = Model::GetConnectionRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectionDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("deleted"),
        [](const Model::GetConnectionOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ConnectionStateMapper::GetNameForConnectionState(result.GetConnection().GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetConnection(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilConnectionDeleted");
    return waiter.Wait(request);
  }
};
}  // namespace Interconnect
}  // namespace Aws
