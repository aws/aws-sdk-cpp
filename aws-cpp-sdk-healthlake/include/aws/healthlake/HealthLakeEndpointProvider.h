/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/healthlake/HealthLakeEndpointRules.h>


namespace Aws
{
namespace HealthLake
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using HealthLakeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using HealthLakeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class HealthLakeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<HealthLakeEndpointProvider,
                                                                        HealthLakeBuiltInParameters,
                                                                        HealthLakeClientContextParameters>;


class HealthLakeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using HealthLakeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    HealthLakeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::HealthLake::HealthLakeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    HealthLakeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<HealthLakeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~HealthLakeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace HealthLake
} // namespace Aws
