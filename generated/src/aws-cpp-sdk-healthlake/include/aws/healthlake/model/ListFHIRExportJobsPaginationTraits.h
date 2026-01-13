/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ListFHIRExportJobsRequest.h>
#include <aws/healthlake/model/ListFHIRExportJobsResult.h>

namespace Aws {
namespace HealthLake {
namespace Pagination {

template <typename Client = HealthLakeClient>
struct ListFHIRExportJobsPaginationTraits {
  using RequestType = Model::ListFHIRExportJobsRequest;
  using ResultType = Model::ListFHIRExportJobsResult;
  using OutcomeType = Model::ListFHIRExportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFHIRExportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace HealthLake
}  // namespace Aws
