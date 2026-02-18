/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/macie2/model/DescribeBucketsPaginationTraits.h>
#include <aws/macie2/model/GetUsageStatisticsPaginationTraits.h>
#include <aws/macie2/model/ListAllowListsPaginationTraits.h>
#include <aws/macie2/model/ListAutomatedDiscoveryAccountsPaginationTraits.h>
#include <aws/macie2/model/ListClassificationJobsPaginationTraits.h>
#include <aws/macie2/model/ListClassificationScopesPaginationTraits.h>
#include <aws/macie2/model/ListCustomDataIdentifiersPaginationTraits.h>
#include <aws/macie2/model/ListFindingsFiltersPaginationTraits.h>
#include <aws/macie2/model/ListFindingsPaginationTraits.h>
#include <aws/macie2/model/ListInvitationsPaginationTraits.h>
#include <aws/macie2/model/ListManagedDataIdentifiersPaginationTraits.h>
#include <aws/macie2/model/ListMembersPaginationTraits.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsPaginationTraits.h>
#include <aws/macie2/model/ListResourceProfileArtifactsPaginationTraits.h>
#include <aws/macie2/model/ListResourceProfileDetectionsPaginationTraits.h>
#include <aws/macie2/model/ListSensitivityInspectionTemplatesPaginationTraits.h>
#include <aws/macie2/model/SearchResourcesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Macie2 {

class Macie2Client;

template <typename DerivedClient>
class Macie2PaginationBase {
 public:
  /**
   * Create a paginator for DescribeBuckets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBucketsRequest,
                                    Pagination::DescribeBucketsPaginationTraits<DerivedClient>>
  DescribeBucketsPaginator(const Model::DescribeBucketsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBucketsRequest,
                                             Pagination::DescribeBucketsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
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
   * Create a paginator for ListAllowLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAllowListsRequest, Pagination::ListAllowListsPaginationTraits<DerivedClient>>
  ListAllowListsPaginator(const Model::ListAllowListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAllowListsRequest,
                                             Pagination::ListAllowListsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListAutomatedDiscoveryAccounts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedDiscoveryAccountsRequest,
                                    Pagination::ListAutomatedDiscoveryAccountsPaginationTraits<DerivedClient>>
  ListAutomatedDiscoveryAccountsPaginator(const Model::ListAutomatedDiscoveryAccountsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedDiscoveryAccountsRequest,
                                             Pagination::ListAutomatedDiscoveryAccountsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClassificationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClassificationJobsRequest,
                                    Pagination::ListClassificationJobsPaginationTraits<DerivedClient>>
  ListClassificationJobsPaginator(const Model::ListClassificationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClassificationJobsRequest,
                                             Pagination::ListClassificationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListClassificationScopes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClassificationScopesRequest,
                                    Pagination::ListClassificationScopesPaginationTraits<DerivedClient>>
  ListClassificationScopesPaginator(const Model::ListClassificationScopesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListClassificationScopesRequest,
                                             Pagination::ListClassificationScopesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomDataIdentifiers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomDataIdentifiersRequest,
                                    Pagination::ListCustomDataIdentifiersPaginationTraits<DerivedClient>>
  ListCustomDataIdentifiersPaginator(const Model::ListCustomDataIdentifiersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomDataIdentifiersRequest,
                                             Pagination::ListCustomDataIdentifiersPaginationTraits<DerivedClient>>{
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
   * Create a paginator for ListFindingsFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsFiltersRequest,
                                    Pagination::ListFindingsFiltersPaginationTraits<DerivedClient>>
  ListFindingsFiltersPaginator(const Model::ListFindingsFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsFiltersRequest,
                                             Pagination::ListFindingsFiltersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListManagedDataIdentifiers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedDataIdentifiersRequest,
                                    Pagination::ListManagedDataIdentifiersPaginationTraits<DerivedClient>>
  ListManagedDataIdentifiersPaginator(const Model::ListManagedDataIdentifiersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedDataIdentifiersRequest,
                                             Pagination::ListManagedDataIdentifiersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
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
   * Create a paginator for ListResourceProfileArtifacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceProfileArtifactsRequest,
                                    Pagination::ListResourceProfileArtifactsPaginationTraits<DerivedClient>>
  ListResourceProfileArtifactsPaginator(const Model::ListResourceProfileArtifactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceProfileArtifactsRequest,
                                             Pagination::ListResourceProfileArtifactsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceProfileDetections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceProfileDetectionsRequest,
                                    Pagination::ListResourceProfileDetectionsPaginationTraits<DerivedClient>>
  ListResourceProfileDetectionsPaginator(const Model::ListResourceProfileDetectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceProfileDetectionsRequest,
                                             Pagination::ListResourceProfileDetectionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSensitivityInspectionTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSensitivityInspectionTemplatesRequest,
                                    Pagination::ListSensitivityInspectionTemplatesPaginationTraits<DerivedClient>>
  ListSensitivityInspectionTemplatesPaginator(const Model::ListSensitivityInspectionTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSensitivityInspectionTemplatesRequest,
                                             Pagination::ListSensitivityInspectionTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourcesRequest,
                                    Pagination::SearchResourcesPaginationTraits<DerivedClient>>
  SearchResourcesPaginator(const Model::SearchResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchResourcesRequest,
                                             Pagination::SearchResourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace Macie2
}  // namespace Aws
