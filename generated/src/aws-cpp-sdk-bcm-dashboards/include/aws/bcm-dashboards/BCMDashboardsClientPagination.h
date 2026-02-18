/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsClient.h>
#include <aws/bcm-dashboards/model/ListDashboardsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BCMDashboards {

using ListDashboardsPaginator = Aws::Utils::Pagination::Paginator<BCMDashboardsClient, Model::ListDashboardsRequest,
                                                                  Pagination::ListDashboardsPaginationTraits<BCMDashboardsClient>>;

}  // namespace BCMDashboards
}  // namespace Aws
