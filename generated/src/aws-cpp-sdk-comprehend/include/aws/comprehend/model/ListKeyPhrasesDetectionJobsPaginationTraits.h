/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/ComprehendServiceClientModel.h>
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsResult.h>

namespace Aws {
namespace Comprehend {
namespace Pagination {

template <typename Client = ComprehendClient>
struct ListKeyPhrasesDetectionJobsPaginationTraits {
  using RequestType = Model::ListKeyPhrasesDetectionJobsRequest;
  using ResultType = Model::ListKeyPhrasesDetectionJobsResult;
  using OutcomeType = Model::ListKeyPhrasesDetectionJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKeyPhrasesDetectionJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Comprehend
}  // namespace Aws
