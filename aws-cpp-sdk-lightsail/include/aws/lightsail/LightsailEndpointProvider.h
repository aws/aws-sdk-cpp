/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lightsail/LightsailEndpointRules.h>


namespace Aws
{
namespace Lightsail
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LightsailClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LightsailBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LightsailEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LightsailEndpointProvider,
                                                                        LightsailBuiltInParameters,
                                                                        LightsailClientContextParameters>;


class LightsailEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LightsailResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LightsailEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Lightsail::LightsailEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LightsailResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LightsailEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LightsailEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Lightsail
} // namespace Aws
