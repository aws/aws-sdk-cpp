/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/ListDataTransformationJobsRequest.h>
#include <aws/healthlake/model/ListDataTransformationJobsResult.h>

namespace Aws {
namespace HealthLake {
namespace Pagination {

template <typename Client = HealthLakeClient>
struct ListDataTransformationJobsPaginationTraits {
  using RequestType = Model::ListDataTransformationJobsRequest;
  using ResultType = Model::ListDataTransformationJobsResult;
  using OutcomeType = Model::ListDataTransformationJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataTransformationJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace HealthLake
}  // namespace Aws
