/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cognito-identity/CognitoIdentityEndpointRules.h>


namespace Aws
{
namespace CognitoIdentity
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CognitoIdentityClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CognitoIdentityBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CognitoIdentityEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CognitoIdentityEndpointProvider,
                                                                        CognitoIdentityBuiltInParameters,
                                                                        CognitoIdentityClientContextParameters>;


class CognitoIdentityEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CognitoIdentityResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CognitoIdentityEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CognitoIdentity::CognitoIdentityEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CognitoIdentityResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CognitoIdentityEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CognitoIdentityEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CognitoIdentity
} // namespace Aws
