/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibrariesRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibrariesResult.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Pagination {

template <typename Client = BedrockDataAutomationClient>
struct ListDataAutomationLibrariesPaginationTraits {
  using RequestType = Model::ListDataAutomationLibrariesRequest;
  using ResultType = Model::ListDataAutomationLibrariesResult;
  using OutcomeType = Model::ListDataAutomationLibrariesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataAutomationLibraries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockDataAutomation
}  // namespace Aws
