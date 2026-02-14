/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/logs/CloudWatchLogsClient.h>
#include <aws/logs/model/DescribeConfigurationTemplatesPaginationTraits.h>
#include <aws/logs/model/DescribeDeliveriesPaginationTraits.h>
#include <aws/logs/model/DescribeDeliveryDestinationsPaginationTraits.h>
#include <aws/logs/model/DescribeDeliverySourcesPaginationTraits.h>
#include <aws/logs/model/DescribeDestinationsPaginationTraits.h>
#include <aws/logs/model/DescribeLogGroupsPaginationTraits.h>
#include <aws/logs/model/DescribeLogStreamsPaginationTraits.h>
#include <aws/logs/model/DescribeMetricFiltersPaginationTraits.h>
#include <aws/logs/model/DescribeSubscriptionFiltersPaginationTraits.h>
#include <aws/logs/model/FilterLogEventsPaginationTraits.h>
#include <aws/logs/model/GetLogEventsPaginationTraits.h>
#include <aws/logs/model/GetScheduledQueryHistoryPaginationTraits.h>
#include <aws/logs/model/ListAggregateLogGroupSummariesPaginationTraits.h>
#include <aws/logs/model/ListAnomaliesPaginationTraits.h>
#include <aws/logs/model/ListLogAnomalyDetectorsPaginationTraits.h>
#include <aws/logs/model/ListLogGroupsForQueryPaginationTraits.h>
#include <aws/logs/model/ListScheduledQueriesPaginationTraits.h>
#include <aws/logs/model/ListSourcesForS3TableIntegrationPaginationTraits.h>

namespace Aws {
namespace CloudWatchLogs {

using DescribeConfigurationTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeConfigurationTemplatesRequest,
                                      Pagination::DescribeConfigurationTemplatesPaginationTraits<CloudWatchLogsClient>>;
using DescribeDeliveriesPaginator = Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeDeliveriesRequest,
                                                                      Pagination::DescribeDeliveriesPaginationTraits<CloudWatchLogsClient>>;
using DescribeDeliveryDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeDeliveryDestinationsRequest,
                                      Pagination::DescribeDeliveryDestinationsPaginationTraits<CloudWatchLogsClient>>;
using DescribeDeliverySourcesPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeDeliverySourcesRequest,
                                      Pagination::DescribeDeliverySourcesPaginationTraits<CloudWatchLogsClient>>;
using DescribeDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeDestinationsRequest,
                                      Pagination::DescribeDestinationsPaginationTraits<CloudWatchLogsClient>>;
using DescribeLogGroupsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeLogGroupsRequest,
                                                                     Pagination::DescribeLogGroupsPaginationTraits<CloudWatchLogsClient>>;
using DescribeLogStreamsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeLogStreamsRequest,
                                                                      Pagination::DescribeLogStreamsPaginationTraits<CloudWatchLogsClient>>;
using DescribeMetricFiltersPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeMetricFiltersRequest,
                                      Pagination::DescribeMetricFiltersPaginationTraits<CloudWatchLogsClient>>;
using DescribeSubscriptionFiltersPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::DescribeSubscriptionFiltersRequest,
                                      Pagination::DescribeSubscriptionFiltersPaginationTraits<CloudWatchLogsClient>>;
using FilterLogEventsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::FilterLogEventsRequest,
                                                                   Pagination::FilterLogEventsPaginationTraits<CloudWatchLogsClient>>;
using GetLogEventsPaginator = Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::GetLogEventsRequest,
                                                                Pagination::GetLogEventsPaginationTraits<CloudWatchLogsClient>>;
using GetScheduledQueryHistoryPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::GetScheduledQueryHistoryRequest,
                                      Pagination::GetScheduledQueryHistoryPaginationTraits<CloudWatchLogsClient>>;
using ListAggregateLogGroupSummariesPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::ListAggregateLogGroupSummariesRequest,
                                      Pagination::ListAggregateLogGroupSummariesPaginationTraits<CloudWatchLogsClient>>;
using ListAnomaliesPaginator = Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::ListAnomaliesRequest,
                                                                 Pagination::ListAnomaliesPaginationTraits<CloudWatchLogsClient>>;
using ListLogAnomalyDetectorsPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::ListLogAnomalyDetectorsRequest,
                                      Pagination::ListLogAnomalyDetectorsPaginationTraits<CloudWatchLogsClient>>;
using ListLogGroupsForQueryPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::ListLogGroupsForQueryRequest,
                                      Pagination::ListLogGroupsForQueryPaginationTraits<CloudWatchLogsClient>>;
using ListScheduledQueriesPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::ListScheduledQueriesRequest,
                                      Pagination::ListScheduledQueriesPaginationTraits<CloudWatchLogsClient>>;
using ListSourcesForS3TableIntegrationPaginator =
    Aws::Utils::Pagination::Paginator<CloudWatchLogsClient, Model::ListSourcesForS3TableIntegrationRequest,
                                      Pagination::ListSourcesForS3TableIntegrationPaginationTraits<CloudWatchLogsClient>>;

}  // namespace CloudWatchLogs
}  // namespace Aws
