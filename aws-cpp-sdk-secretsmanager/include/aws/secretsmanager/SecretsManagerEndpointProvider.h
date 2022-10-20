/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/secretsmanager/SecretsManagerEndpointRules.h>


namespace Aws
{
namespace SecretsManager
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SecretsManagerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SecretsManagerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SecretsManagerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SecretsManagerEndpointProvider,
                                                                        SecretsManagerBuiltInParameters,
                                                                        SecretsManagerClientContextParameters>;


class SecretsManagerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SecretsManagerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SecretsManagerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SecretsManager::SecretsManagerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SecretsManagerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SecretsManagerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SecretsManagerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SecretsManager
} // namespace Aws
