/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/snowball/SnowballEndpointRules.h>


namespace Aws
{
namespace Snowball
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SnowballClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SnowballBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SnowballEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SnowballEndpointProvider,
                                                                        SnowballBuiltInParameters,
                                                                        SnowballClientContextParameters>;


class SnowballEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SnowballResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SnowballEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Snowball::SnowballEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SnowballResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SnowballEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SnowballEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Snowball
} // namespace Aws
