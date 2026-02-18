/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastServiceServiceClientModel.h>
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/ListDatasetImportJobsRequest.h>
#include <aws/forecast/model/ListDatasetImportJobsResult.h>

namespace Aws {
namespace ForecastService {
namespace Pagination {

template <typename Client = ForecastServiceClient>
struct ListDatasetImportJobsPaginationTraits {
  using RequestType = Model::ListDatasetImportJobsRequest;
  using ResultType = Model::ListDatasetImportJobsResult;
  using OutcomeType = Model::ListDatasetImportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDatasetImportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ForecastService
}  // namespace Aws
