/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunnerServiceClientModel.h>
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsRequest.h>
#include <aws/apprunner/model/ListVpcIngressConnectionsResult.h>

namespace Aws {
namespace AppRunner {
namespace Pagination {

template <typename Client = AppRunnerClient>
struct ListVpcIngressConnectionsPaginationTraits {
  using RequestType = Model::ListVpcIngressConnectionsRequest;
  using ResultType = Model::ListVpcIngressConnectionsResult;
  using OutcomeType = Model::ListVpcIngressConnectionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVpcIngressConnections(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppRunner
}  // namespace Aws
