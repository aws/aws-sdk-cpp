/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfilerServiceClientModel.h>
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsRequest.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsResult.h>

namespace Aws {
namespace CodeGuruProfiler {
namespace Pagination {

template <typename Client = CodeGuruProfilerClient>
struct ListFindingsReportsPaginationTraits {
  using RequestType = Model::ListFindingsReportsRequest;
  using ResultType = Model::ListFindingsReportsResult;
  using OutcomeType = Model::ListFindingsReportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFindingsReports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruProfiler
}  // namespace Aws
