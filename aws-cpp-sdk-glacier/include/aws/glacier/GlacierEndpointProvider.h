/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/glacier/GlacierEndpointRules.h>


namespace Aws
{
namespace Glacier
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GlacierClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GlacierBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GlacierEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GlacierEndpointProvider,
                                                                        GlacierBuiltInParameters,
                                                                        GlacierClientContextParameters>;


class GlacierEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GlacierResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GlacierEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Glacier::GlacierEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GlacierResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GlacierEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GlacierEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Glacier
} // namespace Aws
