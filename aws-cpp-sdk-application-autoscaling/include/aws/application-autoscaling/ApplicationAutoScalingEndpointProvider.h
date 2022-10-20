/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/application-autoscaling/ApplicationAutoScalingEndpointRules.h>


namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ApplicationAutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ApplicationAutoScalingBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ApplicationAutoScalingEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ApplicationAutoScalingEndpointProvider,
                                                                        ApplicationAutoScalingBuiltInParameters,
                                                                        ApplicationAutoScalingClientContextParameters>;


class ApplicationAutoScalingEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ApplicationAutoScalingResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ApplicationAutoScalingEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ApplicationAutoScaling::ApplicationAutoScalingEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ApplicationAutoScalingResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ApplicationAutoScalingEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ApplicationAutoScalingEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ApplicationAutoScaling
} // namespace Aws
