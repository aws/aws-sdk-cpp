/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthPaginationTraits.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthPaginationTraits.h>
#include <aws/devops-guru/model/GetCostEstimationPaginationTraits.h>
#include <aws/devops-guru/model/GetResourceCollectionPaginationTraits.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightPaginationTraits.h>
#include <aws/devops-guru/model/ListAnomalousLogGroupsPaginationTraits.h>
#include <aws/devops-guru/model/ListEventsPaginationTraits.h>
#include <aws/devops-guru/model/ListInsightsPaginationTraits.h>
#include <aws/devops-guru/model/ListMonitoredResourcesPaginationTraits.h>
#include <aws/devops-guru/model/ListNotificationChannelsPaginationTraits.h>
#include <aws/devops-guru/model/ListOrganizationInsightsPaginationTraits.h>
#include <aws/devops-guru/model/ListRecommendationsPaginationTraits.h>
#include <aws/devops-guru/model/SearchInsightsPaginationTraits.h>
#include <aws/devops-guru/model/SearchOrganizationInsightsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace DevOpsGuru {

class DevOpsGuruClient;

template <typename DerivedClient>
class DevOpsGuruPaginationBase {
 public:
  /**
   * Create a paginator for DescribeOrganizationResourceCollectionHealth operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationResourceCollectionHealthRequest,
                                    Pagination::DescribeOrganizationResourceCollectionHealthPaginationTraits<DerivedClient>>
  DescribeOrganizationResourceCollectionHealthPaginator(const Model::DescribeOrganizationResourceCollectionHealthRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeOrganizationResourceCollectionHealthRequest,
                                             Pagination::DescribeOrganizationResourceCollectionHealthPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeResourceCollectionHealth operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeResourceCollectionHealthRequest,
                                    Pagination::DescribeResourceCollectionHealthPaginationTraits<DerivedClient>>
  DescribeResourceCollectionHealthPaginator(const Model::DescribeResourceCollectionHealthRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeResourceCollectionHealthRequest,
                                             Pagination::DescribeResourceCollectionHealthPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCostEstimation operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCostEstimationRequest,
                                    Pagination::GetCostEstimationPaginationTraits<DerivedClient>>
  GetCostEstimationPaginator(const Model::GetCostEstimationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCostEstimationRequest,
                                             Pagination::GetCostEstimationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetResourceCollection operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceCollectionRequest,
                                    Pagination::GetResourceCollectionPaginationTraits<DerivedClient>>
  GetResourceCollectionPaginator(const Model::GetResourceCollectionRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetResourceCollectionRequest,
                                             Pagination::GetResourceCollectionPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnomaliesForInsight operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomaliesForInsightRequest,
                                    Pagination::ListAnomaliesForInsightPaginationTraits<DerivedClient>>
  ListAnomaliesForInsightPaginator(const Model::ListAnomaliesForInsightRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomaliesForInsightRequest,
                                             Pagination::ListAnomaliesForInsightPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnomalousLogGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomalousLogGroupsRequest,
                                    Pagination::ListAnomalousLogGroupsPaginationTraits<DerivedClient>>
  ListAnomalousLogGroupsPaginator(const Model::ListAnomalousLogGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomalousLogGroupsRequest,
                                             Pagination::ListAnomalousLogGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest, Pagination::ListEventsPaginationTraits<DerivedClient>>
  ListEventsPaginator(const Model::ListEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventsRequest,
                                             Pagination::ListEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsRequest, Pagination::ListInsightsPaginationTraits<DerivedClient>>
  ListInsightsPaginator(const Model::ListInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInsightsRequest,
                                             Pagination::ListInsightsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListMonitoredResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoredResourcesRequest,
                                    Pagination::ListMonitoredResourcesPaginationTraits<DerivedClient>>
  ListMonitoredResourcesPaginator(const Model::ListMonitoredResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitoredResourcesRequest,
                                             Pagination::ListMonitoredResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotificationChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationChannelsRequest,
                                    Pagination::ListNotificationChannelsPaginationTraits<DerivedClient>>
  ListNotificationChannelsPaginator(const Model::ListNotificationChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationChannelsRequest,
                                             Pagination::ListNotificationChannelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOrganizationInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationInsightsRequest,
                                    Pagination::ListOrganizationInsightsPaginationTraits<DerivedClient>>
  ListOrganizationInsightsPaginator(const Model::ListOrganizationInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOrganizationInsightsRequest,
                                             Pagination::ListOrganizationInsightsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchInsightsRequest, Pagination::SearchInsightsPaginationTraits<DerivedClient>>
  SearchInsightsPaginator(const Model::SearchInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchInsightsRequest,
                                             Pagination::SearchInsightsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for SearchOrganizationInsights operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchOrganizationInsightsRequest,
                                    Pagination::SearchOrganizationInsightsPaginationTraits<DerivedClient>>
  SearchOrganizationInsightsPaginator(const Model::SearchOrganizationInsightsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchOrganizationInsightsRequest,
                                             Pagination::SearchOrganizationInsightsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace DevOpsGuru
}  // namespace Aws
