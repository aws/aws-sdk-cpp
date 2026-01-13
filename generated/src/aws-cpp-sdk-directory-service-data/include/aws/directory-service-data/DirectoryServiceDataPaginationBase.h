/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/directory-service-data/model/ListGroupMembersPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupsForMemberPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupsPaginationTraits.h>
#include <aws/directory-service-data/model/ListUsersPaginationTraits.h>
#include <aws/directory-service-data/model/SearchGroupsPaginationTraits.h>
#include <aws/directory-service-data/model/SearchUsersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DirectoryServiceData {

class DirectoryServiceDataClient;

template <typename DerivedClient>
class DirectoryServiceDataPaginationBase {
 public:
  /**
   * Create a paginator for ListGroupMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembersRequest,
                                    Pagination::ListGroupMembersPaginationTraits<DerivedClient>>
  ListGroupMembersPaginator(const Model::ListGroupMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupMembersRequest,
                                             Pagination::ListGroupMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
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
   * Create a paginator for ListGroupsForMember operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsForMemberRequest,
                                    Pagination::ListGroupsForMemberPaginationTraits<DerivedClient>>
  ListGroupsForMemberPaginator(const Model::ListGroupsForMemberRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsForMemberRequest,
                                             Pagination::ListGroupsForMemberPaginationTraits<DerivedClient>>{
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
   * Create a paginator for SearchGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGroupsRequest, Pagination::SearchGroupsPaginationTraits<DerivedClient>>
  SearchGroupsPaginator(const Model::SearchGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGroupsRequest,
                                             Pagination::SearchGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for SearchUsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUsersRequest, Pagination::SearchUsersPaginationTraits<DerivedClient>>
  SearchUsersPaginator(const Model::SearchUsersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUsersRequest,
                                             Pagination::SearchUsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace DirectoryServiceData
}  // namespace Aws
