/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/kendra-ranking/KendraRankingClient.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansPaginationTraits.h>

namespace Aws {
namespace KendraRanking {

using ListRescoreExecutionPlansPaginator =
    Aws::Utils::Pagination::Paginator<KendraRankingClient, Model::ListRescoreExecutionPlansRequest,
                                      Pagination::ListRescoreExecutionPlansPaginationTraits<KendraRankingClient>>;

}  // namespace KendraRanking
}  // namespace Aws
