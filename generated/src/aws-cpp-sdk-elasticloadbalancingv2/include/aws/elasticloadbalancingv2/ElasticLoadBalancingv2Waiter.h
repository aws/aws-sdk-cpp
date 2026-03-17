/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Client.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersResult.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthResult.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerStateEnum.h>
#include <aws/elasticloadbalancingv2/model/TargetHealthStateEnum.h>

#include <algorithm>

namespace Aws {
namespace ElasticLoadBalancingv2 {

template <typename DerivedClient = ElasticLoadBalancingv2Client>
class ElasticLoadBalancingv2Waiter {
 public:
  Aws::Utils::WaiterOutcome<Model::DescribeLoadBalancersOutcome> WaitUntilLoadBalancerAvailable(
      const Model::DescribeLoadBalancersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeLoadBalancersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("active"),
                         [](const Model::DescribeLoadBalancersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetLoadBalancers().begin(), result.GetLoadBalancers().end(), [&](const Model::LoadBalancer& item) {
                                 return Model::LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(item.GetState().GetCode()) ==
                                        expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("provisioning"),
                         [](const Model::DescribeLoadBalancersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::any_of(
                               result.GetLoadBalancers().begin(), result.GetLoadBalancers().end(), [&](const Model::LoadBalancer& item) {
                                 return Model::LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(item.GetState().GetCode()) ==
                                        expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("LoadBalancerNotFound")});

    auto operation = [this](const Model::DescribeLoadBalancersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeLoadBalancers(req);
    };
    Aws::Utils::Waiter<Model::DescribeLoadBalancersRequest, Model::DescribeLoadBalancersOutcome> waiter(15, 8, acceptors, operation,
                                                                                                        "WaitUntilLoadBalancerAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeLoadBalancersOutcome> WaitUntilLoadBalancerExists(
      const Model::DescribeLoadBalancersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeLoadBalancersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, false});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("LoadBalancerNotFound")});

    auto operation = [this](const Model::DescribeLoadBalancersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeLoadBalancers(req);
    };
    Aws::Utils::Waiter<Model::DescribeLoadBalancersRequest, Model::DescribeLoadBalancersOutcome> waiter(15, 8, acceptors, operation,
                                                                                                        "WaitUntilLoadBalancerExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeLoadBalancersOutcome> WaitUntilLoadBalancersDeleted(
      const Model::DescribeLoadBalancersRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeLoadBalancersOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::PATH, Aws::String("active"),
                         [](const Model::DescribeLoadBalancersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(
                               result.GetLoadBalancers().begin(), result.GetLoadBalancers().end(), [&](const Model::LoadBalancer& item) {
                                 return Model::LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(item.GetState().GetCode()) ==
                                        expected.get<Aws::String>();
                               });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("LoadBalancerNotFound")});

    auto operation = [this](const Model::DescribeLoadBalancersRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeLoadBalancers(req);
    };
    Aws::Utils::Waiter<Model::DescribeLoadBalancersRequest, Model::DescribeLoadBalancersOutcome> waiter(15, 8, acceptors, operation,
                                                                                                        "WaitUntilLoadBalancersDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTargetHealthOutcome> WaitUntilTargetDeregistered(
      const Model::DescribeTargetHealthRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTargetHealthOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidTarget")});
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("unused"),
                         [](const Model::DescribeTargetHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetTargetHealthDescriptions().begin(), result.GetTargetHealthDescriptions().end(),
                                              [&](const Model::TargetHealthDescription& item) {
                                                return Model::TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(
                                                           item.GetTargetHealth().GetState()) == expected.get<Aws::String>();
                                              });
                         }});

    auto operation = [this](const Model::DescribeTargetHealthRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTargetHealth(req);
    };
    Aws::Utils::Waiter<Model::DescribeTargetHealthRequest, Model::DescribeTargetHealthOutcome> waiter(15, 8, acceptors, operation,
                                                                                                      "WaitUntilTargetDeregistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTargetHealthOutcome> WaitUntilTargetInService(
      const Model::DescribeTargetHealthRequest& request) {
    std::vector<Aws::Utils::Acceptor<Model::DescribeTargetHealthOutcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("healthy"),
                         [](const Model::DescribeTargetHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return std::all_of(result.GetTargetHealthDescriptions().begin(), result.GetTargetHealthDescriptions().end(),
                                              [&](const Model::TargetHealthDescription& item) {
                                                return Model::TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(
                                                           item.GetTargetHealth().GetState()) == expected.get<Aws::String>();
                                              });
                         }});
    acceptors.push_back({Aws::Utils::WaiterState::RETRY, Aws::Utils::MatcherType::ERROR, Aws::String("InvalidInstance")});

    auto operation = [this](const Model::DescribeTargetHealthRequest& req) {
      return static_cast<DerivedClient*>(this)->DescribeTargetHealth(req);
    };
    Aws::Utils::Waiter<Model::DescribeTargetHealthRequest, Model::DescribeTargetHealthOutcome> waiter(15, 8, acceptors, operation,
                                                                                                      "WaitUntilTargetInService");
    return waiter.Wait(request);
  }
};
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
