/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bcm-recommended-actions/model/ListRecommendedActionsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BCMRecommendedActions {

class BCMRecommendedActionsClient;

template <typename DerivedClient>
class BCMRecommendedActionsPaginationBase {
 public:
  /**
   * Create a paginator for ListRecommendedActions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedActionsRequest,
                                    Pagination::ListRecommendedActionsPaginationTraits<DerivedClient>>
  ListRecommendedActionsPaginator(const Model::ListRecommendedActionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendedActionsRequest,
                                             Pagination::ListRecommendedActionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BCMRecommendedActions
}  // namespace Aws
