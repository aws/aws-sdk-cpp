/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sso-oidc/SSOOIDCEndpointRules.h>


namespace Aws
{
namespace SSOOIDC
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SSOOIDCClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SSOOIDCBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SSOOIDCEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SSOOIDCEndpointProvider,
                                                                        SSOOIDCBuiltInParameters,
                                                                        SSOOIDCClientContextParameters>;


class SSOOIDCEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SSOOIDCResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SSOOIDCEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SSOOIDC::SSOOIDCEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SSOOIDCResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SSOOIDCEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SSOOIDCEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SSOOIDC
} // namespace Aws
