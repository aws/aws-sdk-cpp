/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentityClient.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceBotsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersPaginationTraits.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ChimeSDKIdentity {

using ListAppInstanceAdminsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKIdentityClient, Model::ListAppInstanceAdminsRequest,
                                      Pagination::ListAppInstanceAdminsPaginationTraits<ChimeSDKIdentityClient>>;
using ListAppInstanceBotsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKIdentityClient, Model::ListAppInstanceBotsRequest,
                                      Pagination::ListAppInstanceBotsPaginationTraits<ChimeSDKIdentityClient>>;
using ListAppInstancesPaginator = Aws::Utils::Pagination::Paginator<ChimeSDKIdentityClient, Model::ListAppInstancesRequest,
                                                                    Pagination::ListAppInstancesPaginationTraits<ChimeSDKIdentityClient>>;
using ListAppInstanceUserEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKIdentityClient, Model::ListAppInstanceUserEndpointsRequest,
                                      Pagination::ListAppInstanceUserEndpointsPaginationTraits<ChimeSDKIdentityClient>>;
using ListAppInstanceUsersPaginator =
    Aws::Utils::Pagination::Paginator<ChimeSDKIdentityClient, Model::ListAppInstanceUsersRequest,
                                      Pagination::ListAppInstanceUsersPaginationTraits<ChimeSDKIdentityClient>>;

}  // namespace ChimeSDKIdentity
}  // namespace Aws
