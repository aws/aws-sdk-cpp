/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/greengrass/GreengrassEndpointRules.h>


namespace Aws
{
namespace Greengrass
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GreengrassClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GreengrassBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GreengrassEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GreengrassEndpointProvider,
                                                                        GreengrassBuiltInParameters,
                                                                        GreengrassClientContextParameters>;


class GreengrassEndpointProvider : public DefaultEndpointProviderT
{
public:
    using GreengrassResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GreengrassEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Greengrass::GreengrassEndpointRules::Rules),
        clientConfiguration(config)
    {}

    GreengrassResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GreengrassEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GreengrassEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Greengrass
} // namespace Aws
