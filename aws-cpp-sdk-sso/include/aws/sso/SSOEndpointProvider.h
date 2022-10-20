/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sso/SSOEndpointRules.h>


namespace Aws
{
namespace SSO
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SSOClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SSOBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SSOEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SSOEndpointProvider,
                                                                        SSOBuiltInParameters,
                                                                        SSOClientContextParameters>;


class SSOEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SSOResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SSOEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SSO::SSOEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SSOResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SSOEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SSOEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SSO
} // namespace Aws
