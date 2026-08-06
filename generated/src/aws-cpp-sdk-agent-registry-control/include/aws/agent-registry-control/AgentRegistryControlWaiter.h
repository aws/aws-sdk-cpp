/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlClient.h>
#include <aws/agent-registry-control/model/GetRegistryRecordRequest.h>
#include <aws/agent-registry-control/model/GetRegistryRecordResult.h>
#include <aws/agent-registry-control/model/GetRegistryRequest.h>
#include <aws/agent-registry-control/model/GetRegistryResult.h>
#include <aws/agent-registry-control/model/RegistryRecordStatus.h>
#include <aws/agent-registry-control/model/RegistryStatus.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AgentRegistryControl {

template <typename DerivedClient = AgentRegistryControlClient>
class AgentRegistryControlWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetRegistryOutcome> WaitUntilRegistryReady(const Model::GetRegistryRequest& request) {
    using OutcomeT = Model::GetRegistryOutcome;
    using RequestT = Model::GetRegistryRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryReadyWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("READY"),
        [](const Model::GetRegistryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryStatusMapper::GetNameForRegistryStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetRegistryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryStatusMapper::GetNameForRegistryStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::GetRegistryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryStatusMapper::GetNameForRegistryStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryReadyWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::GetRegistryOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryStatusMapper::GetNameForRegistryStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRegistry(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilRegistryReady");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetRegistryRecordOutcome> WaitUntilRegistryRecordApproved(
      const Model::GetRegistryRecordRequest& request) {
    using OutcomeT = Model::GetRegistryRecordOutcome;
    using RequestT = Model::GetRegistryRecordRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryRecordApprovedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("APPROVED"),
        [](const Model::GetRegistryRecordOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryRecordStatusMapper::GetNameForRegistryRecordStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryRecordApprovedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("REJECTED"),
        [](const Model::GetRegistryRecordOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryRecordStatusMapper::GetNameForRegistryRecordStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryRecordApprovedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::GetRegistryRecordOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryRecordStatusMapper::GetNameForRegistryRecordStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "RegistryRecordApprovedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::GetRegistryRecordOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::RegistryRecordStatusMapper::GetNameForRegistryRecordStatus(result.GetStatus()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetRegistryRecord(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilRegistryRecordApproved");
    return waiter.Wait(request);
  }
};
}  // namespace AgentRegistryControl
}  // namespace Aws
