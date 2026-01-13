/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlServiceClientModel.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesResult.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Pagination {

template <typename Client = BedrockAgentCoreControlClient>
struct ListPolicyEnginesPaginationTraits {
  using RequestType = Model::ListPolicyEnginesRequest;
  using ResultType = Model::ListPolicyEnginesResult;
  using OutcomeType = Model::ListPolicyEnginesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPolicyEngines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
