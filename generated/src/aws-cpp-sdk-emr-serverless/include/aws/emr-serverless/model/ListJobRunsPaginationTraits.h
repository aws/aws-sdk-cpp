/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerlessServiceClientModel.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/ListJobRunsRequest.h>
#include <aws/emr-serverless/model/ListJobRunsResult.h>

namespace Aws {
namespace EMRServerless {
namespace Pagination {

template <typename Client = EMRServerlessClient>
struct ListJobRunsPaginationTraits {
  using RequestType = Model::ListJobRunsRequest;
  using ResultType = Model::ListJobRunsResult;
  using OutcomeType = Model::ListJobRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListJobRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EMRServerless
}  // namespace Aws
