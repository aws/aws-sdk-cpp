/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime/ChimeEndpointRules.h>


namespace Aws
{
namespace Chime
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ChimeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ChimeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ChimeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ChimeEndpointProvider,
                                                                        ChimeBuiltInParameters,
                                                                        ChimeClientContextParameters>;


class ChimeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ChimeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ChimeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Chime::ChimeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ChimeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ChimeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ChimeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Chime
} // namespace Aws
