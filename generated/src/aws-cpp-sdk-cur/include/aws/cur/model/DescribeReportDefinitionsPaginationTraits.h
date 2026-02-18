/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportServiceServiceClientModel.h>
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/cur/model/DescribeReportDefinitionsRequest.h>
#include <aws/cur/model/DescribeReportDefinitionsResult.h>

namespace Aws {
namespace CostandUsageReportService {
namespace Pagination {

template <typename Client = CostandUsageReportServiceClient>
struct DescribeReportDefinitionsPaginationTraits {
  using RequestType = Model::DescribeReportDefinitionsRequest;
  using ResultType = Model::DescribeReportDefinitionsResult;
  using OutcomeType = Model::DescribeReportDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeReportDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CostandUsageReportService
}  // namespace Aws
