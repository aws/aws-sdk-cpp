/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalystServiceClientModel.h>
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/ListAccessTokensRequest.h>
#include <aws/codecatalyst/model/ListAccessTokensResult.h>

namespace Aws {
namespace CodeCatalyst {
namespace Pagination {

template <typename Client = CodeCatalystClient>
struct ListAccessTokensPaginationTraits {
  using RequestType = Model::ListAccessTokensRequest;
  using ResultType = Model::ListAccessTokensResult;
  using OutcomeType = Model::ListAccessTokensOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccessTokens(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeCatalyst
}  // namespace Aws
