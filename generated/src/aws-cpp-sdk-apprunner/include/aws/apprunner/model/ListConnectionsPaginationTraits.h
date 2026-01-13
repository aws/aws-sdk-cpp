/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerServiceClientModel.h>
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/ListConnectionsRequest.h>
#include <aws/apprunner/model/ListConnectionsResult.h>

namespace Aws {
namespace AppRunner {
namespace Pagination {

template <typename Client = AppRunnerClient>
struct ListConnectionsPaginationTraits {
  using RequestType = Model::ListConnectionsRequest;
  using ResultType = Model::ListConnectionsResult;
  using OutcomeType = Model::ListConnectionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConnections(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRunner
}  // namespace Aws
