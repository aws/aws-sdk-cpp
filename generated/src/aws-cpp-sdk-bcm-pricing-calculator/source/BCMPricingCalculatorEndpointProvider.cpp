/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorEndpointProvider.h>
#include <aws/bcm-pricing-calculator/internal/BCMPricingCalculatorEndpointRules.h>

namespace Aws {
#ifndef AWS_BCMPRICINGCALCULATOR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientConfiguration,
                                                   BCMPricingCalculator::Endpoint::BCMPricingCalculatorBuiltInParameters,
                                                   BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientConfiguration,
                                                  BCMPricingCalculator::Endpoint::BCMPricingCalculatorBuiltInParameters,
                                                  BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BCMPricingCalculator {
namespace Endpoint {
BCMPricingCalculatorEndpointProvider::BCMPricingCalculatorEndpointProvider()
    : BCMPricingCalculatorDefaultEpProviderBase(Aws::BCMPricingCalculator::BCMPricingCalculatorEndpointRules::GetRulesBlob(),
                                                Aws::BCMPricingCalculator::BCMPricingCalculatorEndpointRules::RulesBlobSize) {}

void BCMPricingCalculatorBuiltInParameters::SetFromClientConfiguration(const BCMPricingCalculatorClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BCMPricingCalculatorClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BCMPricingCalculatorBuiltInParameters::SetFromClientConfiguration(const BCMPricingCalculatorClientConfiguration& config,
                                                                       const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BCMPricingCalculatorClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BCMPricingCalculatorBuiltInParameters::SetServiceSpecificParameters(const BCMPricingCalculatorClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace BCMPricingCalculator
}  // namespace Aws
