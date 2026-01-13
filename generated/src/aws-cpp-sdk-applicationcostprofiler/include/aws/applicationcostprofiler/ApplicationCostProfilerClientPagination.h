/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfilerClient.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ApplicationCostProfiler {

using ListReportDefinitionsPaginator =
    Aws::Utils::Pagination::Paginator<ApplicationCostProfilerClient, Model::ListReportDefinitionsRequest,
                                      Pagination::ListReportDefinitionsPaginationTraits<ApplicationCostProfilerClient>>;

}  // namespace ApplicationCostProfiler
}  // namespace Aws
