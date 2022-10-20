/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/cognito-sync/CognitoSyncEndpointRules.h>


namespace Aws
{
namespace CognitoSync
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using CognitoSyncClientContextParameters = Aws::Endpoint::ClientContextParameters;
using CognitoSyncBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class CognitoSyncEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<CognitoSyncEndpointProvider,
                                                                        CognitoSyncBuiltInParameters,
                                                                        CognitoSyncClientContextParameters>;


class CognitoSyncEndpointProvider : public DefaultEndpointProviderT
{
public:
    using CognitoSyncResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    CognitoSyncEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::CognitoSync::CognitoSyncEndpointRules::Rules),
        clientConfiguration(config)
    {}

    CognitoSyncResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<CognitoSyncEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~CognitoSyncEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace CognitoSync
} // namespace Aws
