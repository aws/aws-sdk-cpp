/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bcm-pricing-calculator/model/ListBillEstimateCommitmentsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputCommitmentModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputUsageModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateLineItemsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimatesPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioCommitmentModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioUsageModificationsPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenariosPaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimateUsagePaginationTraits.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BCMPricingCalculator {

class BCMPricingCalculatorClient;

template <typename DerivedClient>
class BCMPricingCalculatorPaginationBase {
 public:
  /**
   * Create a paginator for ListBillEstimateCommitments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateCommitmentsRequest,
                                    Pagination::ListBillEstimateCommitmentsPaginationTraits<DerivedClient>>
  ListBillEstimateCommitmentsPaginator(const Model::ListBillEstimateCommitmentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateCommitmentsRequest,
                                             Pagination::ListBillEstimateCommitmentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillEstimateInputCommitmentModifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateInputCommitmentModificationsRequest,
                                    Pagination::ListBillEstimateInputCommitmentModificationsPaginationTraits<DerivedClient>>
  ListBillEstimateInputCommitmentModificationsPaginator(const Model::ListBillEstimateInputCommitmentModificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateInputCommitmentModificationsRequest,
                                             Pagination::ListBillEstimateInputCommitmentModificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillEstimateInputUsageModifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateInputUsageModificationsRequest,
                                    Pagination::ListBillEstimateInputUsageModificationsPaginationTraits<DerivedClient>>
  ListBillEstimateInputUsageModificationsPaginator(const Model::ListBillEstimateInputUsageModificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateInputUsageModificationsRequest,
                                             Pagination::ListBillEstimateInputUsageModificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillEstimateLineItems operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateLineItemsRequest,
                                    Pagination::ListBillEstimateLineItemsPaginationTraits<DerivedClient>>
  ListBillEstimateLineItemsPaginator(const Model::ListBillEstimateLineItemsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimateLineItemsRequest,
                                             Pagination::ListBillEstimateLineItemsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillEstimates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimatesRequest,
                                    Pagination::ListBillEstimatesPaginationTraits<DerivedClient>>
  ListBillEstimatesPaginator(const Model::ListBillEstimatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillEstimatesRequest,
                                             Pagination::ListBillEstimatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillScenarioCommitmentModifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillScenarioCommitmentModificationsRequest,
                                    Pagination::ListBillScenarioCommitmentModificationsPaginationTraits<DerivedClient>>
  ListBillScenarioCommitmentModificationsPaginator(const Model::ListBillScenarioCommitmentModificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillScenarioCommitmentModificationsRequest,
                                             Pagination::ListBillScenarioCommitmentModificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillScenarios operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillScenariosRequest,
                                    Pagination::ListBillScenariosPaginationTraits<DerivedClient>>
  ListBillScenariosPaginator(const Model::ListBillScenariosRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillScenariosRequest,
                                             Pagination::ListBillScenariosPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBillScenarioUsageModifications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillScenarioUsageModificationsRequest,
                                    Pagination::ListBillScenarioUsageModificationsPaginationTraits<DerivedClient>>
  ListBillScenarioUsageModificationsPaginator(const Model::ListBillScenarioUsageModificationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBillScenarioUsageModificationsRequest,
                                             Pagination::ListBillScenarioUsageModificationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkloadEstimates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadEstimatesRequest,
                                    Pagination::ListWorkloadEstimatesPaginationTraits<DerivedClient>>
  ListWorkloadEstimatesPaginator(const Model::ListWorkloadEstimatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadEstimatesRequest,
                                             Pagination::ListWorkloadEstimatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkloadEstimateUsage operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadEstimateUsageRequest,
                                    Pagination::ListWorkloadEstimateUsagePaginationTraits<DerivedClient>>
  ListWorkloadEstimateUsagePaginator(const Model::ListWorkloadEstimateUsageRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadEstimateUsageRequest,
                                             Pagination::ListWorkloadEstimateUsagePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BCMPricingCalculator
}  // namespace Aws
