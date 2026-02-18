/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/GetDiscoveredResourceCountsRequest.h>
#include <aws/config/model/GetDiscoveredResourceCountsResult.h>

namespace Aws {
namespace ConfigService {
namespace Pagination {

template <typename Client = ConfigServiceClient>
struct GetDiscoveredResourceCountsPaginationTraits {
  using RequestType = Model::GetDiscoveredResourceCountsRequest;
  using ResultType = Model::GetDiscoveredResourceCountsResult;
  using OutcomeType = Model::GetDiscoveredResourceCountsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetDiscoveredResourceCounts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConfigService
}  // namespace Aws
