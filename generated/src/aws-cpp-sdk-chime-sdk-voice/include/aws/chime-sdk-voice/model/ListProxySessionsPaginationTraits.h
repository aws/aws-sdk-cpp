/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoiceServiceClientModel.h>
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsRequest.h>
#include <aws/chime-sdk-voice/model/ListProxySessionsResult.h>

namespace Aws {
namespace ChimeSDKVoice {
namespace Pagination {

template <typename Client = ChimeSDKVoiceClient>
struct ListProxySessionsPaginationTraits {
  using RequestType = Model::ListProxySessionsRequest;
  using ResultType = Model::ListProxySessionsResult;
  using OutcomeType = Model::ListProxySessionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProxySessions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKVoice
}  // namespace Aws
