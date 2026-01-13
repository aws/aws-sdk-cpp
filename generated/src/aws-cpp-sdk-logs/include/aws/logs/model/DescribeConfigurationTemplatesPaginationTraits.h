/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogsServiceClientModel.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/DescribeConfigurationTemplatesRequest.h>
#include <aws/logs/model/DescribeConfigurationTemplatesResult.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Pagination {

template <typename Client = CloudWatchLogsClient>
struct DescribeConfigurationTemplatesPaginationTraits {
  using RequestType = Model::DescribeConfigurationTemplatesRequest;
  using ResultType = Model::DescribeConfigurationTemplatesResult;
  using OutcomeType = Model::DescribeConfigurationTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeConfigurationTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchLogs
}  // namespace Aws
