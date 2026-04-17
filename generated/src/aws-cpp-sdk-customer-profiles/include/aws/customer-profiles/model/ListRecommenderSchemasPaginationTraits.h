/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfilesServiceClientModel.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ListRecommenderSchemasRequest.h>
#include <aws/customer-profiles/model/ListRecommenderSchemasResult.h>

namespace Aws {
namespace CustomerProfiles {
namespace Pagination {

template <typename Client = CustomerProfilesClient>
struct ListRecommenderSchemasPaginationTraits {
  using RequestType = Model::ListRecommenderSchemasRequest;
  using ResultType = Model::ListRecommenderSchemasResult;
  using OutcomeType = Model::ListRecommenderSchemasOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecommenderSchemas(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CustomerProfiles
}  // namespace Aws
