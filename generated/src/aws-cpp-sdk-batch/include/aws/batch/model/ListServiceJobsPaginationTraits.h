/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/BatchServiceClientModel.h>
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ListServiceJobsRequest.h>
#include <aws/batch/model/ListServiceJobsResult.h>

namespace Aws {
namespace Batch {
namespace Pagination {

template <typename Client = BatchClient>
struct ListServiceJobsPaginationTraits {
  using RequestType = Model::ListServiceJobsRequest;
  using ResultType = Model::ListServiceJobsResult;
  using OutcomeType = Model::ListServiceJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListServiceJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Batch
}  // namespace Aws
