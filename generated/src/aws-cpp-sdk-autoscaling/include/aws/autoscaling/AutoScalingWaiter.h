/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingClient.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsRequest.h>
#include <aws/autoscaling/model/DescribeAutoScalingGroupsResult.h>
#include <aws/core/utils/Waiter.h>

#include <algorithm>

namespace Aws {
namespace AutoScaling {

template <typename DerivedClient = AutoScalingClient>
class AutoScalingWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeAutoScalingGroupsOutcome> WaitUntilGroupExists(
      const Model::DescribeAutoScalingGroupsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAutoScalingGroupsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, false,
                         [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::DescribeAutoScalingGroupsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAutoScalingGroups(req);
    };
    Aws::Utils::Waiter<Model::DescribeAutoScalingGroupsRequest, Model::DescribeAutoScalingGroupsOutcome> waiter(5, 24, acceptors, operation,
                                                                                                                "WaitUntilGroupExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAutoScalingGroupsOutcome> WaitUntilGroupInService(
      const Model::DescribeAutoScalingGroupsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAutoScalingGroupsOutcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, false,
         [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetAutoScalingGroups().begin(), result.GetAutoScalingGroups().end(),
                              [](const Model::AutoScalingGroup& item) {
                                return !(std::count_if(item.GetInstances().begin(), item.GetInstances().end(), [](const auto& inner) {
                                           return (inner.GetLifecycleState() == "InService");
                                         }) >= item.GetMinSize());
                              }) == expected.get<bool>();
         }});
    acceptors.push_back(
        {Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, true,
         [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return std::any_of(result.GetAutoScalingGroups().begin(), result.GetAutoScalingGroups().end(),
                              [](const Model::AutoScalingGroup& item) {
                                return !(std::count_if(item.GetInstances().begin(), item.GetInstances().end(), [](const auto& inner) {
                                           return (inner.GetLifecycleState() == "InService");
                                         }) >= item.GetMinSize());
                              }) == expected.get<bool>();
         }});

    auto operation = [this](const Model::DescribeAutoScalingGroupsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAutoScalingGroups(req);
    };
    Aws::Utils::Waiter<Model::DescribeAutoScalingGroupsRequest, Model::DescribeAutoScalingGroupsOutcome> waiter(15, 8, acceptors, operation,
                                                                                                                "WaitUntilGroupInService");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeAutoScalingGroupsOutcome> WaitUntilGroupNotExists(
      const Model::DescribeAutoScalingGroupsRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeAutoScalingGroupsOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, false,
                         [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, true,
                         [](const Model::DescribeAutoScalingGroupsOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return (result.GetAutoScalingGroups().size() > 0) == expected.get<bool>();
                         }});

    auto operation = [this](const Model::DescribeAutoScalingGroupsRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeAutoScalingGroups(req);
    };
    Aws::Utils::Waiter<Model::DescribeAutoScalingGroupsRequest, Model::DescribeAutoScalingGroupsOutcome> waiter(15, 8, acceptors, operation,
                                                                                                                "WaitUntilGroupNotExists");
    return waiter.Wait(request);
  }
};
}  // namespace AutoScaling
}  // namespace Aws
