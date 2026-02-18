/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace CloudWatchLogs {

class CloudWatchLogsClient;

template <typename DerivedClient>
class CloudWatchLogsPaginationBase {
 public:
  /**
   * Create a paginator for DescribeConfigurationTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationTemplatesRequest,
                                    Pagination::DescribeConfigurationTemplatesPaginationTraits<DerivedClient>>
  DescribeConfigurationTemplatesPaginator(const Model::DescribeConfigurationTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeConfigurationTemplatesRequest,
                                             Pagination::DescribeConfigurationTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDeliveries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDeliveriesRequest,
                                    Pagination::DescribeDeliveriesPaginationTraits<DerivedClient>>
  DescribeDeliveriesPaginator(const Model::DescribeDeliveriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDeliveriesRequest,
                                             Pagination::DescribeDeliveriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDeliveryDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDeliveryDestinationsRequest,
                                    Pagination::DescribeDeliveryDestinationsPaginationTraits<DerivedClient>>
  DescribeDeliveryDestinationsPaginator(const Model::DescribeDeliveryDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDeliveryDestinationsRequest,
                                             Pagination::DescribeDeliveryDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDeliverySources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDeliverySourcesRequest,
                                    Pagination::DescribeDeliverySourcesPaginationTraits<DerivedClient>>
  DescribeDeliverySourcesPaginator(const Model::DescribeDeliverySourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDeliverySourcesRequest,
                                             Pagination::DescribeDeliverySourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDestinationsRequest,
                                    Pagination::DescribeDestinationsPaginationTraits<DerivedClient>>
  DescribeDestinationsPaginator(const Model::DescribeDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDestinationsRequest,
                                             Pagination::DescribeDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLogGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLogGroupsRequest,
                                    Pagination::DescribeLogGroupsPaginationTraits<DerivedClient>>
  DescribeLogGroupsPaginator(const Model::DescribeLogGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLogGroupsRequest,
                                             Pagination::DescribeLogGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeLogStreams operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLogStreamsRequest,
                                    Pagination::DescribeLogStreamsPaginationTraits<DerivedClient>>
  DescribeLogStreamsPaginator(const Model::DescribeLogStreamsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeLogStreamsRequest,
                                             Pagination::DescribeLogStreamsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMetricFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetricFiltersRequest,
                                    Pagination::DescribeMetricFiltersPaginationTraits<DerivedClient>>
  DescribeMetricFiltersPaginator(const Model::DescribeMetricFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMetricFiltersRequest,
                                             Pagination::DescribeMetricFiltersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeSubscriptionFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubscriptionFiltersRequest,
                                    Pagination::DescribeSubscriptionFiltersPaginationTraits<DerivedClient>>
  DescribeSubscriptionFiltersPaginator(const Model::DescribeSubscriptionFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeSubscriptionFiltersRequest,
                                             Pagination::DescribeSubscriptionFiltersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for FilterLogEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::FilterLogEventsRequest,
                                    Pagination::FilterLogEventsPaginationTraits<DerivedClient>>
  FilterLogEventsPaginator(const Model::FilterLogEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::FilterLogEventsRequest,
                                             Pagination::FilterLogEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for GetLogEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLogEventsRequest, Pagination::GetLogEventsPaginationTraits<DerivedClient>>
  GetLogEventsPaginator(const Model::GetLogEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetLogEventsRequest,
                                             Pagination::GetLogEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for GetScheduledQueryHistory operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetScheduledQueryHistoryRequest,
                                    Pagination::GetScheduledQueryHistoryPaginationTraits<DerivedClient>>
  GetScheduledQueryHistoryPaginator(const Model::GetScheduledQueryHistoryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetScheduledQueryHistoryRequest,
                                             Pagination::GetScheduledQueryHistoryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAggregateLogGroupSummaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregateLogGroupSummariesRequest,
                                    Pagination::ListAggregateLogGroupSummariesPaginationTraits<DerivedClient>>
  ListAggregateLogGroupSummariesPaginator(const Model::ListAggregateLogGroupSummariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAggregateLogGroupSummariesRequest,
                                             Pagination::ListAggregateLogGroupSummariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnomalies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomaliesRequest, Pagination::ListAnomaliesPaginationTraits<DerivedClient>>
  ListAnomaliesPaginator(const Model::ListAnomaliesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnomaliesRequest,
                                             Pagination::ListAnomaliesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListLogAnomalyDetectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogAnomalyDetectorsRequest,
                                    Pagination::ListLogAnomalyDetectorsPaginationTraits<DerivedClient>>
  ListLogAnomalyDetectorsPaginator(const Model::ListLogAnomalyDetectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogAnomalyDetectorsRequest,
                                             Pagination::ListLogAnomalyDetectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLogGroupsForQuery operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogGroupsForQueryRequest,
                                    Pagination::ListLogGroupsForQueryPaginationTraits<DerivedClient>>
  ListLogGroupsForQueryPaginator(const Model::ListLogGroupsForQueryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLogGroupsForQueryRequest,
                                             Pagination::ListLogGroupsForQueryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScheduledQueries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledQueriesRequest,
                                    Pagination::ListScheduledQueriesPaginationTraits<DerivedClient>>
  ListScheduledQueriesPaginator(const Model::ListScheduledQueriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScheduledQueriesRequest,
                                             Pagination::ListScheduledQueriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSourcesForS3TableIntegration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourcesForS3TableIntegrationRequest,
                                    Pagination::ListSourcesForS3TableIntegrationPaginationTraits<DerivedClient>>
  ListSourcesForS3TableIntegrationPaginator(const Model::ListSourcesForS3TableIntegrationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourcesForS3TableIntegrationRequest,
                                             Pagination::ListSourcesForS3TableIntegrationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CloudWatchLogs
}  // namespace Aws
