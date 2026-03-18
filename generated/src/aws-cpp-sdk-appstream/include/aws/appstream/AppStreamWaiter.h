/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamClient.h>
#include <aws/appstream/model/DescribeFleetsRequest.h>
#include <aws/appstream/model/DescribeFleetsResult.h>
#include <aws/appstream/model/FleetState.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AppStream {

template <typename DerivedClient = AppStreamClient>
class AppStreamWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeFleetsOutcome> WaitUntilFleetStarted(const Model::DescribeFleetsRequest& request) {
    using OutcomeT = Model::DescribeFleetsOutcome;
    using RequestT = Model::DescribeFleetsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetStartedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("RUNNING"),
        [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
            return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetStartedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STOPPING"),
        [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
            return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetStartedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STOPPED"),
        [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
            return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFleets(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilFleetStarted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFleetsOutcome> WaitUntilFleetStopped(const Model::DescribeFleetsRequest& request) {
    using OutcomeT = Model::DescribeFleetsOutcome;
    using RequestT = Model::DescribeFleetsRequest;
    std::vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetStoppedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("STOPPED"),
        [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
            return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("STARTING"),
        [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
            return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "FleetStoppedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("RUNNING"),
        [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
            return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
          });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeFleets(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(30, 4, std::move(acceptors), operation, "WaitUntilFleetStopped");
    return waiter.Wait(request);
  }
};
}  // namespace AppStream
}  // namespace Aws
