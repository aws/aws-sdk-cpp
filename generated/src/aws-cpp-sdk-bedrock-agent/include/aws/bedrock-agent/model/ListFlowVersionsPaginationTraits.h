/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ListFlowVersionsRequest.h>
#include <aws/bedrock-agent/model/ListFlowVersionsResult.h>

namespace Aws {
namespace BedrockAgent {
namespace Pagination {

template <typename Client = BedrockAgentClient>
struct ListFlowVersionsPaginationTraits {
  using RequestType = Model::ListFlowVersionsRequest;
  using ResultType = Model::ListFlowVersionsResult;
  using OutcomeType = Model::ListFlowVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFlowVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgent
}  // namespace Aws
