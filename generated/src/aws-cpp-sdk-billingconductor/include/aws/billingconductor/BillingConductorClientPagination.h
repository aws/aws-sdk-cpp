/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorClient.h>
#include <aws/billingconductor/model/GetBillingGroupCostReportPaginationTraits.h>
#include <aws/billingconductor/model/ListAccountAssociationsPaginationTraits.h>
#include <aws/billingconductor/model/ListBillingGroupCostReportsPaginationTraits.h>
#include <aws/billingconductor/model/ListBillingGroupsPaginationTraits.h>
#include <aws/billingconductor/model/ListCustomLineItemVersionsPaginationTraits.h>
#include <aws/billingconductor/model/ListCustomLineItemsPaginationTraits.h>
#include <aws/billingconductor/model/ListPricingPlansAssociatedWithPricingRulePaginationTraits.h>
#include <aws/billingconductor/model/ListPricingPlansPaginationTraits.h>
#include <aws/billingconductor/model/ListPricingRulesAssociatedToPricingPlanPaginationTraits.h>
#include <aws/billingconductor/model/ListPricingRulesPaginationTraits.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BillingConductor {

using GetBillingGroupCostReportPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::GetBillingGroupCostReportRequest,
                                      Pagination::GetBillingGroupCostReportPaginationTraits<BillingConductorClient>>;
using ListAccountAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListAccountAssociationsRequest,
                                      Pagination::ListAccountAssociationsPaginationTraits<BillingConductorClient>>;
using ListBillingGroupCostReportsPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListBillingGroupCostReportsRequest,
                                      Pagination::ListBillingGroupCostReportsPaginationTraits<BillingConductorClient>>;
using ListBillingGroupsPaginator = Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListBillingGroupsRequest,
                                                                     Pagination::ListBillingGroupsPaginationTraits<BillingConductorClient>>;
using ListCustomLineItemsPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListCustomLineItemsRequest,
                                      Pagination::ListCustomLineItemsPaginationTraits<BillingConductorClient>>;
using ListCustomLineItemVersionsPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListCustomLineItemVersionsRequest,
                                      Pagination::ListCustomLineItemVersionsPaginationTraits<BillingConductorClient>>;
using ListPricingPlansPaginator = Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListPricingPlansRequest,
                                                                    Pagination::ListPricingPlansPaginationTraits<BillingConductorClient>>;
using ListPricingPlansAssociatedWithPricingRulePaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListPricingPlansAssociatedWithPricingRuleRequest,
                                      Pagination::ListPricingPlansAssociatedWithPricingRulePaginationTraits<BillingConductorClient>>;
using ListPricingRulesPaginator = Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListPricingRulesRequest,
                                                                    Pagination::ListPricingRulesPaginationTraits<BillingConductorClient>>;
using ListPricingRulesAssociatedToPricingPlanPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListPricingRulesAssociatedToPricingPlanRequest,
                                      Pagination::ListPricingRulesAssociatedToPricingPlanPaginationTraits<BillingConductorClient>>;
using ListResourcesAssociatedToCustomLineItemPaginator =
    Aws::Utils::Pagination::Paginator<BillingConductorClient, Model::ListResourcesAssociatedToCustomLineItemRequest,
                                      Pagination::ListResourcesAssociatedToCustomLineItemPaginationTraits<BillingConductorClient>>;

}  // namespace BillingConductor
}  // namespace Aws
