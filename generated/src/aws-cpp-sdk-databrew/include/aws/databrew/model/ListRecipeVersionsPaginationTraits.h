/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrewServiceClientModel.h>
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/ListRecipeVersionsRequest.h>
#include <aws/databrew/model/ListRecipeVersionsResult.h>

namespace Aws {
namespace GlueDataBrew {
namespace Pagination {

template <typename Client = GlueDataBrewClient>
struct ListRecipeVersionsPaginationTraits {
  using RequestType = Model::ListRecipeVersionsRequest;
  using ResultType = Model::ListRecipeVersionsResult;
  using OutcomeType = Model::ListRecipeVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecipeVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlueDataBrew
}  // namespace Aws
