/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessagingClient.h>
#include <aws/chime-sdk-messaging/model/ListChannelBansPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelFlowsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsForAppInstanceUserPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelMembershipsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelMessagesPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelModeratorsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelsAssociatedWithChannelFlowPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelsModeratedByAppInstanceUserPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListChannelsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/ListSubChannelsPaginationTraits.h>
#include <aws/chime-sdk-messaging/model/SearchChannelsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ChimeSDKMessaging {

using ListChannelBansPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelBansRequest,
                                                                   Pagination::ListChannelBansPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelFlowsPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelFlowsRequest,
                                                                    Pagination::ListChannelFlowsPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelMembershipsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelMembershipsRequest,
                                      Pagination::ListChannelMembershipsPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelMembershipsForAppInstanceUserPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelMembershipsForAppInstanceUserRequest,
                                      Pagination::ListChannelMembershipsForAppInstanceUserPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelMessagesPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelMessagesRequest,
                                      Pagination::ListChannelMessagesPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelModeratorsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelModeratorsRequest,
                                      Pagination::ListChannelModeratorsPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelsPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelsRequest,
                                                                Pagination::ListChannelsPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelsAssociatedWithChannelFlowPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelsAssociatedWithChannelFlowRequest,
                                      Pagination::ListChannelsAssociatedWithChannelFlowPaginationTraits<ChimeSDKMessagingClient>>;
using ListChannelsModeratedByAppInstanceUserPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListChannelsModeratedByAppInstanceUserRequest,
                                      Pagination::ListChannelsModeratedByAppInstanceUserPaginationTraits<ChimeSDKMessagingClient>>;
using ListSubChannelsPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::ListSubChannelsRequest,
                                                                   Pagination::ListSubChannelsPaginationTraits<ChimeSDKMessagingClient>>;
using SearchChannelsPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKMessagingClient, Model::SearchChannelsRequest,
                                                                  Pagination::SearchChannelsPaginationTraits<ChimeSDKMessagingClient>>;

}  // namespace ChimeSDKMessaging
}  // namespace Aws
