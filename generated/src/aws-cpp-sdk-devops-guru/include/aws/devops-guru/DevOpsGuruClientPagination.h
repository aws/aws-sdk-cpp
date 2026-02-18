/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/devops-guru/DevOpsGuruClient.h>
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

namespace Aws {
namespace DevOpsGuru {

using DescribeOrganizationResourceCollectionHealthPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::DescribeOrganizationResourceCollectionHealthRequest,
                                      Pagination::DescribeOrganizationResourceCollectionHealthPaginationTraits<DevOpsGuruClient>>;
using DescribeResourceCollectionHealthPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::DescribeResourceCollectionHealthRequest,
                                      Pagination::DescribeResourceCollectionHealthPaginationTraits<DevOpsGuruClient>>;
using GetCostEstimationPaginator = Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::GetCostEstimationRequest,
                                                                     Pagination::GetCostEstimationPaginationTraits<DevOpsGuruClient>>;
using GetResourceCollectionPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::GetResourceCollectionRequest,
                                      Pagination::GetResourceCollectionPaginationTraits<DevOpsGuruClient>>;
using ListAnomaliesForInsightPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListAnomaliesForInsightRequest,
                                      Pagination::ListAnomaliesForInsightPaginationTraits<DevOpsGuruClient>>;
using ListAnomalousLogGroupsPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListAnomalousLogGroupsRequest,
                                      Pagination::ListAnomalousLogGroupsPaginationTraits<DevOpsGuruClient>>;
using ListEventsPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListEventsRequest, Pagination::ListEventsPaginationTraits<DevOpsGuruClient>>;
using ListInsightsPaginator = Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListInsightsRequest,
                                                                Pagination::ListInsightsPaginationTraits<DevOpsGuruClient>>;
using ListMonitoredResourcesPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListMonitoredResourcesRequest,
                                      Pagination::ListMonitoredResourcesPaginationTraits<DevOpsGuruClient>>;
using ListNotificationChannelsPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListNotificationChannelsRequest,
                                      Pagination::ListNotificationChannelsPaginationTraits<DevOpsGuruClient>>;
using ListOrganizationInsightsPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListOrganizationInsightsRequest,
                                      Pagination::ListOrganizationInsightsPaginationTraits<DevOpsGuruClient>>;
using ListRecommendationsPaginator = Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::ListRecommendationsRequest,
                                                                       Pagination::ListRecommendationsPaginationTraits<DevOpsGuruClient>>;
using SearchInsightsPaginator = Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::SearchInsightsRequest,
                                                                  Pagination::SearchInsightsPaginationTraits<DevOpsGuruClient>>;
using SearchOrganizationInsightsPaginator =
    Aws::Utils::Pagination::Paginator<DevOpsGuruClient, Model::SearchOrganizationInsightsRequest,
                                      Pagination::SearchOrganizationInsightsPaginationTraits<DevOpsGuruClient>>;

}  // namespace DevOpsGuru
}  // namespace Aws
