/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeServiceClientModel.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionsResult.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Pagination {

template <typename Client = BedrockAgentRuntimeClient>
struct ListFlowExecutionsPaginationTraits {
  using RequestType = Model::ListFlowExecutionsRequest;
  using ResultType = Model::ListFlowExecutionsResult;
  using OutcomeType = Model::ListFlowExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFlowExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentRuntime
}  // namespace Aws
