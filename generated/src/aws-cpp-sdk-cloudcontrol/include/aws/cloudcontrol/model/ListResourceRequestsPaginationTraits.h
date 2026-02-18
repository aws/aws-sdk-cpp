/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApiServiceClientModel.h>
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/ListResourceRequestsRequest.h>
#include <aws/cloudcontrol/model/ListResourceRequestsResult.h>

namespace Aws {
namespace CloudControlApi {
namespace Pagination {

template <typename Client = CloudControlApiClient>
struct ListResourceRequestsPaginationTraits {
  using RequestType = Model::ListResourceRequestsRequest;
  using ResultType = Model::ListResourceRequestsResult;
  using OutcomeType = Model::ListResourceRequestsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourceRequests(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudControlApi
}  // namespace Aws
