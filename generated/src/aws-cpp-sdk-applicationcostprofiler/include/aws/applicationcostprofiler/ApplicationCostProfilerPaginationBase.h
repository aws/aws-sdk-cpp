/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/applicationcostprofiler/model/ListReportDefinitionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerClient;

template <typename DerivedClient>
class ApplicationCostProfilerPaginationBase {
 public:
  /**
   * Create a paginator for ListReportDefinitions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportDefinitionsRequest,
                                    Pagination::ListReportDefinitionsPaginationTraits<DerivedClient>>
  ListReportDefinitionsPaginator(const Model::ListReportDefinitionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReportDefinitionsRequest,
                                             Pagination::ListReportDefinitionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ApplicationCostProfiler
}  // namespace Aws
