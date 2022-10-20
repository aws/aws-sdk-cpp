/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/wisdom/ConnectWisdomServiceEndpointRules.h>


namespace Aws
{
namespace ConnectWisdomService
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ConnectWisdomServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ConnectWisdomServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ConnectWisdomServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ConnectWisdomServiceEndpointProvider,
                                                                        ConnectWisdomServiceBuiltInParameters,
                                                                        ConnectWisdomServiceClientContextParameters>;


class ConnectWisdomServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ConnectWisdomServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ConnectWisdomServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ConnectWisdomService::ConnectWisdomServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ConnectWisdomServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ConnectWisdomServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ConnectWisdomServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ConnectWisdomService
} // namespace Aws
