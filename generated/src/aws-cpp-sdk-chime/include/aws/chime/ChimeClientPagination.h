/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/ChimeClient.h>
#include <aws/chime/model/ListAccountsPaginationTraits.h>
#include <aws/chime/model/ListBotsPaginationTraits.h>
#include <aws/chime/model/ListPhoneNumberOrdersPaginationTraits.h>
#include <aws/chime/model/ListPhoneNumbersPaginationTraits.h>
#include <aws/chime/model/ListRoomMembershipsPaginationTraits.h>
#include <aws/chime/model/ListRoomsPaginationTraits.h>
#include <aws/chime/model/ListUsersPaginationTraits.h>
#include <aws/chime/model/SearchAvailablePhoneNumbersPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Chime {

using ListAccountsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListAccountsRequest, Pagination::ListAccountsPaginationTraits<ChimeClient>>;
using ListBotsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListBotsRequest, Pagination::ListBotsPaginationTraits<ChimeClient>>;
using ListPhoneNumberOrdersPaginator = Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListPhoneNumberOrdersRequest,
                                                                         Pagination::ListPhoneNumberOrdersPaginationTraits<ChimeClient>>;
using ListPhoneNumbersPaginator = Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListPhoneNumbersRequest,
                                                                    Pagination::ListPhoneNumbersPaginationTraits<ChimeClient>>;
using ListRoomMembershipsPaginator = Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListRoomMembershipsRequest,
                                                                       Pagination::ListRoomMembershipsPaginationTraits<ChimeClient>>;
using ListRoomsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListRoomsRequest, Pagination::ListRoomsPaginationTraits<ChimeClient>>;
using ListUsersPaginator =
    Aws::Utils::Pagination::Paginator<ChimeClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<ChimeClient>>;
using SearchAvailablePhoneNumbersPaginator =
    Aws::Utils::Pagination::Paginator<ChimeClient, Model::SearchAvailablePhoneNumbersRequest,
                                      Pagination::SearchAvailablePhoneNumbersPaginationTraits<ChimeClient>>;

}  // namespace Chime
}  // namespace Aws
