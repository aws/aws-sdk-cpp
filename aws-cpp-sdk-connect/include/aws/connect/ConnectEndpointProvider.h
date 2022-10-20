/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connect/ConnectEndpointRules.h>


namespace Aws
{
namespace Connect
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ConnectClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ConnectBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ConnectEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ConnectEndpointProvider,
                                                                        ConnectBuiltInParameters,
                                                                        ConnectClientContextParameters>;


class ConnectEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ConnectResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ConnectEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Connect::ConnectEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ConnectResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ConnectEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ConnectEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Connect
} // namespace Aws
