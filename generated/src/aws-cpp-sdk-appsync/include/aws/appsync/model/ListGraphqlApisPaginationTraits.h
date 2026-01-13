/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSyncServiceClientModel.h>
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ListGraphqlApisRequest.h>
#include <aws/appsync/model/ListGraphqlApisResult.h>

namespace Aws {
namespace AppSync {
namespace Pagination {

template <typename Client = AppSyncClient>
struct ListGraphqlApisPaginationTraits {
  using RequestType = Model::ListGraphqlApisRequest;
  using ResultType = Model::ListGraphqlApisResult;
  using OutcomeType = Model::ListGraphqlApisOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGraphqlApis(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppSync
}  // namespace Aws
