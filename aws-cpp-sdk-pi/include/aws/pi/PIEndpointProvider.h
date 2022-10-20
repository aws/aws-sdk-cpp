/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pi/PIEndpointRules.h>


namespace Aws
{
namespace PI
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PIClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PIBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PIEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PIEndpointProvider,
                                                                        PIBuiltInParameters,
                                                                        PIClientContextParameters>;


class PIEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PIResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PIEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PI::PIEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PIResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PIEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PIEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PI
} // namespace Aws
