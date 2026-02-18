/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/identitystore/IdentityStoreClient.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberPaginationTraits.h>
#include <aws/identitystore/model/ListGroupMembershipsPaginationTraits.h>
#include <aws/identitystore/model/ListGroupsPaginationTraits.h>
#include <aws/identitystore/model/ListUsersPaginationTraits.h>

namespace Aws {
namespace IdentityStore {

using ListGroupMembershipsPaginator =
    Aws::Utils::Pagination::Paginator<IdentityStoreClient, Model::ListGroupMembershipsRequest,
                                      Pagination::ListGroupMembershipsPaginationTraits<IdentityStoreClient>>;
using ListGroupMembershipsForMemberPaginator =
    Aws::Utils::Pagination::Paginator<IdentityStoreClient, Model::ListGroupMembershipsForMemberRequest,
                                      Pagination::ListGroupMembershipsForMemberPaginationTraits<IdentityStoreClient>>;
using ListGroupsPaginator = Aws::Utils::Pagination::Paginator<IdentityStoreClient, Model::ListGroupsRequest,
                                                              Pagination::ListGroupsPaginationTraits<IdentityStoreClient>>;
using ListUsersPaginator = Aws::Utils::Pagination::Paginator<IdentityStoreClient, Model::ListUsersRequest,
                                                             Pagination::ListUsersPaginationTraits<IdentityStoreClient>>;

}  // namespace IdentityStore
}  // namespace Aws
