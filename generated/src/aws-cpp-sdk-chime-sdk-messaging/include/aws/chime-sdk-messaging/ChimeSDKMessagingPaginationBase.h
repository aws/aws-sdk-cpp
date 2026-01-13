/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace ChimeSDKMessaging {

class ChimeSDKMessagingClient;

template <typename DerivedClient>
class ChimeSDKMessagingPaginationBase {
 public:
  /**
   * Create a paginator for ListChannelBans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelBansRequest,
                                    Pagination::ListChannelBansPaginationTraits<DerivedClient>>
  ListChannelBansPaginator(const Model::ListChannelBansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelBansRequest,
                                             Pagination::ListChannelBansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListChannelFlows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelFlowsRequest,
                                    Pagination::ListChannelFlowsPaginationTraits<DerivedClient>>
  ListChannelFlowsPaginator(const Model::ListChannelFlowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelFlowsRequest,
                                             Pagination::ListChannelFlowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListChannelMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelMembershipsRequest,
                                    Pagination::ListChannelMembershipsPaginationTraits<DerivedClient>>
  ListChannelMembershipsPaginator(const Model::ListChannelMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelMembershipsRequest,
                                             Pagination::ListChannelMembershipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannelMembershipsForAppInstanceUser operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelMembershipsForAppInstanceUserRequest,
                                    Pagination::ListChannelMembershipsForAppInstanceUserPaginationTraits<DerivedClient>>
  ListChannelMembershipsForAppInstanceUserPaginator(const Model::ListChannelMembershipsForAppInstanceUserRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelMembershipsForAppInstanceUserRequest,
                                             Pagination::ListChannelMembershipsForAppInstanceUserPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannelMessages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelMessagesRequest,
                                    Pagination::ListChannelMessagesPaginationTraits<DerivedClient>>
  ListChannelMessagesPaginator(const Model::ListChannelMessagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelMessagesRequest,
                                             Pagination::ListChannelMessagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannelModerators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelModeratorsRequest,
                                    Pagination::ListChannelModeratorsPaginationTraits<DerivedClient>>
  ListChannelModeratorsPaginator(const Model::ListChannelModeratorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelModeratorsRequest,
                                             Pagination::ListChannelModeratorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest, Pagination::ListChannelsPaginationTraits<DerivedClient>>
  ListChannelsPaginator(const Model::ListChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsRequest,
                                             Pagination::ListChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListChannelsAssociatedWithChannelFlow operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsAssociatedWithChannelFlowRequest,
                                    Pagination::ListChannelsAssociatedWithChannelFlowPaginationTraits<DerivedClient>>
  ListChannelsAssociatedWithChannelFlowPaginator(const Model::ListChannelsAssociatedWithChannelFlowRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsAssociatedWithChannelFlowRequest,
                                             Pagination::ListChannelsAssociatedWithChannelFlowPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListChannelsModeratedByAppInstanceUser operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsModeratedByAppInstanceUserRequest,
                                    Pagination::ListChannelsModeratedByAppInstanceUserPaginationTraits<DerivedClient>>
  ListChannelsModeratedByAppInstanceUserPaginator(const Model::ListChannelsModeratedByAppInstanceUserRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListChannelsModeratedByAppInstanceUserRequest,
                                             Pagination::ListChannelsModeratedByAppInstanceUserPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubChannelsRequest,
                                    Pagination::ListSubChannelsPaginationTraits<DerivedClient>>
  ListSubChannelsPaginator(const Model::ListSubChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubChannelsRequest,
                                             Pagination::ListSubChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for SearchChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchChannelsRequest, Pagination::SearchChannelsPaginationTraits<DerivedClient>>
  SearchChannelsPaginator(const Model::SearchChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchChannelsRequest,
                                             Pagination::SearchChannelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }
};
}  // namespace ChimeSDKMessaging
}  // namespace Aws
