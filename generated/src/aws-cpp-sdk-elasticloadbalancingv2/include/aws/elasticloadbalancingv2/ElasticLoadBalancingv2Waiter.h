/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
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
    using OutcomeT = Model::DescribeLoadBalancersOutcome;
    using RequestT = Model::DescribeLoadBalancersRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LoadBalancerAvailableWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("active"),
        [](const Model::DescribeLoadBalancersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetLoadBalancers().begin(), result.GetLoadBalancers().end(), [&](const Model::LoadBalancer& item) {
            return Model::LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(item.GetState().GetCode()) ==
                   expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LoadBalancerAvailableWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("provisioning"),
        [](const Model::DescribeLoadBalancersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::any_of(result.GetLoadBalancers().begin(), result.GetLoadBalancers().end(), [&](const Model::LoadBalancer& item) {
            return Model::LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(item.GetState().GetCode()) ==
                   expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "LoadBalancerAvailableWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("LoadBalancerNotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeLoadBalancers(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilLoadBalancerAvailable");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeLoadBalancersOutcome> WaitUntilLoadBalancerExists(
      const Model::DescribeLoadBalancersRequest& request) {
    using OutcomeT = Model::DescribeLoadBalancersOutcome;
    using RequestT = Model::DescribeLoadBalancersRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(
        Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("LoadBalancerExistsWaiter", Aws::Utils::WaiterState::SUCCESS, false));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("LoadBalancerExistsWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("LoadBalancerNotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeLoadBalancers(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilLoadBalancerExists");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeLoadBalancersOutcome> WaitUntilLoadBalancersDeleted(
      const Model::DescribeLoadBalancersRequest& request) {
    using OutcomeT = Model::DescribeLoadBalancersOutcome;
    using RequestT = Model::DescribeLoadBalancersRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "LoadBalancersDeletedWaiter", Aws::Utils::WaiterState::RETRY, Aws::String("active"),
        [](const Model::DescribeLoadBalancersOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetLoadBalancers().begin(), result.GetLoadBalancers().end(), [&](const Model::LoadBalancer& item) {
            return Model::LoadBalancerStateEnumMapper::GetNameForLoadBalancerStateEnum(item.GetState().GetCode()) ==
                   expected.get<Aws::String>();
          });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "LoadBalancersDeletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("LoadBalancerNotFound")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeLoadBalancers(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilLoadBalancersDeleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTargetHealthOutcome> WaitUntilTargetDeregistered(
      const Model::DescribeTargetHealthRequest& request) {
    using OutcomeT = Model::DescribeTargetHealthOutcome;
    using RequestT = Model::DescribeTargetHealthRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>(
        "TargetDeregisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("InvalidTarget")));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TargetDeregisteredWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("unused"),
        [](const Model::DescribeTargetHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetTargetHealthDescriptions().begin(), result.GetTargetHealthDescriptions().end(),
                             [&](const Model::TargetHealthDescription& item) {
                               return Model::TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(
                                          item.GetTargetHealth().GetState()) == expected.get<Aws::String>();
                             });
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTargetHealth(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilTargetDeregistered");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::DescribeTargetHealthOutcome> WaitUntilTargetInService(
      const Model::DescribeTargetHealthRequest& request) {
    using OutcomeT = Model::DescribeTargetHealthOutcome;
    using RequestT = Model::DescribeTargetHealthRequest;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "TargetInServiceWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("healthy"),
        [](const Model::DescribeTargetHealthOutcome& outcome, const Aws::Utils::ExpectedValue& expected) -> bool {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return std::all_of(result.GetTargetHealthDescriptions().begin(), result.GetTargetHealthDescriptions().end(),
                             [&](const Model::TargetHealthDescription& item) {
                               return Model::TargetHealthStateEnumMapper::GetNameForTargetHealthStateEnum(
                                          item.GetTargetHealth().GetState()) == expected.get<Aws::String>();
                             });
        }));
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::ErrorAcceptor<OutcomeT>>("TargetInServiceWaiter", Aws::Utils::WaiterState::RETRY,
                                                                                Aws::String("InvalidInstance")));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->DescribeTargetHealth(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(15, 8, std::move(acceptors), operation, "WaitUntilTargetInService");
    return waiter.Wait(request);
  }
};
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
