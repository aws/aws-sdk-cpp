/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/codeguru-security/model/GetFindingsPaginationTraits.h>
#include <aws/codeguru-security/model/ListFindingsMetricsPaginationTraits.h>
#include <aws/codeguru-security/model/ListScansPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace CodeGuruSecurity {

class CodeGuruSecurityClient;

template <typename DerivedClient>
class CodeGuruSecurityPaginationBase {
 public:
  /**
   * Create a paginator for GetFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsRequest, Pagination::GetFindingsPaginationTraits<DerivedClient>>
  GetFindingsPaginator(const Model::GetFindingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetFindingsRequest,
                                             Pagination::GetFindingsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListFindingsMetrics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsMetricsRequest,
                                    Pagination::ListFindingsMetricsPaginationTraits<DerivedClient>>
  ListFindingsMetricsPaginator(const Model::ListFindingsMetricsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListFindingsMetricsRequest,
                                             Pagination::ListFindingsMetricsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListScans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScansRequest, Pagination::ListScansPaginationTraits<DerivedClient>>
  ListScansPaginator(const Model::ListScansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListScansRequest, Pagination::ListScansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace CodeGuruSecurity
}  // namespace Aws
