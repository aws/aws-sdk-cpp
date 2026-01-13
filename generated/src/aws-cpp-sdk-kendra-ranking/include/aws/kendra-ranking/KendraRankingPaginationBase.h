/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansPaginationTraits.h>

#include <memory>

namespace Aws {
namespace KendraRanking {

class KendraRankingClient;

template <typename DerivedClient>
class KendraRankingPaginationBase {
 public:
  /**
   * Create a paginator for ListRescoreExecutionPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRescoreExecutionPlansRequest,
                                    Pagination::ListRescoreExecutionPlansPaginationTraits<DerivedClient>>
  ListRescoreExecutionPlansPaginator(const Model::ListRescoreExecutionPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRescoreExecutionPlansRequest,
                                             Pagination::ListRescoreExecutionPlansPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace KendraRanking
}  // namespace Aws
