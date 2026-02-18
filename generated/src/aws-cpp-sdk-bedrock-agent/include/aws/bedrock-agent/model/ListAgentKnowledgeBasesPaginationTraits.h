/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesRequest.h>
#include <aws/bedrock-agent/model/ListAgentKnowledgeBasesResult.h>

namespace Aws {
namespace BedrockAgent {
namespace Pagination {

template <typename Client = BedrockAgentClient>
struct ListAgentKnowledgeBasesPaginationTraits {
  using RequestType = Model::ListAgentKnowledgeBasesRequest;
  using ResultType = Model::ListAgentKnowledgeBasesResult;
  using OutcomeType = Model::ListAgentKnowledgeBasesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAgentKnowledgeBases(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgent
}  // namespace Aws
