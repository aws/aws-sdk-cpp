/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/cognito-idp/model/AdminListGroupsForUserPaginationTraits.h>
#include <aws/cognito-idp/model/AdminListUserAuthEventsPaginationTraits.h>
#include <aws/cognito-idp/model/ListGroupsPaginationTraits.h>
#include <aws/cognito-idp/model/ListIdentityProvidersPaginationTraits.h>
#include <aws/cognito-idp/model/ListResourceServersPaginationTraits.h>
#include <aws/cognito-idp/model/ListUserPoolClientsPaginationTraits.h>
#include <aws/cognito-idp/model/ListUserPoolsPaginationTraits.h>
#include <aws/cognito-idp/model/ListUsersInGroupPaginationTraits.h>
#include <aws/cognito-idp/model/ListUsersPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CognitoIdentityProvider {

using AdminListGroupsForUserPaginator =
    Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::AdminListGroupsForUserRequest,
                                      Pagination::AdminListGroupsForUserPaginationTraits<CognitoIdentityProviderClient>>;
using AdminListUserAuthEventsPaginator =
    Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::AdminListUserAuthEventsRequest,
                                      Pagination::AdminListUserAuthEventsPaginationTraits<CognitoIdentityProviderClient>>;
using ListGroupsPaginator = Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListGroupsRequest,
                                                              Pagination::ListGroupsPaginationTraits<CognitoIdentityProviderClient>>;
using ListIdentityProvidersPaginator =
    Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListIdentityProvidersRequest,
                                      Pagination::ListIdentityProvidersPaginationTraits<CognitoIdentityProviderClient>>;
using ListResourceServersPaginator =
    Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListResourceServersRequest,
                                      Pagination::ListResourceServersPaginationTraits<CognitoIdentityProviderClient>>;
using ListUserPoolClientsPaginator =
    Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListUserPoolClientsRequest,
                                      Pagination::ListUserPoolClientsPaginationTraits<CognitoIdentityProviderClient>>;
using ListUserPoolsPaginator = Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListUserPoolsRequest,
                                                                 Pagination::ListUserPoolsPaginationTraits<CognitoIdentityProviderClient>>;
using ListUsersPaginator = Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListUsersRequest,
                                                             Pagination::ListUsersPaginationTraits<CognitoIdentityProviderClient>>;
using ListUsersInGroupPaginator =
    Aws::Utils::Pagination::Paginator<CognitoIdentityProviderClient, Model::ListUsersInGroupRequest,
                                      Pagination::ListUsersInGroupPaginationTraits<CognitoIdentityProviderClient>>;

}  // namespace CognitoIdentityProvider
}  // namespace Aws
