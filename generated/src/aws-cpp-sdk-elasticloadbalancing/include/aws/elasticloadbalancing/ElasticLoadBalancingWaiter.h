/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthResult.h>

#include <algorithm>

namespace Aws {
namespace ElasticLoadBalancing {

template <typename DerivedClient = ElasticLoadBalancingClient>
class ElasticLoadBalancingWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeInstanceHealthOutcome> WaitUntilAnyInstanceInService(
      const Model::DescribeInstanceHealthRequest& request) {
    using OutcomeT = Model::DescribeInstanceHealthOutcome;
    using RequestT = Model::DescribeInstanceHealthRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "AnyInstanceInServiceWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InService"),
        [](const Model::DescribeInstanceHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetInstanceStates().begin(), result.GetInstanceStates().end(),
                             [&](const Model::InstanceState& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstanceHealth(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilAnyInstanceInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstanceHealthOutcome> WaitUntilInstanceDeregistered(
      const Model::DescribeInstanceHealthRequest& request) {
    using OutcomeT = Model::DescribeInstanceHealthOutcome;
    using RequestT = Model::DescribeInstanceHealthRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceDeregisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("OutOfService"),
        [](const Model::DescribeInstanceHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetInstanceStates().begin(), result.GetInstanceStates().end(),
                             [&](const Model::InstanceState& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "InstanceDeregisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InvalidInstance")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstanceHealth(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilInstanceDeregistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeInstanceHealthOutcome> WaitUntilInstanceInService(
      const Model::DescribeInstanceHealthRequest& request) {
    using OutcomeT = Model::DescribeInstanceHealthOutcome;
    using RequestT = Model::DescribeInstanceHealthRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InstanceInServiceWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InService"),
        [](const Model::DescribeInstanceHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetInstanceStates().begin(), result.GetInstanceStates().end(),
                             [&](const Model::InstanceState& item) { return item.GetState() == expected.get<Aws::String>(); });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("InstanceInServiceWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidInstance")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeInstanceHealth(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilInstanceInService");
    return waiter.Wait(request);
  }
};
}  // namespace ElasticLoadBalancing
}  // namespace Aws
