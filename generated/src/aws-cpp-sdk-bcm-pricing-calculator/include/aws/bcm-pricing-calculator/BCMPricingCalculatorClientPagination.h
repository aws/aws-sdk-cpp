/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorClient.h>
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

namespace Aws {
namespace BCMPricingCalculator {

using ListBillEstimateCommitmentsPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillEstimateCommitmentsRequest,
                                      Pagination::ListBillEstimateCommitmentsPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillEstimateInputCommitmentModificationsPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillEstimateInputCommitmentModificationsRequest,
                                      Pagination::ListBillEstimateInputCommitmentModificationsPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillEstimateInputUsageModificationsPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillEstimateInputUsageModificationsRequest,
                                      Pagination::ListBillEstimateInputUsageModificationsPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillEstimateLineItemsPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillEstimateLineItemsRequest,
                                      Pagination::ListBillEstimateLineItemsPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillEstimatesPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillEstimatesRequest,
                                      Pagination::ListBillEstimatesPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillScenarioCommitmentModificationsPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillScenarioCommitmentModificationsRequest,
                                      Pagination::ListBillScenarioCommitmentModificationsPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillScenariosPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillScenariosRequest,
                                      Pagination::ListBillScenariosPaginationTraits<BCMPricingCalculatorClient>>;
using ListBillScenarioUsageModificationsPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListBillScenarioUsageModificationsRequest,
                                      Pagination::ListBillScenarioUsageModificationsPaginationTraits<BCMPricingCalculatorClient>>;
using ListWorkloadEstimatesPaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListWorkloadEstimatesRequest,
                                      Pagination::ListWorkloadEstimatesPaginationTraits<BCMPricingCalculatorClient>>;
using ListWorkloadEstimateUsagePaginator =
    Aws::Utils::Pagination::Paginator<BCMPricingCalculatorClient, Model::ListWorkloadEstimateUsageRequest,
                                      Pagination::ListWorkloadEstimateUsagePaginationTraits<BCMPricingCalculatorClient>>;

}  // namespace BCMPricingCalculator
}  // namespace Aws
