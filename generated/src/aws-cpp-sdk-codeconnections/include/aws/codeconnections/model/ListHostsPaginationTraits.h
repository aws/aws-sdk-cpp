/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnectionsServiceClientModel.h>
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/codeconnections/model/ListHostsRequest.h>
#include <aws/codeconnections/model/ListHostsResult.h>

namespace Aws {
namespace CodeConnections {
namespace Pagination {

template <typename Client = CodeConnectionsClient>
struct ListHostsPaginationTraits {
  using RequestType = Model::ListHostsRequest;
  using ResultType = Model::ListHostsResult;
  using OutcomeType = Model::ListHostsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListHosts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeConnections
}  // namespace Aws
