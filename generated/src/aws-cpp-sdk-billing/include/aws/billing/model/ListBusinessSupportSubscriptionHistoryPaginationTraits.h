/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingServiceClientModel.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ListBusinessSupportSubscriptionHistoryRequest.h>
#include <aws/billing/model/ListBusinessSupportSubscriptionHistoryResult.h>

namespace Aws {
namespace Billing {
namespace Pagination {

template <typename Client = BillingClient>
struct ListBusinessSupportSubscriptionHistoryPaginationTraits {
  using RequestType = Model::ListBusinessSupportSubscriptionHistoryRequest;
  using ResultType = Model::ListBusinessSupportSubscriptionHistoryResult;
  using OutcomeType = Model::ListBusinessSupportSubscriptionHistoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBusinessSupportSubscriptionHistory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Billing
}  // namespace Aws
