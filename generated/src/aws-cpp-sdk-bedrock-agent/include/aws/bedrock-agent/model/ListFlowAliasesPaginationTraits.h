/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ListFlowAliasesRequest.h>
#include <aws/bedrock-agent/model/ListFlowAliasesResult.h>

namespace Aws {
namespace BedrockAgent {
namespace Pagination {

template <typename Client = BedrockAgentClient>
struct ListFlowAliasesPaginationTraits {
  using RequestType = Model::ListFlowAliasesRequest;
  using ResultType = Model::ListFlowAliasesResult;
  using OutcomeType = Model::ListFlowAliasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFlowAliases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgent
}  // namespace Aws
