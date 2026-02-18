/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailServiceClientModel.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/ListTrailsRequest.h>
#include <aws/cloudtrail/model/ListTrailsResult.h>

namespace Aws {
namespace CloudTrail {
namespace Pagination {

template <typename Client = CloudTrailClient>
struct ListTrailsPaginationTraits {
  using RequestType = Model::ListTrailsRequest;
  using ResultType = Model::ListTrailsResult;
  using OutcomeType = Model::ListTrailsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTrails(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudTrail
}  // namespace Aws
