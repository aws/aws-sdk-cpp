/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace CognitoIdentityProvider {

class CognitoIdentityProviderClient;

template <typename DerivedClient>
class CognitoIdentityProviderPaginationBase {
 public:
  /**
   * Create a paginator for AdminListGroupsForUser operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::AdminListGroupsForUserRequest,
                                    Pagination::AdminListGroupsForUserPaginationTraits<DerivedClient>>
  AdminListGroupsForUserPaginator(const Model::AdminListGroupsForUserRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::AdminListGroupsForUserRequest,
                                             Pagination::AdminListGroupsForUserPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for AdminListUserAuthEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::AdminListUserAuthEventsRequest,
                                    Pagination::AdminListUserAuthEventsPaginationTraits<DerivedClient>>
  AdminListUserAuthEventsPaginator(const Model::AdminListUserAuthEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::AdminListUserAuthEventsRequest,
                                             Pagination::AdminListUserAuthEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListIdentityProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProvidersRequest,
                                    Pagination::ListIdentityProvidersPaginationTraits<DerivedClient>>
  ListIdentityProvidersPaginator(const Model::ListIdentityProvidersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIdentityProvidersRequest,
                                             Pagination::ListIdentityProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceServers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceServersRequest,
                                    Pagination::ListResourceServersPaginationTraits<DerivedClient>>
  ListResourceServersPaginator(const Model::ListResourceServersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceServersRequest,
                                             Pagination::ListResourceServersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserPoolClients operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserPoolClientsRequest,
                                    Pagination::ListUserPoolClientsPaginationTraits<DerivedClient>>
  ListUserPoolClientsPaginator(const Model::ListUserPoolClientsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserPoolClientsRequest,
                                             Pagination::ListUserPoolClientsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListUserPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserPoolsRequest, Pagination::ListUserPoolsPaginationTraits<DerivedClient>>
  ListUserPoolsPaginator(const Model::ListUserPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUserPoolsRequest,
                                             Pagination::ListUserPoolsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
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
   * Create a paginator for ListUsersInGroup operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersInGroupRequest,
                                    Pagination::ListUsersInGroupPaginationTraits<DerivedClient>>
  ListUsersInGroupPaginator(const Model::ListUsersInGroupRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersInGroupRequest,
                                             Pagination::ListUsersInGroupPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace CognitoIdentityProvider
}  // namespace Aws
