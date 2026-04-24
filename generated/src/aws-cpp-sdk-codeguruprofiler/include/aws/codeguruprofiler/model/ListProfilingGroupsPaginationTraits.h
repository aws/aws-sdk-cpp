/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfilerServiceClientModel.h>
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsRequest.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsResult.h>

namespace Aws {
namespace CodeGuruProfiler {
namespace Pagination {

template <typename Client = CodeGuruProfilerClient>
struct ListProfilingGroupsPaginationTraits {
  using RequestType = Model::ListProfilingGroupsRequest;
  using ResultType = Model::ListProfilingGroupsResult;
  using OutcomeType = Model::ListProfilingGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProfilingGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruProfiler
}  // namespace Aws
