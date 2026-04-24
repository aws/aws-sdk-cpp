/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActionsServiceClientModel.h>
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsRequest.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsResult.h>

namespace Aws {
namespace BCMRecommendedActions {
namespace Pagination {

template <typename Client = BCMRecommendedActionsClient>
struct ListRecommendedActionsPaginationTraits {
  using RequestType = Model::ListRecommendedActionsRequest;
  using ResultType = Model::ListRecommendedActionsResult;
  using OutcomeType = Model::ListRecommendedActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommendedActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMRecommendedActions
}  // namespace Aws
