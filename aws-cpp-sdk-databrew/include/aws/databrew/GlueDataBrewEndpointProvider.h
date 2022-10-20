/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/databrew/GlueDataBrewEndpointRules.h>


namespace Aws
{
namespace GlueDataBrew
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GlueDataBrewClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GlueDataBrewBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GlueDataBrewEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GlueDataBrewEndpointProvider,
                                                                        GlueDataBrewBuiltInParameters,
                                                                        GlueDataBrewClientContextParameters>;


class GlueDataBrewEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GlueDataBrewResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GlueDataBrewEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GlueDataBrew::GlueDataBrewEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GlueDataBrewResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GlueDataBrewEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GlueDataBrewEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GlueDataBrew
} // namespace Aws
