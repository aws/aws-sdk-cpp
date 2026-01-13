/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfilerServiceClientModel.h>
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsRequest.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsResult.h>

namespace Aws {
namespace ApplicationCostProfiler {
namespace Pagination {

template <typename Client = ApplicationCostProfilerClient>
struct ListReportDefinitionsPaginationTraits {
  using RequestType = Model::ListReportDefinitionsRequest;
  using ResultType = Model::ListReportDefinitionsResult;
  using OutcomeType = Model::ListReportDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReportDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ApplicationCostProfiler
}  // namespace Aws
