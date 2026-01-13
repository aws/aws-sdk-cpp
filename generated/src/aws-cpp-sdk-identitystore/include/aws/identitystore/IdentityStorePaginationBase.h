/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberPaginationTraits.h>
#include <aws/identitystore/model/ListGroupMembershipsPaginationTraits.h>
#include <aws/identitystore/model/ListGroupsPaginationTraits.h>
#include <aws/identitystore/model/ListUsersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IdentityStore {

class IdentityStoreClient;

template <typename DerivedClient>
class IdentityStorePaginationBase {
 public:
  /**
   * Create a paginator for ListGroupMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembershipsRequest,
                                    Pagination::ListGroupMembershipsPaginationTraits<DerivedClient>>
  ListGroupMembershipsPaginator(const Model::ListGroupMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembershipsRequest,
                                             Pagination::ListGroupMembershipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupMembershipsForMember operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembershipsForMemberRequest,
                                    Pagination::ListGroupMembershipsForMemberPaginationTraits<DerivedClient>>
  ListGroupMembershipsForMemberPaginator(const Model::ListGroupMembershipsForMemberRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembershipsForMemberRequest,
                                             Pagination::ListGroupMembershipsForMemberPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>
  ListUsersPaginator(const Model::ListUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsersRequest, Pagination::ListUsersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IdentityStore
}  // namespace Aws
