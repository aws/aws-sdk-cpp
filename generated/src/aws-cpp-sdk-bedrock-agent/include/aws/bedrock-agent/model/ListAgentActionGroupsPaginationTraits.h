/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ListAgentActionGroupsRequest.h>
#include <aws/bedrock-agent/model/ListAgentActionGroupsResult.h>

namespace Aws {
namespace BedrockAgent {
namespace Pagination {

template <typename Client = BedrockAgentClient>
struct ListAgentActionGroupsPaginationTraits {
  using RequestType = Model::ListAgentActionGroupsRequest;
  using ResultType = Model::ListAgentActionGroupsResult;
  using OutcomeType = Model::ListAgentActionGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAgentActionGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgent
}  // namespace Aws
