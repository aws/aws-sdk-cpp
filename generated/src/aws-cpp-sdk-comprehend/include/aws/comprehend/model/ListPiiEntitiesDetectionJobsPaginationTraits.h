/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/ComprehendServiceClientModel.h>
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsResult.h>

namespace Aws {
namespace Comprehend {
namespace Pagination {

template <typename Client = ComprehendClient>
struct ListPiiEntitiesDetectionJobsPaginationTraits {
  using RequestType = Model::ListPiiEntitiesDetectionJobsRequest;
  using ResultType = Model::ListPiiEntitiesDetectionJobsResult;
  using OutcomeType = Model::ListPiiEntitiesDetectionJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPiiEntitiesDetectionJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Comprehend
}  // namespace Aws
