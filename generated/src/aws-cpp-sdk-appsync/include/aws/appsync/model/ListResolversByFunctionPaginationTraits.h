/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSyncServiceClientModel.h>
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ListResolversByFunctionRequest.h>
#include <aws/appsync/model/ListResolversByFunctionResult.h>

namespace Aws {
namespace AppSync {
namespace Pagination {

template <typename Client = AppSyncClient>
struct ListResolversByFunctionPaginationTraits {
  using RequestType = Model::ListResolversByFunctionRequest;
  using ResultType = Model::ListResolversByFunctionResult;
  using OutcomeType = Model::ListResolversByFunctionOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResolversByFunction(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppSync
}  // namespace Aws
