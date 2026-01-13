/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/detective/model/ListDatasourcePackagesPaginationTraits.h>
#include <aws/detective/model/ListGraphsPaginationTraits.h>
#include <aws/detective/model/ListInvitationsPaginationTraits.h>
#include <aws/detective/model/ListMembersPaginationTraits.h>
#include <aws/detective/model/ListOrganizationAdminAccountsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Detective {

class DetectiveClient;

template <typename DerivedClient>
class DetectivePaginationBase {
 public:
  /**
   * Create a paginator for ListDatasourcePackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasourcePackagesRequest,
                                    Pagination::ListDatasourcePackagesPaginationTraits<DerivedClient>>
  ListDatasourcePackagesPaginator(const Model::ListDatasourcePackagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatasourcePackagesRequest,
                                             Pagination::ListDatasourcePackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGraphs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphsRequest, Pagination::ListGraphsPaginationTraits<DerivedClient>>
  ListGraphsPaginator(const Model::ListGraphsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGraphsRequest,
                                             Pagination::ListGraphsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListInvitations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvitationsRequest,
                                    Pagination::ListInvitationsPaginationTraits<DerivedClient>>
  ListInvitationsPaginator(const Model::ListInvitationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInvitationsRequest,
                                             Pagination::ListInvitationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListMembers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<DerivedClient>>
  ListMembersPaginator(const Model::ListMembersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMembersRequest,
                                             Pagination::ListMembersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListOrganizationAdminAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationAdminAccountsRequest,
                                    Pagination::ListOrganizationAdminAccountsPaginationTraits<DerivedClient>>
  ListOrganizationAdminAccountsPaginator(const Model::ListOrganizationAdminAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationAdminAccountsRequest,
                                             Pagination::ListOrganizationAdminAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Detective
}  // namespace Aws
