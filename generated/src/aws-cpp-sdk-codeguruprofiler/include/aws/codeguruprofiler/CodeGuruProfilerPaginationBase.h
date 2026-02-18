/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListProfileTimesPaginationTraits.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeGuruProfiler {

class CodeGuruProfilerClient;

template <typename DerivedClient>
class CodeGuruProfilerPaginationBase {
 public:
  /**
   * Create a paginator for GetFindingsReportAccountSummary operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsReportAccountSummaryRequest,
                                    Pagination::GetFindingsReportAccountSummaryPaginationTraits<DerivedClient>>
  GetFindingsReportAccountSummaryPaginator(const Model::GetFindingsReportAccountSummaryRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsReportAccountSummaryRequest,
                                             Pagination::GetFindingsReportAccountSummaryPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListFindingsReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsReportsRequest,
                                    Pagination::ListFindingsReportsPaginationTraits<DerivedClient>>
  ListFindingsReportsPaginator(const Model::ListFindingsReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsReportsRequest,
                                             Pagination::ListFindingsReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProfileTimes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileTimesRequest,
                                    Pagination::ListProfileTimesPaginationTraits<DerivedClient>>
  ListProfileTimesPaginator(const Model::ListProfileTimesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfileTimesRequest,
                                             Pagination::ListProfileTimesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListProfilingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilingGroupsRequest,
                                    Pagination::ListProfilingGroupsPaginationTraits<DerivedClient>>
  ListProfilingGroupsPaginator(const Model::ListProfilingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProfilingGroupsRequest,
                                             Pagination::ListProfilingGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeGuruProfiler
}  // namespace Aws
