/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusServiceServiceClientModel.h>
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/ListScrapersRequest.h>
#include <aws/amp/model/ListScrapersResult.h>

namespace Aws {
namespace PrometheusService {
namespace Pagination {

template <typename Client = PrometheusServiceClient>
struct ListScrapersPaginationTraits {
  using RequestType = Model::ListScrapersRequest;
  using ResultType = Model::ListScrapersResult;
  using OutcomeType = Model::ListScrapersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListScrapers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PrometheusService
}  // namespace Aws
