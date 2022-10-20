/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointRules.h>


namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ServerlessApplicationRepositoryClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ServerlessApplicationRepositoryBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ServerlessApplicationRepositoryEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ServerlessApplicationRepositoryEndpointProvider,
                                                                        ServerlessApplicationRepositoryBuiltInParameters,
                                                                        ServerlessApplicationRepositoryClientContextParameters>;


class ServerlessApplicationRepositoryEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ServerlessApplicationRepositoryResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ServerlessApplicationRepositoryEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ServerlessApplicationRepository::ServerlessApplicationRepositoryEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ServerlessApplicationRepositoryResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ServerlessApplicationRepositoryEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ServerlessApplicationRepositoryEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ServerlessApplicationRepository
} // namespace Aws
