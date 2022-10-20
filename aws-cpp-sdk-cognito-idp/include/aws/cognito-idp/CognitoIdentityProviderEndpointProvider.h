/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cognito-idp/CognitoIdentityProviderEndpointRules.h>


namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CognitoIdentityProviderClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CognitoIdentityProviderBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CognitoIdentityProviderEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CognitoIdentityProviderEndpointProvider,
                                                                        CognitoIdentityProviderBuiltInParameters,
                                                                        CognitoIdentityProviderClientContextParameters>;


class CognitoIdentityProviderEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CognitoIdentityProviderResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CognitoIdentityProviderEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CognitoIdentityProviderResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CognitoIdentityProviderEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CognitoIdentityProviderEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CognitoIdentityProvider
} // namespace Aws
