/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfilerServiceClientModel.h>
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryRequest.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryResult.h>

namespace Aws {
namespace CodeGuruProfiler {
namespace Pagination {

template <typename Client = CodeGuruProfilerClient>
struct GetFindingsReportAccountSummaryPaginationTraits {
  using RequestType = Model::GetFindingsReportAccountSummaryRequest;
  using ResultType = Model::GetFindingsReportAccountSummaryResult;
  using OutcomeType = Model::GetFindingsReportAccountSummaryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetFindingsReportAccountSummary(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeGuruProfiler
}  // namespace Aws
