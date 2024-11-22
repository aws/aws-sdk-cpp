/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorEndpointRules.h>


namespace Aws
{
namespace BCMPricingCalculator
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using BCMPricingCalculatorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using BCMPricingCalculatorClientConfiguration = Aws::Client::GenericClientConfiguration;
using BCMPricingCalculatorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the BCMPricingCalculator Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using BCMPricingCalculatorEndpointProviderBase =
    EndpointProviderBase<BCMPricingCalculatorClientConfiguration, BCMPricingCalculatorBuiltInParameters, BCMPricingCalculatorClientContextParameters>;

using BCMPricingCalculatorDefaultEpProviderBase =
    DefaultEndpointProvider<BCMPricingCalculatorClientConfiguration, BCMPricingCalculatorBuiltInParameters, BCMPricingCalculatorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_BCMPRICINGCALCULATOR_API BCMPricingCalculatorEndpointProvider : public BCMPricingCalculatorDefaultEpProviderBase
{
public:
    using BCMPricingCalculatorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    BCMPricingCalculatorEndpointProvider()
      : BCMPricingCalculatorDefaultEpProviderBase(Aws::BCMPricingCalculator::BCMPricingCalculatorEndpointRules::GetRulesBlob(), Aws::BCMPricingCalculator::BCMPricingCalculatorEndpointRules::RulesBlobSize)
    {}

    ~BCMPricingCalculatorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace BCMPricingCalculator
} // namespace Aws
