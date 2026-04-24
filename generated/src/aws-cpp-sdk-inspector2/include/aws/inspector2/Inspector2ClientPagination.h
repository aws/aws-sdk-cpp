/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/inspector2/Inspector2Client.h>
#include <aws/inspector2/model/GetCisScanResultDetailsPaginationTraits.h>
#include <aws/inspector2/model/GetClustersForImagePaginationTraits.h>
#include <aws/inspector2/model/ListAccountPermissionsPaginationTraits.h>
#include <aws/inspector2/model/ListCisScanConfigurationsPaginationTraits.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByChecksPaginationTraits.h>
#include <aws/inspector2/model/ListCisScanResultsAggregatedByTargetResourcePaginationTraits.h>
#include <aws/inspector2/model/ListCisScansPaginationTraits.h>
#include <aws/inspector2/model/ListCoveragePaginationTraits.h>
#include <aws/inspector2/model/ListCoverageStatisticsPaginationTraits.h>
#include <aws/inspector2/model/ListDelegatedAdminAccountsPaginationTraits.h>
#include <aws/inspector2/model/ListFiltersPaginationTraits.h>
#include <aws/inspector2/model/ListFindingAggregationsPaginationTraits.h>
#include <aws/inspector2/model/ListFindingsPaginationTraits.h>
#include <aws/inspector2/model/ListMembersPaginationTraits.h>
#include <aws/inspector2/model/ListUsageTotalsPaginationTraits.h>
#include <aws/inspector2/model/SearchVulnerabilitiesPaginationTraits.h>

namespace Aws {
namespace Inspector2 {

using GetCisScanResultDetailsPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::GetCisScanResultDetailsRequest,
                                      Pagination::GetCisScanResultDetailsPaginationTraits<Inspector2Client>>;
using GetClustersForImagePaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::GetClustersForImageRequest,
                                                                       Pagination::GetClustersForImagePaginationTraits<Inspector2Client>>;
using ListAccountPermissionsPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListAccountPermissionsRequest,
                                      Pagination::ListAccountPermissionsPaginationTraits<Inspector2Client>>;
using ListCisScanConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListCisScanConfigurationsRequest,
                                      Pagination::ListCisScanConfigurationsPaginationTraits<Inspector2Client>>;
using ListCisScanResultsAggregatedByChecksPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListCisScanResultsAggregatedByChecksRequest,
                                      Pagination::ListCisScanResultsAggregatedByChecksPaginationTraits<Inspector2Client>>;
using ListCisScanResultsAggregatedByTargetResourcePaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListCisScanResultsAggregatedByTargetResourceRequest,
                                      Pagination::ListCisScanResultsAggregatedByTargetResourcePaginationTraits<Inspector2Client>>;
using ListCisScansPaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListCisScansRequest,
                                                                Pagination::ListCisScansPaginationTraits<Inspector2Client>>;
using ListCoveragePaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListCoverageRequest,
                                                                Pagination::ListCoveragePaginationTraits<Inspector2Client>>;
using ListCoverageStatisticsPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListCoverageStatisticsRequest,
                                      Pagination::ListCoverageStatisticsPaginationTraits<Inspector2Client>>;
using ListDelegatedAdminAccountsPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListDelegatedAdminAccountsRequest,
                                      Pagination::ListDelegatedAdminAccountsPaginationTraits<Inspector2Client>>;
using ListFiltersPaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListFiltersRequest,
                                                               Pagination::ListFiltersPaginationTraits<Inspector2Client>>;
using ListFindingAggregationsPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListFindingAggregationsRequest,
                                      Pagination::ListFindingAggregationsPaginationTraits<Inspector2Client>>;
using ListFindingsPaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListFindingsRequest,
                                                                Pagination::ListFindingsPaginationTraits<Inspector2Client>>;
using ListMembersPaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListMembersRequest,
                                                               Pagination::ListMembersPaginationTraits<Inspector2Client>>;
using ListUsageTotalsPaginator = Aws::Utils::Pagination::Paginator<Inspector2Client, Model::ListUsageTotalsRequest,
                                                                   Pagination::ListUsageTotalsPaginationTraits<Inspector2Client>>;
using SearchVulnerabilitiesPaginator =
    Aws::Utils::Pagination::Paginator<Inspector2Client, Model::SearchVulnerabilitiesRequest,
                                      Pagination::SearchVulnerabilitiesPaginationTraits<Inspector2Client>>;

}  // namespace Inspector2
}  // namespace Aws
