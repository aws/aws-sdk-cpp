/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingServiceClientModel.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ListBusinessSupportAccountChargesRequest.h>
#include <aws/billing/model/ListBusinessSupportAccountChargesResult.h>

namespace Aws {
namespace Billing {
namespace Pagination {

template <typename Client = BillingClient>
struct ListBusinessSupportAccountChargesPaginationTraits {
  using RequestType = Model::ListBusinessSupportAccountChargesRequest;
  using ResultType = Model::ListBusinessSupportAccountChargesResult;
  using OutcomeType = Model::ListBusinessSupportAccountChargesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBusinessSupportAccountCharges(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Billing
}  // namespace Aws
