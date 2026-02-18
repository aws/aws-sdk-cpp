/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/billing/model/ListBillingViewsPaginationTraits.h>
#include <aws/billing/model/ListSourceViewsForBillingViewPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Billing {

class BillingClient;

template <typename DerivedClient>
class BillingPaginationBase {
 public:
  /**
   * Create a paginator for ListBillingViews operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingViewsRequest,
                                    Pagination::ListBillingViewsPaginationTraits<DerivedClient>>
  ListBillingViewsPaginator(const Model::ListBillingViewsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingViewsRequest,
                                             Pagination::ListBillingViewsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListSourceViewsForBillingView operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceViewsForBillingViewRequest,
                                    Pagination::ListSourceViewsForBillingViewPaginationTraits<DerivedClient>>
  ListSourceViewsForBillingViewPaginator(const Model::ListSourceViewsForBillingViewRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSourceViewsForBillingViewRequest,
                                             Pagination::ListSourceViewsForBillingViewPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Billing
}  // namespace Aws
