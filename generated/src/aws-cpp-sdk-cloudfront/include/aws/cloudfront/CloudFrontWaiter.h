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

#include <algorithm>

namespace Aws {
namespace CloudFront {

template <typename DerivedClient = CloudFrontClient>
class CloudFrontWaiter {
 public:
  Aws::Utils::WaiterOutcome<Model::GetDistribution2020_05_31Outcome> WaitUntilDistributionDeployed(
      const Model::GetDistribution2020_05_31Request& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetDistribution2020_05_31Outcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Deployed"),
                         [](const Model::GetDistribution2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetDistribution().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetDistribution2020_05_31Request& req) {
      return static_cast<DerivedClient*>(this)->GetDistribution2020_05_31(req);
    };
    Aws::Utils::Waiter<Model::GetDistribution2020_05_31Request, Model::GetDistribution2020_05_31Outcome> waiter(
        60, 35, acceptors, operation, "WaitUntilDistributionDeployed");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetInvalidation2020_05_31Outcome> WaitUntilInvalidationCompleted(
      const Model::GetInvalidation2020_05_31Request& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetInvalidation2020_05_31Outcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
         [](const Model::GetInvalidationForDistributionTenant2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return result.GetInvalidation().GetStatus() == expected.get<Aws::String>();
         }});

    auto operation = [this](const Model::GetInvalidation2020_05_31Request& req) {
      return static_cast<DerivedClient*>(this)->GetInvalidation2020_05_31(req);
    };
    Aws::Utils::Waiter<Model::GetInvalidation2020_05_31Request, Model::GetInvalidation2020_05_31Outcome> waiter(
        20, 30, acceptors, operation, "WaitUntilInvalidationCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetInvalidationForDistributionTenant2020_05_31Outcome>
  WaitUntilInvalidationForDistributionTenantCompleted(const Model::GetInvalidationForDistributionTenant2020_05_31Request& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetInvalidationForDistributionTenant2020_05_31Outcome>> acceptors;
    acceptors.push_back(
        {Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Completed"),
         [](const Model::GetInvalidationForDistributionTenant2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
           if (!outcome.IsSuccess()) return false;
           const auto& result = outcome.GetResult();
           return result.GetInvalidation().GetStatus() == expected.get<Aws::String>();
         }});

    auto operation = [this](const Model::GetInvalidationForDistributionTenant2020_05_31Request& req) {
      return static_cast<DerivedClient*>(this)->GetInvalidationForDistributionTenant2020_05_31(req);
    };
    Aws::Utils::Waiter<Model::GetInvalidationForDistributionTenant2020_05_31Request,
                       Model::GetInvalidationForDistributionTenant2020_05_31Outcome>
        waiter(20, 30, acceptors, operation, "WaitUntilInvalidationForDistributionTenantCompleted");
    return waiter.Wait(request);
  }

  Aws::Utils::WaiterOutcome<Model::GetStreamingDistribution2020_05_31Outcome> WaitUntilStreamingDistributionDeployed(
      const Model::GetStreamingDistribution2020_05_31Request& request) {
    std::vector<Aws::Utils::Acceptor<Model::GetStreamingDistribution2020_05_31Outcome>> acceptors;
    acceptors.push_back({Aws::Utils::WaiterState::SUCCESS, Aws::Utils::MatcherType::PATH, Aws::String("Deployed"),
                         [](const Model::GetStreamingDistribution2020_05_31Outcome& outcome, const Aws::Utils::ExpectedValue& expected) {
                           if (!outcome.IsSuccess()) return false;
                           const auto& result = outcome.GetResult();
                           return result.GetStreamingDistribution().GetStatus() == expected.get<Aws::String>();
                         }});

    auto operation = [this](const Model::GetStreamingDistribution2020_05_31Request& req) {
      return static_cast<DerivedClient*>(this)->GetStreamingDistribution2020_05_31(req);
    };
    Aws::Utils::Waiter<Model::GetStreamingDistribution2020_05_31Request, Model::GetStreamingDistribution2020_05_31Outcome> waiter(
        60, 25, acceptors, operation, "WaitUntilStreamingDistributionDeployed");
    return waiter.Wait(request);
  }
};
}  // namespace CloudFront
}  // namespace Aws
