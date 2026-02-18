/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/fms/model/ListAdminAccountsForOrganizationPaginationTraits.h>
#include <aws/fms/model/ListAdminsManagingAccountPaginationTraits.h>
#include <aws/fms/model/ListAppsListsPaginationTraits.h>
#include <aws/fms/model/ListComplianceStatusPaginationTraits.h>
#include <aws/fms/model/ListMemberAccountsPaginationTraits.h>
#include <aws/fms/model/ListPoliciesPaginationTraits.h>
#include <aws/fms/model/ListProtocolsListsPaginationTraits.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace FMS {

class FMSClient;

template <typename DerivedClient>
class FMSPaginationBase {
 public:
  /**
   * Create a paginator for ListAdminAccountsForOrganization operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdminAccountsForOrganizationRequest,
                                    Pagination::ListAdminAccountsForOrganizationPaginationTraits<DerivedClient>>
  ListAdminAccountsForOrganizationPaginator(const Model::ListAdminAccountsForOrganizationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdminAccountsForOrganizationRequest,
                                             Pagination::ListAdminAccountsForOrganizationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAdminsManagingAccount operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdminsManagingAccountRequest,
                                    Pagination::ListAdminsManagingAccountPaginationTraits<DerivedClient>>
  ListAdminsManagingAccountPaginator(const Model::ListAdminsManagingAccountRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdminsManagingAccountRequest,
                                             Pagination::ListAdminsManagingAccountPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAppsLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsListsRequest, Pagination::ListAppsListsPaginationTraits<DerivedClient>>
  ListAppsListsPaginator(const Model::ListAppsListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAppsListsRequest,
                                             Pagination::ListAppsListsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListComplianceStatus operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComplianceStatusRequest,
                                    Pagination::ListComplianceStatusPaginationTraits<DerivedClient>>
  ListComplianceStatusPaginator(const Model::ListComplianceStatusRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComplianceStatusRequest,
                                             Pagination::ListComplianceStatusPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMemberAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemberAccountsRequest,
                                    Pagination::ListMemberAccountsPaginationTraits<DerivedClient>>
  ListMemberAccountsPaginator(const Model::ListMemberAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemberAccountsRequest,
                                             Pagination::ListMemberAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListProtocolsLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtocolsListsRequest,
                                    Pagination::ListProtocolsListsPaginationTraits<DerivedClient>>
  ListProtocolsListsPaginator(const Model::ListProtocolsListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProtocolsListsRequest,
                                             Pagination::ListProtocolsListsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThirdPartyFirewallFirewallPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThirdPartyFirewallFirewallPoliciesRequest,
                                    Pagination::ListThirdPartyFirewallFirewallPoliciesPaginationTraits<DerivedClient>>
  ListThirdPartyFirewallFirewallPoliciesPaginator(const Model::ListThirdPartyFirewallFirewallPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThirdPartyFirewallFirewallPoliciesRequest,
                                             Pagination::ListThirdPartyFirewallFirewallPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace FMS
}  // namespace Aws
