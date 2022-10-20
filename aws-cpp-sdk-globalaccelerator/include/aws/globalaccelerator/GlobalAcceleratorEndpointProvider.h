/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/globalaccelerator/GlobalAcceleratorEndpointRules.h>


namespace Aws
{
namespace GlobalAccelerator
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GlobalAcceleratorClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GlobalAcceleratorBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GlobalAcceleratorEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GlobalAcceleratorEndpointProvider,
                                                                        GlobalAcceleratorBuiltInParameters,
                                                                        GlobalAcceleratorClientContextParameters>;


class GlobalAcceleratorEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GlobalAcceleratorResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GlobalAcceleratorEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GlobalAccelerator::GlobalAcceleratorEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GlobalAcceleratorResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GlobalAcceleratorEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GlobalAcceleratorEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GlobalAccelerator
} // namespace Aws
