/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/shield/ShieldEndpointRules.h>


namespace Aws
{
namespace Shield
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ShieldClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ShieldBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ShieldEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ShieldEndpointProvider,
                                                                        ShieldBuiltInParameters,
                                                                        ShieldClientContextParameters>;


class ShieldEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ShieldResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ShieldEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Shield::ShieldEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ShieldResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ShieldEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ShieldEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Shield
} // namespace Aws
