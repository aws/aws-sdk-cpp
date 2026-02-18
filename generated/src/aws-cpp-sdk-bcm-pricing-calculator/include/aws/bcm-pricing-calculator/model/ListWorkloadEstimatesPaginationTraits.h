/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorServiceClientModel.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesRequest.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesResult.h>

namespace Aws {
namespace BCMPricingCalculator {
namespace Pagination {

template <typename Client = BCMPricingCalculatorClient>
struct ListWorkloadEstimatesPaginationTraits {
  using RequestType = Model::ListWorkloadEstimatesRequest;
  using ResultType = Model::ListWorkloadEstimatesResult;
  using OutcomeType = Model::ListWorkloadEstimatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkloadEstimates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMPricingCalculator
}  // namespace Aws
