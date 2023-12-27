/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cost-optimization-hub/CostOptimizationHubEndpointRules.h>


namespace Aws
{
namespace CostOptimizationHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using CostOptimizationHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CostOptimizationHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using CostOptimizationHubBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CostOptimizationHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CostOptimizationHubEndpointProviderBase =
    EndpointProviderBase<CostOptimizationHubClientConfiguration, CostOptimizationHubBuiltInParameters, CostOptimizationHubClientContextParameters>;

using CostOptimizationHubDefaultEpProviderBase =
    DefaultEndpointProvider<CostOptimizationHubClientConfiguration, CostOptimizationHubBuiltInParameters, CostOptimizationHubClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COSTOPTIMIZATIONHUB_API CostOptimizationHubEndpointProvider : public CostOptimizationHubDefaultEpProviderBase
{
public:
    using CostOptimizationHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    CostOptimizationHubEndpointProvider()
      : CostOptimizationHubDefaultEpProviderBase(Aws::CostOptimizationHub::CostOptimizationHubEndpointRules::GetRulesBlob(), Aws::CostOptimizationHub::CostOptimizationHubEndpointRules::RulesBlobSize)
    {}

    ~CostOptimizationHubEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace CostOptimizationHub
} // namespace Aws
