/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/health/HealthEndpointRules.h>


namespace Aws
{
namespace Health
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using HealthClientContextParameters = Aws::Endpoint::ClientContextParameters;
using HealthBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class HealthEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<HealthEndpointProvider,
                                                                        HealthBuiltInParameters,
                                                                        HealthClientContextParameters>;


class HealthEndpointProvider : public DefaultEndpointProviderT
{
public:
    using HealthResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    HealthEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Health::HealthEndpointRules::Rules),
        clientConfiguration(config)
    {}

    HealthResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<HealthEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~HealthEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Health
} // namespace Aws
