/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace GuardDuty {

class GuardDutyClient;

template <typename DerivedClient>
class GuardDutyPaginationBase {
 public:
  /**
   * Create a paginator for DescribeMalwareScans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMalwareScansRequest,
                                    Pagination::DescribeMalwareScansPaginationTraits<DerivedClient>>
  DescribeMalwareScansPaginator(const Model::DescribeMalwareScansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMalwareScansRequest,
                                             Pagination::DescribeMalwareScansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeOrganizationConfiguration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConfigurationRequest,
                                    Pagination::DescribeOrganizationConfigurationPaginationTraits<DerivedClient>>
  DescribeOrganizationConfigurationPaginator(const Model::DescribeOrganizationConfigurationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationConfigurationRequest,
                                             Pagination::DescribeOrganizationConfigurationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetUsageStatistics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsageStatisticsRequest,
                                    Pagination::GetUsageStatisticsPaginationTraits<DerivedClient>>
  GetUsageStatisticsPaginator(const Model::GetUsageStatisticsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetUsageStatisticsRequest,
                                             Pagination::GetUsageStatisticsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListDetectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDetectorsRequest, Pagination::ListDetectorsPaginationTraits<DerivedClient>>
  ListDetectorsPaginator(const Model::ListDetectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDetectorsRequest,
                                             Pagination::ListDetectorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
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
   * Create a paginator for ListFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest, Pagination::ListFindingsPaginationTraits<DerivedClient>>
  ListFindingsPaginator(const Model::ListFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsRequest,
                                             Pagination::ListFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
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
   * Create a paginator for ListIPSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIPSetsRequest, Pagination::ListIPSetsPaginationTraits<DerivedClient>>
  ListIPSetsPaginator(const Model::ListIPSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListIPSetsRequest,
                                             Pagination::ListIPSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListMalwareScans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMalwareScansRequest,
                                    Pagination::ListMalwareScansPaginationTraits<DerivedClient>>
  ListMalwareScansPaginator(const Model::ListMalwareScansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMalwareScansRequest,
                                             Pagination::ListMalwareScansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
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

  /**
   * Create a paginator for ListPublishingDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublishingDestinationsRequest,
                                    Pagination::ListPublishingDestinationsPaginationTraits<DerivedClient>>
  ListPublishingDestinationsPaginator(const Model::ListPublishingDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPublishingDestinationsRequest,
                                             Pagination::ListPublishingDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThreatEntitySets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatEntitySetsRequest,
                                    Pagination::ListThreatEntitySetsPaginationTraits<DerivedClient>>
  ListThreatEntitySetsPaginator(const Model::ListThreatEntitySetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatEntitySetsRequest,
                                             Pagination::ListThreatEntitySetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListThreatIntelSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatIntelSetsRequest,
                                    Pagination::ListThreatIntelSetsPaginationTraits<DerivedClient>>
  ListThreatIntelSetsPaginator(const Model::ListThreatIntelSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListThreatIntelSetsRequest,
                                             Pagination::ListThreatIntelSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTrustedEntitySets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustedEntitySetsRequest,
                                    Pagination::ListTrustedEntitySetsPaginationTraits<DerivedClient>>
  ListTrustedEntitySetsPaginator(const Model::ListTrustedEntitySetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTrustedEntitySetsRequest,
                                             Pagination::ListTrustedEntitySetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace GuardDuty
}  // namespace Aws
