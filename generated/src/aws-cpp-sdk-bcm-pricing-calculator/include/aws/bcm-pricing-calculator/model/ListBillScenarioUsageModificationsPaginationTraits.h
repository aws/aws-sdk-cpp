/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorServiceClientModel.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioUsageModificationsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioUsageModificationsResult.h>

namespace Aws {
namespace BCMPricingCalculator {
namespace Pagination {

template <typename Client = BCMPricingCalculatorClient>
struct ListBillScenarioUsageModificationsPaginationTraits {
  using RequestType = Model::ListBillScenarioUsageModificationsRequest;
  using ResultType = Model::ListBillScenarioUsageModificationsResult;
  using OutcomeType = Model::ListBillScenarioUsageModificationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBillScenarioUsageModifications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMPricingCalculator
}  // namespace Aws
