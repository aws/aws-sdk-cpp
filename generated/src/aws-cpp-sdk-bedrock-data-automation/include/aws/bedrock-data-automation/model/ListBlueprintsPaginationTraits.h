/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsRequest.h>
#include <aws/bedrock-data-automation/model/ListBlueprintsResult.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Pagination {

template <typename Client = BedrockDataAutomationClient>
struct ListBlueprintsPaginationTraits {
  using RequestType = Model::ListBlueprintsRequest;
  using ResultType = Model::ListBlueprintsResult;
  using OutcomeType = Model::ListBlueprintsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBlueprints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockDataAutomation
}  // namespace Aws
