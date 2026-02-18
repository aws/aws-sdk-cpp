/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStationServiceClientModel.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsRequest.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsResult.h>

namespace Aws {
namespace GroundStation {
namespace Pagination {

template <typename Client = GroundStationClient>
struct ListDataflowEndpointGroupsPaginationTraits {
  using RequestType = Model::ListDataflowEndpointGroupsRequest;
  using ResultType = Model::ListDataflowEndpointGroupsResult;
  using OutcomeType = Model::ListDataflowEndpointGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataflowEndpointGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GroundStation
}  // namespace Aws
