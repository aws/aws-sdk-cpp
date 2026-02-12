/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/datazone/DataZoneClient.h>
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

namespace Aws {
namespace DataZone {

using ListAccountPoolsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListAccountPoolsRequest,
                                                                    Pagination::ListAccountPoolsPaginationTraits<DataZoneClient>>;
using ListAccountsInAccountPoolPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListAccountsInAccountPoolRequest,
                                      Pagination::ListAccountsInAccountPoolPaginationTraits<DataZoneClient>>;
using ListAssetFiltersPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListAssetFiltersRequest,
                                                                    Pagination::ListAssetFiltersPaginationTraits<DataZoneClient>>;
using ListAssetRevisionsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListAssetRevisionsRequest,
                                                                      Pagination::ListAssetRevisionsPaginationTraits<DataZoneClient>>;
using ListConnectionsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListConnectionsRequest,
                                                                   Pagination::ListConnectionsPaginationTraits<DataZoneClient>>;
using ListDataProductRevisionsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListDataProductRevisionsRequest,
                                      Pagination::ListDataProductRevisionsPaginationTraits<DataZoneClient>>;
using ListDataSourceRunActivitiesPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListDataSourceRunActivitiesRequest,
                                      Pagination::ListDataSourceRunActivitiesPaginationTraits<DataZoneClient>>;
using ListDataSourceRunsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListDataSourceRunsRequest,
                                                                      Pagination::ListDataSourceRunsPaginationTraits<DataZoneClient>>;
using ListDataSourcesPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListDataSourcesRequest,
                                                                   Pagination::ListDataSourcesPaginationTraits<DataZoneClient>>;
using ListDomainsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListDomainsRequest, Pagination::ListDomainsPaginationTraits<DataZoneClient>>;
using ListDomainUnitsForParentPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListDomainUnitsForParentRequest,
                                      Pagination::ListDomainUnitsForParentPaginationTraits<DataZoneClient>>;
using ListEntityOwnersPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListEntityOwnersRequest,
                                                                    Pagination::ListEntityOwnersPaginationTraits<DataZoneClient>>;
using ListEnvironmentActionsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListEnvironmentActionsRequest,
                                      Pagination::ListEnvironmentActionsPaginationTraits<DataZoneClient>>;
using ListEnvironmentBlueprintConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListEnvironmentBlueprintConfigurationsRequest,
                                      Pagination::ListEnvironmentBlueprintConfigurationsPaginationTraits<DataZoneClient>>;
using ListEnvironmentBlueprintsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListEnvironmentBlueprintsRequest,
                                      Pagination::ListEnvironmentBlueprintsPaginationTraits<DataZoneClient>>;
using ListEnvironmentProfilesPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListEnvironmentProfilesRequest,
                                      Pagination::ListEnvironmentProfilesPaginationTraits<DataZoneClient>>;
using ListEnvironmentsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListEnvironmentsRequest,
                                                                    Pagination::ListEnvironmentsPaginationTraits<DataZoneClient>>;
using ListJobRunsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListJobRunsRequest, Pagination::ListJobRunsPaginationTraits<DataZoneClient>>;
using ListLineageEventsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListLineageEventsRequest,
                                                                     Pagination::ListLineageEventsPaginationTraits<DataZoneClient>>;
using ListLineageNodeHistoryPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListLineageNodeHistoryRequest,
                                      Pagination::ListLineageNodeHistoryPaginationTraits<DataZoneClient>>;
using ListMetadataGenerationRunsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListMetadataGenerationRunsRequest,
                                      Pagination::ListMetadataGenerationRunsPaginationTraits<DataZoneClient>>;
using ListNotificationsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListNotificationsRequest,
                                                                     Pagination::ListNotificationsPaginationTraits<DataZoneClient>>;
using ListPolicyGrantsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListPolicyGrantsRequest,
                                                                    Pagination::ListPolicyGrantsPaginationTraits<DataZoneClient>>;
using ListProjectMembershipsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListProjectMembershipsRequest,
                                      Pagination::ListProjectMembershipsPaginationTraits<DataZoneClient>>;
using ListProjectProfilesPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListProjectProfilesRequest,
                                                                       Pagination::ListProjectProfilesPaginationTraits<DataZoneClient>>;
using ListProjectsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DataZoneClient>>;
using ListRulesPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListRulesRequest, Pagination::ListRulesPaginationTraits<DataZoneClient>>;
using ListSubscriptionGrantsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListSubscriptionGrantsRequest,
                                      Pagination::ListSubscriptionGrantsPaginationTraits<DataZoneClient>>;
using ListSubscriptionRequestsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListSubscriptionRequestsRequest,
                                      Pagination::ListSubscriptionRequestsPaginationTraits<DataZoneClient>>;
using ListSubscriptionsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListSubscriptionsRequest,
                                                                     Pagination::ListSubscriptionsPaginationTraits<DataZoneClient>>;
using ListSubscriptionTargetsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListSubscriptionTargetsRequest,
                                      Pagination::ListSubscriptionTargetsPaginationTraits<DataZoneClient>>;
using ListTimeSeriesDataPointsPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::ListTimeSeriesDataPointsRequest,
                                      Pagination::ListTimeSeriesDataPointsPaginationTraits<DataZoneClient>>;
using SearchPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::SearchRequest, Pagination::SearchPaginationTraits<DataZoneClient>>;
using SearchGroupProfilesPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::SearchGroupProfilesRequest,
                                                                       Pagination::SearchGroupProfilesPaginationTraits<DataZoneClient>>;
using SearchListingsPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::SearchListingsRequest,
                                                                  Pagination::SearchListingsPaginationTraits<DataZoneClient>>;
using SearchTypesPaginator =
    Aws::Utils::Pagination::Paginator<DataZoneClient, Model::SearchTypesRequest, Pagination::SearchTypesPaginationTraits<DataZoneClient>>;
using SearchUserProfilesPaginator = Aws::Utils::Pagination::Paginator<DataZoneClient, Model::SearchUserProfilesRequest,
                                                                      Pagination::SearchUserProfilesPaginationTraits<DataZoneClient>>;

}  // namespace DataZone
}  // namespace Aws
