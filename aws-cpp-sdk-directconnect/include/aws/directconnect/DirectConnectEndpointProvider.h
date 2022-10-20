/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/directconnect/DirectConnectEndpointRules.h>


namespace Aws
{
namespace DirectConnect
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DirectConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DirectConnectBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DirectConnectEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DirectConnectEndpointProvider,
                                                                        DirectConnectBuiltInParameters,
                                                                        DirectConnectClientContextParameters>;


class DirectConnectEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DirectConnectResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DirectConnectEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DirectConnect::DirectConnectEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DirectConnectResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DirectConnectEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DirectConnectEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DirectConnect
} // namespace Aws
