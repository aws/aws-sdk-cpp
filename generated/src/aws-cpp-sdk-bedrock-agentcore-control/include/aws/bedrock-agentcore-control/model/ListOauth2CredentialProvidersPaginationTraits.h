/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlServiceClientModel.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersResult.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Pagination {

template <typename Client = BedrockAgentCoreControlClient>
struct ListOauth2CredentialProvidersPaginationTraits {
  using RequestType = Model::ListOauth2CredentialProvidersRequest;
  using ResultType = Model::ListOauth2CredentialProvidersResult;
  using OutcomeType = Model::ListOauth2CredentialProvidersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOauth2CredentialProviders(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
