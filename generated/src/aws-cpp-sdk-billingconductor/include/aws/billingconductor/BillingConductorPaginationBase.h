/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

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

#include <memory>

namespace Aws {
namespace BillingConductor {

class BillingConductorClient;

template <typename DerivedClient>
class BillingConductorPaginationBase {
 public:
  /**
   * Create a paginator for GetBillingGroupCostReport operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBillingGroupCostReportRequest,
                                    Pagination::GetBillingGroupCostReportPaginationTraits<DerivedClient>>
  GetBillingGroupCostReportPaginator(const Model::GetBillingGroupCostReportRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetBillingGroupCostReportRequest,
                                             Pagination::GetBillingGroupCostReportPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAccountAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssociationsRequest,
                                    Pagination::ListAccountAssociationsPaginationTraits<DerivedClient>>
  ListAccountAssociationsPaginator(const Model::ListAccountAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssociationsRequest,
                                             Pagination::ListAccountAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillingGroupCostReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingGroupCostReportsRequest,
                                    Pagination::ListBillingGroupCostReportsPaginationTraits<DerivedClient>>
  ListBillingGroupCostReportsPaginator(const Model::ListBillingGroupCostReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingGroupCostReportsRequest,
                                             Pagination::ListBillingGroupCostReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillingGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingGroupsRequest,
                                    Pagination::ListBillingGroupsPaginationTraits<DerivedClient>>
  ListBillingGroupsPaginator(const Model::ListBillingGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillingGroupsRequest,
                                             Pagination::ListBillingGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomLineItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomLineItemsRequest,
                                    Pagination::ListCustomLineItemsPaginationTraits<DerivedClient>>
  ListCustomLineItemsPaginator(const Model::ListCustomLineItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomLineItemsRequest,
                                             Pagination::ListCustomLineItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomLineItemVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomLineItemVersionsRequest,
                                    Pagination::ListCustomLineItemVersionsPaginationTraits<DerivedClient>>
  ListCustomLineItemVersionsPaginator(const Model::ListCustomLineItemVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomLineItemVersionsRequest,
                                             Pagination::ListCustomLineItemVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPricingPlans operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingPlansRequest,
                                    Pagination::ListPricingPlansPaginationTraits<DerivedClient>>
  ListPricingPlansPaginator(const Model::ListPricingPlansRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingPlansRequest,
                                             Pagination::ListPricingPlansPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPricingPlansAssociatedWithPricingRule operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingPlansAssociatedWithPricingRuleRequest,
                                    Pagination::ListPricingPlansAssociatedWithPricingRulePaginationTraits<DerivedClient>>
  ListPricingPlansAssociatedWithPricingRulePaginator(const Model::ListPricingPlansAssociatedWithPricingRuleRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingPlansAssociatedWithPricingRuleRequest,
                                             Pagination::ListPricingPlansAssociatedWithPricingRulePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPricingRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingRulesRequest,
                                    Pagination::ListPricingRulesPaginationTraits<DerivedClient>>
  ListPricingRulesPaginator(const Model::ListPricingRulesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingRulesRequest,
                                             Pagination::ListPricingRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPricingRulesAssociatedToPricingPlan operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingRulesAssociatedToPricingPlanRequest,
                                    Pagination::ListPricingRulesAssociatedToPricingPlanPaginationTraits<DerivedClient>>
  ListPricingRulesAssociatedToPricingPlanPaginator(const Model::ListPricingRulesAssociatedToPricingPlanRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPricingRulesAssociatedToPricingPlanRequest,
                                             Pagination::ListPricingRulesAssociatedToPricingPlanPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourcesAssociatedToCustomLineItem operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesAssociatedToCustomLineItemRequest,
                                    Pagination::ListResourcesAssociatedToCustomLineItemPaginationTraits<DerivedClient>>
  ListResourcesAssociatedToCustomLineItemPaginator(const Model::ListResourcesAssociatedToCustomLineItemRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourcesAssociatedToCustomLineItemRequest,
                                             Pagination::ListResourcesAssociatedToCustomLineItemPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BillingConductor
}  // namespace Aws
