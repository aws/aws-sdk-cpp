/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorServiceClientModel.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioCommitmentModificationsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioCommitmentModificationsResult.h>

namespace Aws {
namespace BCMPricingCalculator {
namespace Pagination {

template <typename Client = BCMPricingCalculatorClient>
struct ListBillScenarioCommitmentModificationsPaginationTraits {
  using RequestType = Model::ListBillScenarioCommitmentModificationsRequest;
  using ResultType = Model::ListBillScenarioCommitmentModificationsResult;
  using OutcomeType = Model::ListBillScenarioCommitmentModificationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBillScenarioCommitmentModifications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMPricingCalculator
}  // namespace Aws
