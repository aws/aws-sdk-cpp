/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/DetectiveServiceClientModel.h>
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/ListGraphsRequest.h>
#include <aws/detective/model/ListGraphsResult.h>

namespace Aws {
namespace Detective {
namespace Pagination {

template <typename Client = DetectiveClient>
struct ListGraphsPaginationTraits {
  using RequestType = Model::ListGraphsRequest;
  using ResultType = Model::ListGraphsResult;
  using OutcomeType = Model::ListGraphsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGraphs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Detective
}  // namespace Aws
