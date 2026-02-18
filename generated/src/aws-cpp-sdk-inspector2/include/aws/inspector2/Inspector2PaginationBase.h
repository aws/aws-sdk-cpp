/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace Inspector2 {

class Inspector2Client;

template <typename DerivedClient>
class Inspector2PaginationBase {
 public:
  /**
   * Create a paginator for GetCisScanResultDetails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCisScanResultDetailsRequest,
                                    Pagination::GetCisScanResultDetailsPaginationTraits<DerivedClient>>
  GetCisScanResultDetailsPaginator(const Model::GetCisScanResultDetailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCisScanResultDetailsRequest,
                                             Pagination::GetCisScanResultDetailsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetClustersForImage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetClustersForImageRequest,
                                    Pagination::GetClustersForImagePaginationTraits<DerivedClient>>
  GetClustersForImagePaginator(const Model::GetClustersForImageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetClustersForImageRequest,
                                             Pagination::GetClustersForImagePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountPermissions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountPermissionsRequest,
                                    Pagination::ListAccountPermissionsPaginationTraits<DerivedClient>>
  ListAccountPermissionsPaginator(const Model::ListAccountPermissionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountPermissionsRequest,
                                             Pagination::ListAccountPermissionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCisScanConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScanConfigurationsRequest,
                                    Pagination::ListCisScanConfigurationsPaginationTraits<DerivedClient>>
  ListCisScanConfigurationsPaginator(const Model::ListCisScanConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScanConfigurationsRequest,
                                             Pagination::ListCisScanConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCisScanResultsAggregatedByChecks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScanResultsAggregatedByChecksRequest,
                                    Pagination::ListCisScanResultsAggregatedByChecksPaginationTraits<DerivedClient>>
  ListCisScanResultsAggregatedByChecksPaginator(const Model::ListCisScanResultsAggregatedByChecksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScanResultsAggregatedByChecksRequest,
                                             Pagination::ListCisScanResultsAggregatedByChecksPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCisScanResultsAggregatedByTargetResource operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScanResultsAggregatedByTargetResourceRequest,
                                    Pagination::ListCisScanResultsAggregatedByTargetResourcePaginationTraits<DerivedClient>>
  ListCisScanResultsAggregatedByTargetResourcePaginator(const Model::ListCisScanResultsAggregatedByTargetResourceRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScanResultsAggregatedByTargetResourceRequest,
                                             Pagination::ListCisScanResultsAggregatedByTargetResourcePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCisScans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScansRequest, Pagination::ListCisScansPaginationTraits<DerivedClient>>
  ListCisScansPaginator(const Model::ListCisScansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCisScansRequest,
                                             Pagination::ListCisScansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCoverage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoverageRequest, Pagination::ListCoveragePaginationTraits<DerivedClient>>
  ListCoveragePaginator(const Model::ListCoverageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoverageRequest,
                                             Pagination::ListCoveragePaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCoverageStatistics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoverageStatisticsRequest,
                                    Pagination::ListCoverageStatisticsPaginationTraits<DerivedClient>>
  ListCoverageStatisticsPaginator(const Model::ListCoverageStatisticsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCoverageStatisticsRequest,
                                             Pagination::ListCoverageStatisticsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDelegatedAdminAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDelegatedAdminAccountsRequest,
                                    Pagination::ListDelegatedAdminAccountsPaginationTraits<DerivedClient>>
  ListDelegatedAdminAccountsPaginator(const Model::ListDelegatedAdminAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDelegatedAdminAccountsRequest,
                                             Pagination::ListDelegatedAdminAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFiltersRequest, Pagination::ListFiltersPaginationTraits<DerivedClient>>
  ListFiltersPaginator(const Model::ListFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFiltersRequest,
                                             Pagination::ListFiltersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListFindingAggregations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingAggregationsRequest,
                                    Pagination::ListFindingAggregationsPaginationTraits<DerivedClient>>
  ListFindingAggregationsPaginator(const Model::ListFindingAggregationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingAggregationsRequest,
                                             Pagination::ListFindingAggregationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest, Pagination::ListFindingsPaginationTraits<DerivedClient>>
  ListFindingsPaginator(const Model::ListFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest,
                                             Pagination::ListFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
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
   * Create a paginator for ListUsageTotals operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsageTotalsRequest,
                                    Pagination::ListUsageTotalsPaginationTraits<DerivedClient>>
  ListUsageTotalsPaginator(const Model::ListUsageTotalsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListUsageTotalsRequest,
                                             Pagination::ListUsageTotalsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for SearchVulnerabilities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchVulnerabilitiesRequest,
                                    Pagination::SearchVulnerabilitiesPaginationTraits<DerivedClient>>
  SearchVulnerabilitiesPaginator(const Model::SearchVulnerabilitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchVulnerabilitiesRequest,
                                             Pagination::SearchVulnerabilitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Inspector2
}  // namespace Aws
