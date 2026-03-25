/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsResult.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace AutoScaling {

template <typename DerivedClient = AutoScalingClient>
class AutoScalingWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAutoScalingGroupsOutcome> WaitUntilGroupExists(
      const Model::DescribeAutoScalingGroupsRequest& request) {
    using OutcomeT = Model::DescribeAutoScalingGroupsOutcome;
    using RequestT = Model::DescribeAutoScalingGroupsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GroupExistsWaiter", Aws::Utils::WaiterState::SUCCESS, true,
        [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GroupExistsWaiter", Aws::Utils::WaiterState::RETRY, false,
        [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAutoScalingGroups(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(5, 24, std::move(acceptors), operation, "WaitUntilGroupExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAutoScalingGroupsOutcome> WaitUntilGroupInService(
      const Model::DescribeAutoScalingGroupsRequest& request) {
    using OutcomeT = Model::DescribeAutoScalingGroupsOutcome;
    using RequestT = Model::DescribeAutoScalingGroupsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GroupInServiceWaiter", Aws::Utils::WaiterState::SUCCESS, false,
        [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
                     result.GetAutoScalingGroups().begin(), result.GetAutoScalingGroups().end(), [](const Model::AutoScalingGroup& item) {
                       return !(std::count_if(item.GetInstances().begin(), item.GetInstances().end(), [](const Model::Instance& inner) {
                                  return (Model::LifecycleStateMapper::GetNameForLifecycleState(inner.GetLifecycleState()) == "InService");
                                }) >= item.GetMinSize());
                     }) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GroupInServiceWaiter", Aws::Utils::WaiterState::RETRY, true,
        [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(
                     result.GetAutoScalingGroups().begin(), result.GetAutoScalingGroups().end(), [](const Model::AutoScalingGroup& item) {
                       return !(std::count_if(item.GetInstances().begin(), item.GetInstances().end(), [](const Model::Instance& inner) {
                                  return (Model::LifecycleStateMapper::GetNameForLifecycleState(inner.GetLifecycleState()) == "InService");
                                }) >= item.GetMinSize());
                     }) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAutoScalingGroups(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilGroupInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAutoScalingGroupsOutcome> WaitUntilGroupNotExists(
      const Model::DescribeAutoScalingGroupsRequest& request) {
    using OutcomeT = Model::DescribeAutoScalingGroupsOutcome;
    using RequestT = Model::DescribeAutoScalingGroupsRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GroupNotExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false,
        [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "GroupNotExistsWaiter", Aws::Utils::WaiterState::RETRY, true,
        [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeAutoScalingGroups(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilGroupNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace AutoScaling
}  // namespace Aws
