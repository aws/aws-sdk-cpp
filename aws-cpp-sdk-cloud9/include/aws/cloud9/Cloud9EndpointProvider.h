/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cloud9/Cloud9EndpointRules.h>


namespace Aws
{
namespace Cloud9
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Cloud9ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Cloud9BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Cloud9EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Cloud9EndpointProvider,
                                                                        Cloud9BuiltInParameters,
                                                                        Cloud9ClientContextParameters>;


class Cloud9EndpointProvider : public DefaultEndpointProviderT
{
public:
    using Cloud9ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Cloud9EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Cloud9::Cloud9EndpointRules::Rules),
        clientConfiguration(config)
    {}

    Cloud9ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Cloud9EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Cloud9EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Cloud9
} // namespace Aws
