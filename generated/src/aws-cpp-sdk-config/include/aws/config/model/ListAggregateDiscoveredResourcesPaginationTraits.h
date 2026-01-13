/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesRequest.h>
#include <aws/config/model/ListAggregateDiscoveredResourcesResult.h>

namespace Aws {
namespace ConfigService {
namespace Pagination {

template <typename Client = ConfigServiceClient>
struct ListAggregateDiscoveredResourcesPaginationTraits {
  using RequestType = Model::ListAggregateDiscoveredResourcesRequest;
  using ResultType = Model::ListAggregateDiscoveredResourcesResult;
  using OutcomeType = Model::ListAggregateDiscoveredResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAggregateDiscoveredResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConfigService
}  // namespace Aws
