/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationServiceClientModel.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryEntitiesRequest.h>
#include <aws/bedrock-data-automation/model/ListDataAutomationLibraryEntitiesResult.h>

namespace Aws {
namespace BedrockDataAutomation {
namespace Pagination {

template <typename Client = BedrockDataAutomationClient>
struct ListDataAutomationLibraryEntitiesPaginationTraits {
  using RequestType = Model::ListDataAutomationLibraryEntitiesRequest;
  using ResultType = Model::ListDataAutomationLibraryEntitiesResult;
  using OutcomeType = Model::ListDataAutomationLibraryEntitiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataAutomationLibraryEntities(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockDataAutomation
}  // namespace Aws
