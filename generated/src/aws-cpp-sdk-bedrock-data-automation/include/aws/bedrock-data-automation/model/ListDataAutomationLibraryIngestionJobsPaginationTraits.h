/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryIngestionJobsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryIngestionJobsResult.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Pagination {

template <typename Client = BedrockDataAutomationClient>
struct ListDataAutomationLibraryIngestionJobsPaginationTraits {
  using RequestType = Model::ListDataAutomationLibraryIngestionJobsRequest;
  using ResultType = Model::ListDataAutomationLibraryIngestionJobsResult;
  using OutcomeType = Model::ListDataAutomationLibraryIngestionJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataAutomationLibraryIngestionJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockDataAutomation
}  // namespace Aws
