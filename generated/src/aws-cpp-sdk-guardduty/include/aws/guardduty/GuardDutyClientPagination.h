/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/guardduty/GuardDutyClient.h>
#include <aws/guardduty/model/DescribeMalwareScansPaginationTraits.h>
#include <aws/guardduty/model/DescribeOrganizationConfigurationPaginationTraits.h>
#include <aws/guardduty/model/GetUsageStatisticsPaginationTraits.h>
#include <aws/guardduty/model/ListCoveragePaginationTraits.h>
#include <aws/guardduty/model/ListDetectorsPaginationTraits.h>
#include <aws/guardduty/model/ListFiltersPaginationTraits.h>
#include <aws/guardduty/model/ListFindingsPaginationTraits.h>
#include <aws/guardduty/model/ListIPSetsPaginationTraits.h>
#include <aws/guardduty/model/ListInvitationsPaginationTraits.h>
#include <aws/guardduty/model/ListMalwareScansPaginationTraits.h>
#include <aws/guardduty/model/ListMembersPaginationTraits.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/guardduty/model/ListPublishingDestinationsPaginationTraits.h>
#include <aws/guardduty/model/ListThreatEntitySetsPaginationTraits.h>
#include <aws/guardduty/model/ListThreatIntelSetsPaginationTraits.h>
#include <aws/guardduty/model/ListTrustedEntitySetsPaginationTraits.h>

namespace Aws {
namespace GuardDuty {

using DescribeMalwareScansPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::DescribeMalwareScansRequest,
                                                                        Pagination::DescribeMalwareScansPaginationTraits<GuardDutyClient>>;
using DescribeOrganizationConfigurationPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::DescribeOrganizationConfigurationRequest,
                                      Pagination::DescribeOrganizationConfigurationPaginationTraits<GuardDutyClient>>;
using GetUsageStatisticsPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::GetUsageStatisticsRequest,
                                                                      Pagination::GetUsageStatisticsPaginationTraits<GuardDutyClient>>;
using ListCoveragePaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListCoverageRequest,
                                                                Pagination::ListCoveragePaginationTraits<GuardDutyClient>>;
using ListDetectorsPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListDetectorsRequest,
                                                                 Pagination::ListDetectorsPaginationTraits<GuardDutyClient>>;
using ListFiltersPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListFiltersRequest, Pagination::ListFiltersPaginationTraits<GuardDutyClient>>;
using ListFindingsPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListFindingsRequest,
                                                                Pagination::ListFindingsPaginationTraits<GuardDutyClient>>;
using ListInvitationsPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListInvitationsRequest,
                                                                   Pagination::ListInvitationsPaginationTraits<GuardDutyClient>>;
using ListIPSetsPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListIPSetsRequest, Pagination::ListIPSetsPaginationTraits<GuardDutyClient>>;
using ListMalwareScansPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListMalwareScansRequest,
                                                                    Pagination::ListMalwareScansPaginationTraits<GuardDutyClient>>;
using ListMembersPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListMembersRequest, Pagination::ListMembersPaginationTraits<GuardDutyClient>>;
using ListOrganizationAdminAccountsPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListOrganizationAdminAccountsRequest,
                                      Pagination::ListOrganizationAdminAccountsPaginationTraits<GuardDutyClient>>;
using ListPublishingDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListPublishingDestinationsRequest,
                                      Pagination::ListPublishingDestinationsPaginationTraits<GuardDutyClient>>;
using ListThreatEntitySetsPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListThreatEntitySetsRequest,
                                                                        Pagination::ListThreatEntitySetsPaginationTraits<GuardDutyClient>>;
using ListThreatIntelSetsPaginator = Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListThreatIntelSetsRequest,
                                                                       Pagination::ListThreatIntelSetsPaginationTraits<GuardDutyClient>>;
using ListTrustedEntitySetsPaginator =
    Aws::Utils::Pagination::Paginator<GuardDutyClient, Model::ListTrustedEntitySetsRequest,
                                      Pagination::ListTrustedEntitySetsPaginationTraits<GuardDutyClient>>;

}  // namespace GuardDuty
}  // namespace Aws
