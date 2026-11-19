/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/eventbridgev2/EventBridgeV2Client.h>
#include <aws/eventbridgev2/model/BusState.h>
#include <aws/eventbridgev2/model/ConnectivityState.h>
#include <aws/eventbridgev2/model/DescribeEventBusRequest.h>
#include <aws/eventbridgev2/model/DescribeEventBusResult.h>
#include <aws/eventbridgev2/model/DescribeSubscriberRequest.h>
#include <aws/eventbridgev2/model/DescribeSubscriberResult.h>

#include <algorithm>

namespace Aws {
namespace EventBridgeV2 {

template <typename DerivedClient = EventBridgeV2Client>
class EventBridgeV2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeEventBusOutcome> WaitUntilEventBusActive(const Model::DescribeEventBusRequest& request) {
    using OutcomeT = Model::DescribeEventBusOutcome;
    using RequestT = Model::DescribeEventBusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EventBusActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("CREATE_FAILED"),
        [](const Model::DescribeEventBusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BusStateMapper::GetNameForBusState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EventBusActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("UPDATE_FAILED"),
        [](const Model::DescribeEventBusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BusStateMapper::GetNameForBusState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EventBusActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeEventBusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BusStateMapper::GetNameForBusState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EventBusActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeEventBusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BusStateMapper::GetNameForBusState(result.GetState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEventBus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilEventBusActive");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeEventBusOutcome> WaitUntilEventBusDeleted(const Model::DescribeEventBusRequest& request) {
    using OutcomeT = Model::DescribeEventBusOutcome;
    using RequestT = Model::DescribeEventBusRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "EventBusDeletedWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("DELETE_FAILED"),
        [](const Model::DescribeEventBusOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::BusStateMapper::GetNameForBusState(result.GetState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("EventBusDeletedWaiter", Aws::Utils::WaiterState::SUCCESS,
                                                                                Aws::String("ResourceNotFoundException")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeEventBus(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 60, std::move(acceptors), operation, "WaitUntilEventBusDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeSubscriberOutcome> WaitUntilMskSubscriberActive(
      const Model::DescribeSubscriberRequest& request) {
    using OutcomeT = Model::DescribeSubscriberOutcome;
    using RequestT = Model::DescribeSubscriberRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MskSubscriberActiveWaiter", Aws::Utils::WaiterState::FAILURE, Aws::String("PROVISION_FAILED"),
        [](const Model::DescribeSubscriberOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ConnectivityStateMapper::GetNameForConnectivityState(
                     result.GetSubscriberDetails().GetMskDetails().GetConnectivityState()) == expected.get<Aws::String>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "MskSubscriberActiveWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("ACTIVE"),
        [](const Model::DescribeSubscriberOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return Model::ConnectivityStateMapper::GetNameForConnectivityState(
                     result.GetSubscriberDetails().GetMskDetails().GetConnectivityState()) == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeSubscriber(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(2, 150, std::move(acceptors), operation, "WaitUntilMskSubscriberActive");
    return waiter.Wait(request);
  }
};
}  // namespace EventBridgeV2
}  // namespace Aws
