/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/internetmonitor/model/GetQueryResultsPaginationTraits.h>
#include <aws/internetmonitor/model/ListHealthEventsPaginationTraits.h>
#include <aws/internetmonitor/model/ListInternetEventsPaginationTraits.h>
#include <aws/internetmonitor/model/ListMonitorsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace InternetMonitor {

class InternetMonitorClient;

template <typename DerivedClient>
class InternetMonitorPaginationBase {
 public:
  /**
   * Create a paginator for GetQueryResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                    Pagination::GetQueryResultsPaginationTraits<DerivedClient>>
  GetQueryResultsPaginator(const Model::GetQueryResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetQueryResultsRequest,
                                             Pagination::GetQueryResultsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListHealthEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHealthEventsRequest,
                                    Pagination::ListHealthEventsPaginationTraits<DerivedClient>>
  ListHealthEventsPaginator(const Model::ListHealthEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHealthEventsRequest,
                                             Pagination::ListHealthEventsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListInternetEvents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInternetEventsRequest,
                                    Pagination::ListInternetEventsPaginationTraits<DerivedClient>>
  ListInternetEventsPaginator(const Model::ListInternetEventsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInternetEventsRequest,
                                             Pagination::ListInternetEventsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMonitors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest, Pagination::ListMonitorsPaginationTraits<DerivedClient>>
  ListMonitorsPaginator(const Model::ListMonitorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMonitorsRequest,
                                             Pagination::ListMonitorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace InternetMonitor
}  // namespace Aws
