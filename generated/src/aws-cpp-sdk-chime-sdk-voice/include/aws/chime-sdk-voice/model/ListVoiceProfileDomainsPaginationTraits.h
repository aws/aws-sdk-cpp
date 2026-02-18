/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoiceServiceClientModel.h>
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfileDomainsRequest.h>
#include <aws/chime-sdk-voice/model/ListVoiceProfileDomainsResult.h>

namespace Aws {
namespace ChimeSDKVoice {
namespace Pagination {

template <typename Client = ChimeSDKVoiceClient>
struct ListVoiceProfileDomainsPaginationTraits {
  using RequestType = Model::ListVoiceProfileDomainsRequest;
  using ResultType = Model::ListVoiceProfileDomainsResult;
  using OutcomeType = Model::ListVoiceProfileDomainsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVoiceProfileDomains(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKVoice
}  // namespace Aws
