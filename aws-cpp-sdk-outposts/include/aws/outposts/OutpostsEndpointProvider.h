/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/outposts/OutpostsEndpointRules.h>


namespace Aws
{
namespace Outposts
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using OutpostsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using OutpostsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class OutpostsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<OutpostsEndpointProvider,
                                                                        OutpostsBuiltInParameters,
                                                                        OutpostsClientContextParameters>;


class OutpostsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using OutpostsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    OutpostsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Outposts::OutpostsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    OutpostsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<OutpostsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~OutpostsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Outposts
} // namespace Aws
