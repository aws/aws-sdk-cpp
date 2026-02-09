/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/detective/DetectiveClient.h>
#include <aws/detective/model/ListDatasourcePackagesPaginationTraits.h>
#include <aws/detective/model/ListGraphsPaginationTraits.h>
#include <aws/detective/model/ListInvitationsPaginationTraits.h>
#include <aws/detective/model/ListMembersPaginationTraits.h>
#include <aws/detective/model/ListOrganizationAdminAccountsPaginationTraits.h>

namespace Aws {
namespace Detective {

using ListDatasourcePackagesPaginator =
    Aws::Utils::Pagination::Paginator<DetectiveClient, Model::ListDatasourcePackagesRequest,
                                      Pagination::ListDatasourcePackagesPaginationTraits<DetectiveClient>>;
using ListGraphsPaginator =
    Aws::Utils::Pagination::Paginator<DetectiveClient, Model::ListGraphsRequest, Pagination::ListGraphsPaginationTraits<DetectiveClient>>;
using ListInvitationsPaginator = Aws::Utils::Pagination::Paginator<DetectiveClient, Model::ListInvitationsRequest,
                                                                   Pagination::ListInvitationsPaginationTraits<DetectiveClient>>;
using ListMembersPaginator =
    Aws::Utils::Pagination::Paginator<DetectiveClient, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<DetectiveClient>>;
using ListOrganizationAdminAccountsPaginator =
    Aws::Utils::Pagination::Paginator<DetectiveClient, Model::ListOrganizationAdminAccountsRequest,
                                      Pagination::ListOrganizationAdminAccountsPaginationTraits<DetectiveClient>>;

}  // namespace Detective
}  // namespace Aws
