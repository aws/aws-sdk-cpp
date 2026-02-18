/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreServiceClientModel.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/ListMemoryRecordsResult.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Pagination {

template <typename Client = BedrockAgentCoreClient>
struct ListMemoryRecordsPaginationTraits {
  using RequestType = Model::ListMemoryRecordsRequest;
  using ResultType = Model::ListMemoryRecordsResult;
  using OutcomeType = Model::ListMemoryRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMemoryRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentCore
}  // namespace Aws
