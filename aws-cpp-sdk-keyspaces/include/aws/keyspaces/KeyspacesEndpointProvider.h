/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/keyspaces/KeyspacesEndpointRules.h>


namespace Aws
{
namespace Keyspaces
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using KeyspacesClientContextParameters = Aws::Endpoint::ClientContextParameters;
using KeyspacesBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class KeyspacesEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<KeyspacesEndpointProvider,
                                                                        KeyspacesBuiltInParameters,
                                                                        KeyspacesClientContextParameters>;


class KeyspacesEndpointProvider : public DefaultEndpointProviderT
{
public:
    using KeyspacesResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    KeyspacesEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Keyspaces::KeyspacesEndpointRules::Rules),
        clientConfiguration(config)
    {}

    KeyspacesResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<KeyspacesEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~KeyspacesEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Keyspaces
} // namespace Aws
