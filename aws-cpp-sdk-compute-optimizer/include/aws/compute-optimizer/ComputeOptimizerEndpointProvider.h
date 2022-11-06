/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/compute-optimizer/ComputeOptimizerEndpointRules.h>


namespace Aws
{
namespace ComputeOptimizer
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ComputeOptimizerClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ComputeOptimizerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ComputeOptimizerBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ComputeOptimizer Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ComputeOptimizerEndpointProviderBase =
    EndpointProviderBase<ComputeOptimizerClientConfiguration, ComputeOptimizerBuiltInParameters, ComputeOptimizerClientContextParameters>;

using ComputeOptimizerDefaultEpProviderBase =
    DefaultEndpointProvider<ComputeOptimizerClientConfiguration, ComputeOptimizerBuiltInParameters, ComputeOptimizerClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_COMPUTEOPTIMIZER_API ComputeOptimizerEndpointProvider : public ComputeOptimizerDefaultEpProviderBase
{
public:
    using ComputeOptimizerResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ComputeOptimizerEndpointProvider()
      : ComputeOptimizerDefaultEpProviderBase(Aws::ComputeOptimizer::ComputeOptimizerEndpointRules::Rules)
    {}

    ~ComputeOptimizerEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ComputeOptimizer
} // namespace Aws
