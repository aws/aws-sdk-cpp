/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlServiceClientModel.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersResult.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Pagination {

template <typename Client = BedrockAgentCoreControlClient>
struct ListApiKeyCredentialProvidersPaginationTraits {
  using RequestType = Model::ListApiKeyCredentialProvidersRequest;
  using ResultType = Model::ListApiKeyCredentialProvidersResult;
  using OutcomeType = Model::ListApiKeyCredentialProvidersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApiKeyCredentialProviders(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
