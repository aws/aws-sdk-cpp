/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/model/GetDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/GetInvalidation2020_05_31Request.h>
#include <aws/cloudfront/model/GetInvalidation2020_05_31Result.h>
#include <aws/cloudfront/model/GetInvalidationForDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/GetInvalidationForDistributionTenant2020_05_31Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2020_05_31Result.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace CloudFront {

template <typename DerivedClient = CloudFrontClient>
class CloudFrontWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetDistribution2020_05_31Outcome> WaitUntilDistributionDeployed(
      const Model::GetDistribution2020_05_31Request& request) {
    using OutcomeT = Model::GetDistribution2020_05_31Outcome;
    using RequestT = Model::GetDistribution2020_05_31Request;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "DistributionDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Deployed"),
        [](const Model::GetDistribution2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetDistribution().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetDistribution2020_05_31(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 35, std::move(acceptors), operation, "WaitUntilDistributionDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetInvalidation2020_05_31Outcome> WaitUntilInvalidationCompleted(
      const Model::GetInvalidation2020_05_31Request& request) {
    using OutcomeT = Model::GetInvalidation2020_05_31Outcome;
    using RequestT = Model::GetInvalidation2020_05_31Request;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InvalidationCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::GetInvalidationForDistributionTenant2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetInvalidation().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetInvalidation2020_05_31(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 30, std::move(acceptors), operation, "WaitUntilInvalidationCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetInvalidationForDistributionTenant2020_05_31Outcome>
  WaitUntilInvalidationForDistributionTenantCompleted(const Model::GetInvalidationForDistributionTenant2020_05_31Request& request) {
    using OutcomeT = Model::GetInvalidationForDistributionTenant2020_05_31Outcome;
    using RequestT = Model::GetInvalidationForDistributionTenant2020_05_31Request;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "InvalidationForDistributionTenantCompletedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Completed"),
        [](const Model::GetInvalidationForDistributionTenant2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetInvalidation().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) {
      return static_cast<DerivedClient*>(this)->GetInvalidationForDistributionTenant2020_05_31(req);
    };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(20, 30, std::move(acceptors), operation,
                                                  "WaitUntilInvalidationForDistributionTenantCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamingDistribution2020_05_31Outcome> WaitUntilStreamingDistributionDeployed(
      const Model::GetStreamingDistribution2020_05_31Request& request) {
    using OutcomeT = Model::GetStreamingDistribution2020_05_31Outcome;
    using RequestT = Model::GetStreamingDistribution2020_05_31Request;
    Aws::Vector<Aws::UniquePtr<Aws::Utils::Acceptor<OutcomeT>>> acceptors;
    acceptors.emplace_back(Aws::MakeUnique<Aws::Utils::PathAcceptor<OutcomeT>>(
        "StreamingDistributionDeployedWaiter", Aws::Utils::WaiterState::SUCCESS, Aws::String("Deployed"),
        [](const Model::GetStreamingDistribution2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
          if (!outcome.IsSuccess()) return false;
          const auto& result = outcome.GetResult();
          return result.GetStreamingDistribution().GetStatus() == expected.get<Aws::String>();
        }));

    auto operation = [this](const RequestT& req) { return static_cast<DerivedClient*>(this)->GetStreamingDistribution2020_05_31(req); };
    Aws::Utils::Waiter<RequestT, OutcomeT> waiter(60, 25, std::move(acceptors), operation, "WaitUntilStreamingDistributionDeployed");
    return waiter.Wait(request);
  }
};
}  // namespace CloudFront
}  // namespace Aws
