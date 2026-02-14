/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitchClient.h>
#include <aws/arc-region-switch/model/GetPlanEvaluationStatusPaginationTraits.h>
#include <aws/arc-region-switch/model/GetPlanExecutionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlanExecutionEventsPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlanExecutionsPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlansInRegionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListPlansPaginationTraits.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksInRegionPaginationTraits.h>
#include <aws/arc-region-switch/model/ListRoute53HealthChecksPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ARCRegionswitch {

using GetPlanEvaluationStatusPaginator =
    Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::GetPlanEvaluationStatusRequest,
                                      Pagination::GetPlanEvaluationStatusPaginationTraits<ARCRegionswitchClient>>;
using GetPlanExecutionPaginator = Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::GetPlanExecutionRequest,
                                                                    Pagination::GetPlanExecutionPaginationTraits<ARCRegionswitchClient>>;
using ListPlanExecutionEventsPaginator =
    Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::ListPlanExecutionEventsRequest,
                                      Pagination::ListPlanExecutionEventsPaginationTraits<ARCRegionswitchClient>>;
using ListPlanExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::ListPlanExecutionsRequest,
                                      Pagination::ListPlanExecutionsPaginationTraits<ARCRegionswitchClient>>;
using ListPlansPaginator = Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::ListPlansRequest,
                                                             Pagination::ListPlansPaginationTraits<ARCRegionswitchClient>>;
using ListPlansInRegionPaginator = Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::ListPlansInRegionRequest,
                                                                     Pagination::ListPlansInRegionPaginationTraits<ARCRegionswitchClient>>;
using ListRoute53HealthChecksPaginator =
    Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::ListRoute53HealthChecksRequest,
                                      Pagination::ListRoute53HealthChecksPaginationTraits<ARCRegionswitchClient>>;
using ListRoute53HealthChecksInRegionPaginator =
    Aws::Utils::Pagination::Paginator<ARCRegionswitchClient, Model::ListRoute53HealthChecksInRegionRequest,
                                      Pagination::ListRoute53HealthChecksInRegionPaginationTraits<ARCRegionswitchClient>>;

}  // namespace ARCRegionswitch
}  // namespace Aws
