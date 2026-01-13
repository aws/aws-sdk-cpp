/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailServiceClientModel.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/ListQueriesRequest.h>
#include <aws/cloudtrail/model/ListQueriesResult.h>

namespace Aws {
namespace CloudTrail {
namespace Pagination {

template <typename Client = CloudTrailClient>
struct ListQueriesPaginationTraits {
  using RequestType = Model::ListQueriesRequest;
  using ResultType = Model::ListQueriesResult;
  using OutcomeType = Model::ListQueriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListQueries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudTrail
}  // namespace Aws
