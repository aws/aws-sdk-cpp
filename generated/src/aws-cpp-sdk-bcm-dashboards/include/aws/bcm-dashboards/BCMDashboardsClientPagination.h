/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsClient.h>
#include <aws/bcm-dashboards/model/ListDashboardsPaginationTraits.h>
#include <aws/bcm-dashboards/model/ListScheduledReportsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BCMDashboards {

using ListDashboardsPaginator = Aws::Utils::Pagination::Paginator<BCMDashboardsClient, Model::ListDashboardsRequest,
                                                                  Pagination::ListDashboardsPaginationTraits<BCMDashboardsClient>>;
using ListScheduledReportsPaginator =
    Aws::Utils::Pagination::Paginator<BCMDashboardsClient, Model::ListScheduledReportsRequest,
                                      Pagination::ListScheduledReportsPaginationTraits<BCMDashboardsClient>>;

}  // namespace BCMDashboards
}  // namespace Aws
