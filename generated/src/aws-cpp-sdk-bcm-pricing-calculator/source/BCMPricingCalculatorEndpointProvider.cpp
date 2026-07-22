/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorEndpointProvider.h>
#include <aws/bcm-pricing-calculator/internal/BCMPricingCalculatorEndpointRules.h>

namespace Aws {
namespace BCMPricingCalculator {
namespace Endpoint {
BCMPricingCalculatorEndpointProvider::BCMPricingCalculatorEndpointProvider()
    : BCMPricingCalculatorDefaultEpProviderBase(Aws::BCMPricingCalculator::BCMPricingCalculatorEndpointRules::GetRulesBlob(),
                                                Aws::BCMPricingCalculator::BCMPricingCalculatorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace BCMPricingCalculator
}  // namespace Aws
