/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationProjectsResult.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Pagination {

template <typename Client = BedrockDataAutomationClient>
struct ListDataAutomationProjectsPaginationTraits {
  using RequestType = Model::ListDataAutomationProjectsRequest;
  using ResultType = Model::ListDataAutomationProjectsResult;
  using OutcomeType = Model::ListDataAutomationProjectsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataAutomationProjects(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockDataAutomation
}  // namespace Aws
