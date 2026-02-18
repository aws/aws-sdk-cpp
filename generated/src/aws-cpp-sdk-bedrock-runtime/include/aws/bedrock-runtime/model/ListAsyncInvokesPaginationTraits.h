/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntimeServiceClientModel.h>
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesRequest.h>
#include <aws/bedrock-runtime/model/ListAsyncInvokesResult.h>

namespace Aws {
namespace BedrockRuntime {
namespace Pagination {

template <typename Client = BedrockRuntimeClient>
struct ListAsyncInvokesPaginationTraits {
  using RequestType = Model::ListAsyncInvokesRequest;
  using ResultType = Model::ListAsyncInvokesResult;
  using OutcomeType = Model::ListAsyncInvokesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAsyncInvokes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BedrockRuntime
}  // namespace Aws
