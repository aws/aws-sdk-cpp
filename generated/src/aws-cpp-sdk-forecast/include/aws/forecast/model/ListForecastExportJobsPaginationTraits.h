/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastServiceServiceClientModel.h>
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/ListForecastExportJobsRequest.h>
#include <aws/forecast/model/ListForecastExportJobsResult.h>

namespace Aws {
namespace ForecastService {
namespace Pagination {

template <typename Client = ForecastServiceClient>
struct ListForecastExportJobsPaginationTraits {
  using RequestType = Model::ListForecastExportJobsRequest;
  using ResultType = Model::ListForecastExportJobsResult;
  using OutcomeType = Model::ListForecastExportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListForecastExportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ForecastService
}  // namespace Aws
