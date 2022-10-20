/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ComputeOptimizerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ComputeOptimizerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ComputeOptimizerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ComputeOptimizerEndpointProvider,
                                                                        ComputeOptimizerBuiltInParameters,
                                                                        ComputeOptimizerClientContextParameters>;


class ComputeOptimizerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ComputeOptimizerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ComputeOptimizerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ComputeOptimizer::ComputeOptimizerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ComputeOptimizerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ComputeOptimizerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ComputeOptimizerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ComputeOptimizer
} // namespace Aws
