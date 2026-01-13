/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorServiceClientModel.h>
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemRequest.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemResult.h>

namespace Aws {
namespace BillingConductor {
namespace Pagination {

template <typename Client = BillingConductorClient>
struct ListResourcesAssociatedToCustomLineItemPaginationTraits {
  using RequestType = Model::ListResourcesAssociatedToCustomLineItemRequest;
  using ResultType = Model::ListResourcesAssociatedToCustomLineItemResult;
  using OutcomeType = Model::ListResourcesAssociatedToCustomLineItemOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourcesAssociatedToCustomLineItem(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BillingConductor
}  // namespace Aws
