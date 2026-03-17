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

#include <algorithm>

namespace Aws {
namespace AppStream {

template <typename DerivedClient = AppStreamClient>
class AppStreamWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeFleetsOutcome> WaitUntilFleetStarted(const Model::DescribeFleetsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFleetsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
                             return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("STOPPING"),
                         [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
                             return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
                             return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeFleetsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeFleets(req); };
    Aws::Utils::Waiter<Model::DescribeFleetsRequest, Model::DescribeFleetsOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilFleetStarted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeFleetsOutcome> WaitUntilFleetStopped(const Model::DescribeFleetsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeFleetsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("STOPPED"),
                         [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
                             return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("STARTING"),
                         [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
                             return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::FAILURE, Aws::Utils::MatcherType::PATH, Aws::String("RUNNING"),
                         [](const Model::DescribeFleetsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(result.GetFleets().begin(), result.GetFleets().end(), [&](const Model::Fleet& item) {
                             return Model::FleetStateMapper::GetNameForFleetState(item.GetState()) == expected.get<Aws::String>();
                           });
                         }});

    auto operation = [this](const Model::DescribeFleetsRequest& req) { return static_cast<DerivedClient*>(this)->DescribeFleets(req); };
    Aws::Utils::Waiter<Model::DescribeFleetsRequest, Model::DescribeFleetsOutcome> waiter(30, 4, acceptors, operation,
                                                                                          "WaitUntilFleetStopped");
    return waiter.Wait(request);
  }
};
}  // namespace AppStream
}  // namespace Aws
