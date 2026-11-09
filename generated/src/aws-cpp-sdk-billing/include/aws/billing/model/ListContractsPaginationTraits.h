/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingServiceClientModel.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ListContractsRequest.h>
#include <aws/billing/model/ListContractsResult.h>

namespace Aws {
namespace Billing {
namespace Pagination {

template <typename Client = BillingClient>
struct ListContractsPaginationTraits {
  using RequestType = Model::ListContractsRequest;
  using ResultType = Model::ListContractsResult;
  using OutcomeType = Model::ListContractsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListContracts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Billing
}  // namespace Aws
