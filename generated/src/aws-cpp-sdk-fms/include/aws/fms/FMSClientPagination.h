/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/fms/FMSClient.h>
#include <aws/fms/model/ListAdminAccountsForOrganizationPaginationTraits.h>
#include <aws/fms/model/ListAdminsManagingAccountPaginationTraits.h>
#include <aws/fms/model/ListAppsListsPaginationTraits.h>
#include <aws/fms/model/ListComplianceStatusPaginationTraits.h>
#include <aws/fms/model/ListMemberAccountsPaginationTraits.h>
#include <aws/fms/model/ListPoliciesPaginationTraits.h>
#include <aws/fms/model/ListProtocolsListsPaginationTraits.h>
#include <aws/fms/model/ListThirdPartyFirewallFirewallPoliciesPaginationTraits.h>

namespace Aws {
namespace FMS {

using ListAdminAccountsForOrganizationPaginator =
    Aws::Utils::Pagination::Paginator<FMSClient, Model::ListAdminAccountsForOrganizationRequest,
                                      Pagination::ListAdminAccountsForOrganizationPaginationTraits<FMSClient>>;
using ListAdminsManagingAccountPaginator =
    Aws::Utils::Pagination::Paginator<FMSClient, Model::ListAdminsManagingAccountRequest,
                                      Pagination::ListAdminsManagingAccountPaginationTraits<FMSClient>>;
using ListAppsListsPaginator =
    Aws::Utils::Pagination::Paginator<FMSClient, Model::ListAppsListsRequest, Pagination::ListAppsListsPaginationTraits<FMSClient>>;
using ListComplianceStatusPaginator = Aws::Utils::Pagination::Paginator<FMSClient, Model::ListComplianceStatusRequest,
                                                                        Pagination::ListComplianceStatusPaginationTraits<FMSClient>>;
using ListMemberAccountsPaginator = Aws::Utils::Pagination::Paginator<FMSClient, Model::ListMemberAccountsRequest,
                                                                      Pagination::ListMemberAccountsPaginationTraits<FMSClient>>;
using ListPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<FMSClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<FMSClient>>;
using ListProtocolsListsPaginator = Aws::Utils::Pagination::Paginator<FMSClient, Model::ListProtocolsListsRequest,
                                                                      Pagination::ListProtocolsListsPaginationTraits<FMSClient>>;
using ListThirdPartyFirewallFirewallPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<FMSClient, Model::ListThirdPartyFirewallFirewallPoliciesRequest,
                                      Pagination::ListThirdPartyFirewallFirewallPoliciesPaginationTraits<FMSClient>>;

}  // namespace FMS
}  // namespace Aws
