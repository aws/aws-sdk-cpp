/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/autoscaling/AutoScalingEndpointRules.h>


namespace Aws
{
namespace AutoScaling
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AutoScalingBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AutoScalingEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AutoScalingEndpointProvider,
                                                                        AutoScalingBuiltInParameters,
                                                                        AutoScalingClientContextParameters>;


class AutoScalingEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AutoScalingResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AutoScalingEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AutoScaling::AutoScalingEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AutoScalingResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AutoScalingEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AutoScalingEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AutoScaling
} // namespace Aws
