/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/directory-service-data/DirectoryServiceDataClient.h>
#include <aws/directory-service-data/model/ListGroupMembersPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupsForMemberPaginationTraits.h>
#include <aws/directory-service-data/model/ListGroupsPaginationTraits.h>
#include <aws/directory-service-data/model/ListUsersPaginationTraits.h>
#include <aws/directory-service-data/model/SearchGroupsPaginationTraits.h>
#include <aws/directory-service-data/model/SearchUsersPaginationTraits.h>

namespace Aws {
namespace DirectoryServiceData {

using ListGroupMembersPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceDataClient, Model::ListGroupMembersRequest,
                                      Pagination::ListGroupMembersPaginationTraits<DirectoryServiceDataClient>>;
using ListGroupsPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceDataClient, Model::ListGroupsRequest,
                                                              Pagination::ListGroupsPaginationTraits<DirectoryServiceDataClient>>;
using ListGroupsForMemberPaginator =
    Aws::Utils::Pagination::Paginator<DirectoryServiceDataClient, Model::ListGroupsForMemberRequest,
                                      Pagination::ListGroupsForMemberPaginationTraits<DirectoryServiceDataClient>>;
using ListUsersPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceDataClient, Model::ListUsersRequest,
                                                             Pagination::ListUsersPaginationTraits<DirectoryServiceDataClient>>;
using SearchGroupsPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceDataClient, Model::SearchGroupsRequest,
                                                                Pagination::SearchGroupsPaginationTraits<DirectoryServiceDataClient>>;
using SearchUsersPaginator = Aws::Utils::Pagination::Paginator<DirectoryServiceDataClient, Model::SearchUsersRequest,
                                                               Pagination::SearchUsersPaginationTraits<DirectoryServiceDataClient>>;

}  // namespace DirectoryServiceData
}  // namespace Aws
