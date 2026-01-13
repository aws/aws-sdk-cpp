/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessagingServiceClientModel.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsRequest.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsResult.h>

namespace Aws {
namespace ChimeSDKMessaging {
namespace Pagination {

template <typename Client = ChimeSDKMessagingClient>
struct SearchChannelsPaginationTraits {
  using RequestType = Model::SearchChannelsRequest;
  using ResultType = Model::SearchChannelsResult;
  using OutcomeType = Model::SearchChannelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SearchChannels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKMessaging
}  // namespace Aws
