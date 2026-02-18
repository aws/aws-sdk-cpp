/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApiServiceClientModel.h>
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/cloudcontrol/model/ListResourcesRequest.h>
#include <aws/cloudcontrol/model/ListResourcesResult.h>

namespace Aws {
namespace CloudControlApi {
namespace Pagination {

template <typename Client = CloudControlApiClient>
struct ListResourcesPaginationTraits {
  using RequestType = Model::ListResourcesRequest;
  using ResultType = Model::ListResourcesResult;
  using OutcomeType = Model::ListResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudControlApi
}  // namespace Aws
