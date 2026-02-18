/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/chime/model/ListAccountsPaginationTraits.h>
#include <aws/chime/model/ListBotsPaginationTraits.h>
#include <aws/chime/model/ListPhoneNumberOrdersPaginationTraits.h>
#include <aws/chime/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/chime/model/ListRoomMembershipsPaginationTraits.h>
#include <aws/chime/model/ListRoomsPaginationTraits.h>
#include <aws/chime/model/ListUsersPaginationTraits.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Chime {

class ChimeClient;

template <typename DerivedClient>
class ChimePaginationBase {
 public:
  /**
   * Create a paginator for ListAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<DerivedClient>>
  ListAccountsPaginator(const Model::ListAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsRequest,
                                             Pagination::ListAccountsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListBots operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>
  ListBotsPaginator(const Model::ListBotsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPhoneNumberOrders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumberOrdersRequest,
                                    Pagination::ListPhoneNumberOrdersPaginationTraits<DerivedClient>>
  ListPhoneNumberOrdersPaginator(const Model::ListPhoneNumberOrdersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumberOrdersRequest,
                                             Pagination::ListPhoneNumberOrdersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersRequest,
                                    Pagination::ListPhoneNumbersPaginationTraits<DerivedClient>>
  ListPhoneNumbersPaginator(const Model::ListPhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersRequest,
                                             Pagination::ListPhoneNumbersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListRoomMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoomMembershipsRequest,
                                    Pagination::ListRoomMembershipsPaginationTraits<DerivedClient>>
  ListRoomMembershipsPaginator(const Model::ListRoomMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoomMembershipsRequest,
                                             Pagination::ListRoomMembershipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRooms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoomsRequest, Pagination::ListRoomsPaginationTraits<DerivedClient>>
  ListRoomsPaginator(const Model::ListRoomsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRoomsRequest, Pagination::ListRoomsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchAvailablePhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAvailablePhoneNumbersRequest,
                                    Pagination::SearchAvailablePhoneNumbersPaginationTraits<DerivedClient>>
  SearchAvailablePhoneNumbersPaginator(const Model::SearchAvailablePhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAvailablePhoneNumbersRequest,
                                             Pagination::SearchAvailablePhoneNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Chime
}  // namespace Aws
