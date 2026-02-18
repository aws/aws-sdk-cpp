/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeServiceClientModel.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsRequest.h>
#include <aws/bedrock-agent-runtime/model/ListFlowExecutionEventsResult.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Pagination {

template <typename Client = BedrockAgentRuntimeClient>
struct ListFlowExecutionEventsPaginationTraits {
  using RequestType = Model::ListFlowExecutionEventsRequest;
  using ResultType = Model::ListFlowExecutionEventsResult;
  using OutcomeType = Model::ListFlowExecutionEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFlowExecutionEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentRuntime
}  // namespace Aws
