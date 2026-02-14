/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfilerClient.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListProfileTimesPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace CodeGuruProfiler {

using GetFindingsReportAccountSummaryPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruProfilerClient, Model::GetFindingsReportAccountSummaryRequest,
                                      Pagination::GetFindingsReportAccountSummaryPaginationTraits<CodeGuruProfilerClient>>;
using ListFindingsReportsPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruProfilerClient, Model::ListFindingsReportsRequest,
                                      Pagination::ListFindingsReportsPaginationTraits<CodeGuruProfilerClient>>;
using ListProfileTimesPaginator = Aws::Utils::Pagination::Paginator<CodeGuruProfilerClient, Model::ListProfileTimesRequest,
                                                                    Pagination::ListProfileTimesPaginationTraits<CodeGuruProfilerClient>>;
using ListProfilingGroupsPaginator =
    Aws::Utils::Pagination::Paginator<CodeGuruProfilerClient, Model::ListProfilingGroupsRequest,
                                      Pagination::ListProfilingGroupsPaginationTraits<CodeGuruProfilerClient>>;

}  // namespace CodeGuruProfiler
}  // namespace Aws
