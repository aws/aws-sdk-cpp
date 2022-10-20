/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/securityhub/SecurityHubEndpointRules.h>


namespace Aws
{
namespace SecurityHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SecurityHubClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SecurityHubBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SecurityHubEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SecurityHubEndpointProvider,
                                                                        SecurityHubBuiltInParameters,
                                                                        SecurityHubClientContextParameters>;


class SecurityHubEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SecurityHubResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SecurityHubEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SecurityHub::SecurityHubEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SecurityHubResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SecurityHubEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SecurityHubEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SecurityHub
} // namespace Aws
