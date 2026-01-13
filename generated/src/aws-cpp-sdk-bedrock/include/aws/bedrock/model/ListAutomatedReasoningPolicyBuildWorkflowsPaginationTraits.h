/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockServiceClientModel.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyBuildWorkflowsRequest.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyBuildWorkflowsResult.h>

namespace Aws {
namespace Bedrock {
namespace Pagination {

template <typename Client = BedrockClient>
struct ListAutomatedReasoningPolicyBuildWorkflowsPaginationTraits {
  using RequestType = Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest;
  using ResultType = Model::ListAutomatedReasoningPolicyBuildWorkflowsResult;
  using OutcomeType = Model::ListAutomatedReasoningPolicyBuildWorkflowsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListAutomatedReasoningPolicyBuildWorkflows(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Bedrock
}  // namespace Aws
