/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfilesServiceClientModel.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ListRecommenderRecipesRequest.h>
#include <aws/customer-profiles/model/ListRecommenderRecipesResult.h>

namespace Aws {
namespace CustomerProfiles {
namespace Pagination {

template <typename Client = CustomerProfilesClient>
struct ListRecommenderRecipesPaginationTraits {
  using RequestType = Model::ListRecommenderRecipesRequest;
  using ResultType = Model::ListRecommenderRecipesResult;
  using OutcomeType = Model::ListRecommenderRecipesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommenderRecipes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CustomerProfiles
}  // namespace Aws
