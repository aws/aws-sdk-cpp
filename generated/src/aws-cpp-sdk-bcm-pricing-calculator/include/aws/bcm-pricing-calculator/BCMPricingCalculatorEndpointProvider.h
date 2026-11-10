/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorClientConfiguration.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace BCMPricingCalculator {
namespace Endpoint {
using BCMPricingCalculatorClientConfiguration = Aws::BCMPricingCalculator::BCMPricingCalculatorClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using BCMPricingCalculatorClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_BCMPRICINGCALCULATOR_API BCMPricingCalculatorBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~BCMPricingCalculatorBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const BCMPricingCalculatorClientConfiguration& config);
  virtual void SetFromClientConfiguration(const BCMPricingCalculatorClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const BCMPricingCalculatorClientConfiguration& config);
};

/**
 * The type for the BCMPricingCalculator Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMPricingCalculatorEndpointProviderBase =
    EndpointProviderBase<BCMPricingCalculatorClientConfiguration, BCMPricingCalculatorBuiltInParameters,
                         BCMPricingCalculatorClientContextParameters>;

using BCMPricingCalculatorDefaultEpProviderBase =
    BDDEndpointProvider<BCMPricingCalculatorClientConfiguration, BCMPricingCalculatorBuiltInParameters,
                        BCMPricingCalculatorClientContextParameters>;

}  // namespace Endpoint
}  // namespace BCMPricingCalculator

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_BCMPRICINGCALCULATOR_EXTERN template class AWS_BCMPRICINGCALCULATOR_API
    Aws::Endpoint::EndpointProviderBase<BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientConfiguration,
                                        BCMPricingCalculator::Endpoint::BCMPricingCalculatorBuiltInParameters,
                                        BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientContextParameters>;

AWS_BCMPRICINGCALCULATOR_EXTERN template class AWS_BCMPRICINGCALCULATOR_API
    Aws::Endpoint::BDDEndpointProvider<BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientConfiguration,
                                       BCMPricingCalculator::Endpoint::BCMPricingCalculatorBuiltInParameters,
                                       BCMPricingCalculator::Endpoint::BCMPricingCalculatorClientContextParameters>;
}  // namespace Endpoint

namespace BCMPricingCalculator {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_BCMPRICINGCALCULATOR_API BCMPricingCalculatorEndpointProvider : public BCMPricingCalculatorDefaultEpProviderBase {
 public:
  using BCMPricingCalculatorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  BCMPricingCalculatorEndpointProvider();

  ~BCMPricingCalculatorEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace BCMPricingCalculator
}  // namespace Aws
