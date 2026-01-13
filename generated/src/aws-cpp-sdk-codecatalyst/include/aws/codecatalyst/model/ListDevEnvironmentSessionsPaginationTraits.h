/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalystServiceClientModel.h>
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsRequest.h>
#include <aws/codecatalyst/model/ListDevEnvironmentSessionsResult.h>

namespace Aws {
namespace CodeCatalyst {
namespace Pagination {

template <typename Client = CodeCatalystClient>
struct ListDevEnvironmentSessionsPaginationTraits {
  using RequestType = Model::ListDevEnvironmentSessionsRequest;
  using ResultType = Model::ListDevEnvironmentSessionsResult;
  using OutcomeType = Model::ListDevEnvironmentSessionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDevEnvironmentSessions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeCatalyst
}  // namespace Aws
