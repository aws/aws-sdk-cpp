/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActionsClient.h>
#include <aws/bcm-recommended-actions/model/ListRecommendedActionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BCMRecommendedActions {

using ListRecommendedActionsPaginator =
    Aws::Utils::Pagination::Paginator<BCMRecommendedActionsClient, Model::ListRecommendedActionsRequest,
                                      Pagination::ListRecommendedActionsPaginationTraits<BCMRecommendedActionsClient>>;

}  // namespace BCMRecommendedActions
}  // namespace Aws
