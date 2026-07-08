/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/inspector2/Inspector2Client.h>
#include <aws/inspector2/model/ConnectorHealthStatus.h>
#include <aws/inspector2/model/EnablementStatus.h>
#include <aws/inspector2/model/ListConnectorsRequest.h>
#include <aws/inspector2/model/ListConnectorsResult.h>

#include <algorithm>

namespace Aws {
namespace Inspector2 {

template <typename DerivedClient = Inspector2Client>
class Inspector2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::ListConnectorsOutcome> WaitUntilConnectorEnabled(const Model::ListConnectorsRequest& request) {
    using OutcomeT = Model::ListConnectorsOutcome;
    using RequestT = Model::ListConnectorsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorEnabledWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ENABLED"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::EnablementStatusMapper::GetNameForEnablementStatus(item.GetEnablementStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorEnabledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED_TO_ENABLE"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::EnablementStatusMapper::GetNameForEnablementStatus(item.GetEnablementStatus()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorEnabledWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED_TO_UPDATE"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::EnablementStatusMapper::GetNameForEnablementStatus(item.GetEnablementStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->ListConnectors(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilConnectorEnabled");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::ListConnectorsOutcome> WaitUntilConnectorDeleted(const Model::ListConnectorsRequest& request) {
    using OutcomeT = Model::ListConnectorsOutcome;
    using RequestT = Model::ListConnectorsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetItems().size() == 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED_TO_DELETE"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::EnablementStatusMapper::GetNameForEnablementStatus(item.GetEnablementStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->ListConnectors(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilConnectorDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::ListConnectorsOutcome> WaitUntilConnectorConnected(const Model::ListConnectorsRequest& request) {
    using OutcomeT = Model::ListConnectorsOutcome;
    using RequestT = Model::ListConnectorsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorConnectedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("CONNECTED"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::ConnectorHealthStatusMapper::GetNameForConnectorHealthStatus(item.GetHealth().GetConnectorStatus()) ==
                   expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorConnectedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED_TO_CONNECT"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::ConnectorHealthStatusMapper::GetNameForConnectorHealthStatus(item.GetHealth().GetConnectorStatus()) ==
                   expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "ConnectorConnectedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("FAILED_TO_ENABLE"),
        [](const Model::ListConnectorsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetItems().begin(), result.GetItems().end(), [&](const Model::Connector& item) {
            return Model::EnablementStatusMapper::GetNameForEnablementStatus(item.GetEnablementStatus()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->ListConnectors(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilConnectorConnected");
    return waiter.Wait(request);
  }
};
}  // namespace Inspector2
}  // namespace Aws
