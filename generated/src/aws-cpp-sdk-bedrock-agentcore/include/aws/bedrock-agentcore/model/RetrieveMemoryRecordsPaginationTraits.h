/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreServiceClientModel.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsRequest.h>
#include <aws/bedrock-agentcore/model/RetrieveMemoryRecordsResult.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Pagination {

template <typename Client = BedrockAgentCoreClient>
struct RetrieveMemoryRecordsPaginationTraits {
  using RequestType = Model::RetrieveMemoryRecordsRequest;
  using ResultType = Model::RetrieveMemoryRecordsResult;
  using OutcomeType = Model::RetrieveMemoryRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->RetrieveMemoryRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockAgentCore
}  // namespace Aws
