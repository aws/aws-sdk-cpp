/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessagingServiceClientModel.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowRequest.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowResult.h>

namespace Aws {
namespace ChimeSDKMessaging {
namespace Pagination {

template <typename Client = ChimeSDKMessagingClient>
struct ListChannelsAssociatedWithChannelFlowPaginationTraits {
  using RequestType = Model::ListChannelsAssociatedWithChannelFlowRequest;
  using ResultType = Model::ListChannelsAssociatedWithChannelFlowResult;
  using OutcomeType = Model::ListChannelsAssociatedWithChannelFlowOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListChannelsAssociatedWithChannelFlow(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKMessaging
}  // namespace Aws
