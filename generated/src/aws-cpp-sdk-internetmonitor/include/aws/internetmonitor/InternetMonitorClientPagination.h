/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/internetmonitor/InternetMonitorClient.h>
#include <aws/internetmonitor/model/GetQueryResultsPaginationTraits.h>
#include <aws/internetmonitor/model/ListHealthEventsPaginationTraits.h>
#include <aws/internetmonitor/model/ListInternetEventsPaginationTraits.h>
#include <aws/internetmonitor/model/ListMonitorsPaginationTraits.h>

namespace Aws {
namespace InternetMonitor {

using GetQueryResultsPaginator = Aws::Utils::Pagination::Paginator<InternetMonitorClient, Model::GetQueryResultsRequest,
                                                                   Pagination::GetQueryResultsPaginationTraits<InternetMonitorClient>>;
using ListHealthEventsPaginator = Aws::Utils::Pagination::Paginator<InternetMonitorClient, Model::ListHealthEventsRequest,
                                                                    Pagination::ListHealthEventsPaginationTraits<InternetMonitorClient>>;
using ListInternetEventsPaginator =
    Aws::Utils::Pagination::Paginator<InternetMonitorClient, Model::ListInternetEventsRequest,
                                      Pagination::ListInternetEventsPaginationTraits<InternetMonitorClient>>;
using ListMonitorsPaginator = Aws::Utils::Pagination::Paginator<InternetMonitorClient, Model::ListMonitorsRequest,
                                                                Pagination::ListMonitorsPaginationTraits<InternetMonitorClient>>;

}  // namespace InternetMonitor
}  // namespace Aws
