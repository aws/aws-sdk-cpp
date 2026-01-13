/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentServiceClientModel.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/ListDataSourcesRequest.h>
#include <aws/bedrock-agent/model/ListDataSourcesResult.h>

namespace Aws {
namespace BedrockAgent {
namespace Pagination {

template <typename Client = BedrockAgentClient>
struct ListDataSourcesPaginationTraits {
  using RequestType = Model::ListDataSourcesRequest;
  using ResultType = Model::ListDataSourcesResult;
  using OutcomeType = Model::ListDataSourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataSources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgent
}  // namespace Aws
