/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/datazone/model/ListAccountPoolsPaginationTraits.h>
#include <aws/datazone/model/ListAccountsInAccountPoolPaginationTraits.h>
#include <aws/datazone/model/ListAssetFiltersPaginationTraits.h>
#include <aws/datazone/model/ListAssetRevisionsPaginationTraits.h>
#include <aws/datazone/model/ListConnectionsPaginationTraits.h>
#include <aws/datazone/model/ListDataProductRevisionsPaginationTraits.h>
#include <aws/datazone/model/ListDataSourceRunActivitiesPaginationTraits.h>
#include <aws/datazone/model/ListDataSourceRunsPaginationTraits.h>
#include <aws/datazone/model/ListDataSourcesPaginationTraits.h>
#include <aws/datazone/model/ListDomainUnitsForParentPaginationTraits.h>
#include <aws/datazone/model/ListDomainsPaginationTraits.h>
#include <aws/datazone/model/ListEntityOwnersPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentActionsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentBlueprintConfigurationsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentBlueprintsPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentProfilesPaginationTraits.h>
#include <aws/datazone/model/ListEnvironmentsPaginationTraits.h>
#include <aws/datazone/model/ListJobRunsPaginationTraits.h>
#include <aws/datazone/model/ListLineageEventsPaginationTraits.h>
#include <aws/datazone/model/ListLineageNodeHistoryPaginationTraits.h>
#include <aws/datazone/model/ListMetadataGenerationRunsPaginationTraits.h>
#include <aws/datazone/model/ListNotificationsPaginationTraits.h>
#include <aws/datazone/model/ListPolicyGrantsPaginationTraits.h>
#include <aws/datazone/model/ListProjectMembershipsPaginationTraits.h>
#include <aws/datazone/model/ListProjectProfilesPaginationTraits.h>
#include <aws/datazone/model/ListProjectsPaginationTraits.h>
#include <aws/datazone/model/ListRulesPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionGrantsPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionRequestsPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionTargetsPaginationTraits.h>
#include <aws/datazone/model/ListSubscriptionsPaginationTraits.h>
#include <aws/datazone/model/ListTimeSeriesDataPointsPaginationTraits.h>
#include <aws/datazone/model/SearchGroupProfilesPaginationTraits.h>
#include <aws/datazone/model/SearchListingsPaginationTraits.h>
#include <aws/datazone/model/SearchPaginationTraits.h>
#include <aws/datazone/model/SearchTypesPaginationTraits.h>
#include <aws/datazone/model/SearchUserProfilesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DataZone {

class DataZoneClient;

template <typename DerivedClient>
class DataZonePaginationBase {
 public:
  /**
   * Create a paginator for ListAccountPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountPoolsRequest,
                                    Pagination::ListAccountPoolsPaginationTraits<DerivedClient>>
  ListAccountPoolsPaginator(const Model::ListAccountPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountPoolsRequest,
                                             Pagination::ListAccountPoolsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAccountsInAccountPool operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsInAccountPoolRequest,
                                    Pagination::ListAccountsInAccountPoolPaginationTraits<DerivedClient>>
  ListAccountsInAccountPoolPaginator(const Model::ListAccountsInAccountPoolRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountsInAccountPoolRequest,
                                             Pagination::ListAccountsInAccountPoolPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAssetFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetFiltersRequest,
                                    Pagination::ListAssetFiltersPaginationTraits<DerivedClient>>
  ListAssetFiltersPaginator(const Model::ListAssetFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetFiltersRequest,
                                             Pagination::ListAssetFiltersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListAssetRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetRevisionsRequest,
                                    Pagination::ListAssetRevisionsPaginationTraits<DerivedClient>>
  ListAssetRevisionsPaginator(const Model::ListAssetRevisionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssetRevisionsRequest,
                                             Pagination::ListAssetRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnections operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                    Pagination::ListConnectionsPaginationTraits<DerivedClient>>
  ListConnectionsPaginator(const Model::ListConnectionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectionsRequest,
                                             Pagination::ListConnectionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDataProductRevisions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataProductRevisionsRequest,
                                    Pagination::ListDataProductRevisionsPaginationTraits<DerivedClient>>
  ListDataProductRevisionsPaginator(const Model::ListDataProductRevisionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataProductRevisionsRequest,
                                             Pagination::ListDataProductRevisionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSourceRunActivities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceRunActivitiesRequest,
                                    Pagination::ListDataSourceRunActivitiesPaginationTraits<DerivedClient>>
  ListDataSourceRunActivitiesPaginator(const Model::ListDataSourceRunActivitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceRunActivitiesRequest,
                                             Pagination::ListDataSourceRunActivitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSourceRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceRunsRequest,
                                    Pagination::ListDataSourceRunsPaginationTraits<DerivedClient>>
  ListDataSourceRunsPaginator(const Model::ListDataSourceRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourceRunsRequest,
                                             Pagination::ListDataSourceRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                    Pagination::ListDataSourcesPaginationTraits<DerivedClient>>
  ListDataSourcesPaginator(const Model::ListDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDataSourcesRequest,
                                             Pagination::ListDataSourcesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListDomains operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DerivedClient>>
  ListDomainsPaginator(const Model::ListDomainsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainsRequest,
                                             Pagination::ListDomainsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListDomainUnitsForParent operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainUnitsForParentRequest,
                                    Pagination::ListDomainUnitsForParentPaginationTraits<DerivedClient>>
  ListDomainUnitsForParentPaginator(const Model::ListDomainUnitsForParentRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainUnitsForParentRequest,
                                             Pagination::ListDomainUnitsForParentPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEntityOwners operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityOwnersRequest,
                                    Pagination::ListEntityOwnersPaginationTraits<DerivedClient>>
  ListEntityOwnersPaginator(const Model::ListEntityOwnersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEntityOwnersRequest,
                                             Pagination::ListEntityOwnersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEnvironmentActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentActionsRequest,
                                    Pagination::ListEnvironmentActionsPaginationTraits<DerivedClient>>
  ListEnvironmentActionsPaginator(const Model::ListEnvironmentActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentActionsRequest,
                                             Pagination::ListEnvironmentActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironmentBlueprintConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentBlueprintConfigurationsRequest,
                                    Pagination::ListEnvironmentBlueprintConfigurationsPaginationTraits<DerivedClient>>
  ListEnvironmentBlueprintConfigurationsPaginator(const Model::ListEnvironmentBlueprintConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentBlueprintConfigurationsRequest,
                                             Pagination::ListEnvironmentBlueprintConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironmentBlueprints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentBlueprintsRequest,
                                    Pagination::ListEnvironmentBlueprintsPaginationTraits<DerivedClient>>
  ListEnvironmentBlueprintsPaginator(const Model::ListEnvironmentBlueprintsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentBlueprintsRequest,
                                             Pagination::ListEnvironmentBlueprintsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironmentProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentProfilesRequest,
                                    Pagination::ListEnvironmentProfilesPaginationTraits<DerivedClient>>
  ListEnvironmentProfilesPaginator(const Model::ListEnvironmentProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentProfilesRequest,
                                             Pagination::ListEnvironmentProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEnvironments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                    Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>
  ListEnvironmentsPaginator(const Model::ListEnvironmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnvironmentsRequest,
                                             Pagination::ListEnvironmentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListJobRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest, Pagination::ListJobRunsPaginationTraits<DerivedClient>>
  ListJobRunsPaginator(const Model::ListJobRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobRunsRequest,
                                             Pagination::ListJobRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListLineageEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLineageEventsRequest,
                                    Pagination::ListLineageEventsPaginationTraits<DerivedClient>>
  ListLineageEventsPaginator(const Model::ListLineageEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLineageEventsRequest,
                                             Pagination::ListLineageEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLineageNodeHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLineageNodeHistoryRequest,
                                    Pagination::ListLineageNodeHistoryPaginationTraits<DerivedClient>>
  ListLineageNodeHistoryPaginator(const Model::ListLineageNodeHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLineageNodeHistoryRequest,
                                             Pagination::ListLineageNodeHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMetadataGenerationRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetadataGenerationRunsRequest,
                                    Pagination::ListMetadataGenerationRunsPaginationTraits<DerivedClient>>
  ListMetadataGenerationRunsPaginator(const Model::ListMetadataGenerationRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMetadataGenerationRunsRequest,
                                             Pagination::ListMetadataGenerationRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationsRequest,
                                    Pagination::ListNotificationsPaginationTraits<DerivedClient>>
  ListNotificationsPaginator(const Model::ListNotificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationsRequest,
                                             Pagination::ListNotificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicyGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGrantsRequest,
                                    Pagination::ListPolicyGrantsPaginationTraits<DerivedClient>>
  ListPolicyGrantsPaginator(const Model::ListPolicyGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGrantsRequest,
                                             Pagination::ListPolicyGrantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProjectMemberships operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectMembershipsRequest,
                                    Pagination::ListProjectMembershipsPaginationTraits<DerivedClient>>
  ListProjectMembershipsPaginator(const Model::ListProjectMembershipsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectMembershipsRequest,
                                             Pagination::ListProjectMembershipsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProjectProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectProfilesRequest,
                                    Pagination::ListProjectProfilesPaginationTraits<DerivedClient>>
  ListProjectProfilesPaginator(const Model::ListProjectProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectProfilesRequest,
                                             Pagination::ListProjectProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>
  ListRulesPaginator(const Model::ListRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscriptionGrants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionGrantsRequest,
                                    Pagination::ListSubscriptionGrantsPaginationTraits<DerivedClient>>
  ListSubscriptionGrantsPaginator(const Model::ListSubscriptionGrantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionGrantsRequest,
                                             Pagination::ListSubscriptionGrantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscriptionRequests operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionRequestsRequest,
                                    Pagination::ListSubscriptionRequestsPaginationTraits<DerivedClient>>
  ListSubscriptionRequestsPaginator(const Model::ListSubscriptionRequestsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionRequestsRequest,
                                             Pagination::ListSubscriptionRequestsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                    Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>
  ListSubscriptionsPaginator(const Model::ListSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                             Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscriptionTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionTargetsRequest,
                                    Pagination::ListSubscriptionTargetsPaginationTraits<DerivedClient>>
  ListSubscriptionTargetsPaginator(const Model::ListSubscriptionTargetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionTargetsRequest,
                                             Pagination::ListSubscriptionTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTimeSeriesDataPoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTimeSeriesDataPointsRequest,
                                    Pagination::ListTimeSeriesDataPointsPaginationTraits<DerivedClient>>
  ListTimeSeriesDataPointsPaginator(const Model::ListTimeSeriesDataPointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTimeSeriesDataPointsRequest,
                                             Pagination::ListTimeSeriesDataPointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for Search operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DerivedClient>> SearchPaginator(
      const Model::SearchRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchGroupProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGroupProfilesRequest,
                                    Pagination::SearchGroupProfilesPaginationTraits<DerivedClient>>
  SearchGroupProfilesPaginator(const Model::SearchGroupProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchGroupProfilesRequest,
                                             Pagination::SearchGroupProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchListings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchListingsRequest, Pagination::SearchListingsPaginationTraits<DerivedClient>>
  SearchListingsPaginator(const Model::SearchListingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchListingsRequest,
                                             Pagination::SearchListingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchTypes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTypesRequest, Pagination::SearchTypesPaginationTraits<DerivedClient>>
  SearchTypesPaginator(const Model::SearchTypesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchTypesRequest,
                                             Pagination::SearchTypesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for SearchUserProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUserProfilesRequest,
                                    Pagination::SearchUserProfilesPaginationTraits<DerivedClient>>
  SearchUserProfilesPaginator(const Model::SearchUserProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchUserProfilesRequest,
                                             Pagination::SearchUserProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DataZone
}  // namespace Aws
