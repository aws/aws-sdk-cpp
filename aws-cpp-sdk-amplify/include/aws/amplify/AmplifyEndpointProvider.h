/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/amplify/AmplifyEndpointRules.h>


namespace Aws
{
namespace Amplify
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AmplifyClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AmplifyBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AmplifyEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AmplifyEndpointProvider,
                                                                        AmplifyBuiltInParameters,
                                                                        AmplifyClientContextParameters>;


class AmplifyEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AmplifyResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AmplifyEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Amplify::AmplifyEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AmplifyResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AmplifyEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AmplifyEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Amplify
} // namespace Aws
