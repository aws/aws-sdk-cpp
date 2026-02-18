/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingClient.h>
#include <aws/billing/model/ListBillingViewsPaginationTraits.h>
#include <aws/billing/model/ListSourceViewsForBillingViewPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace Billing {

using ListBillingViewsPaginator = Aws::Utils::Pagination::Paginator<BillingClient, Model::ListBillingViewsRequest,
                                                                    Pagination::ListBillingViewsPaginationTraits<BillingClient>>;
using ListSourceViewsForBillingViewPaginator =
    Aws::Utils::Pagination::Paginator<BillingClient, Model::ListSourceViewsForBillingViewRequest,
                                      Pagination::ListSourceViewsForBillingViewPaginationTraits<BillingClient>>;

}  // namespace Billing
}  // namespace Aws
