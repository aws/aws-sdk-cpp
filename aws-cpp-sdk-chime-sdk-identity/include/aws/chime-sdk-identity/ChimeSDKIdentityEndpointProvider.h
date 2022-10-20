/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointRules.h>


namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ChimeSDKIdentityClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ChimeSDKIdentityBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ChimeSDKIdentityEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ChimeSDKIdentityEndpointProvider,
                                                                        ChimeSDKIdentityBuiltInParameters,
                                                                        ChimeSDKIdentityClientContextParameters>;


class ChimeSDKIdentityEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ChimeSDKIdentityResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ChimeSDKIdentityEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ChimeSDKIdentity::ChimeSDKIdentityEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ChimeSDKIdentityResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ChimeSDKIdentityEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ChimeSDKIdentityEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ChimeSDKIdentity
} // namespace Aws
