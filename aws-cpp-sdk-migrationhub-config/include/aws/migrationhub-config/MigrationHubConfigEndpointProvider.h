/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/migrationhub-config/MigrationHubConfigEndpointRules.h>


namespace Aws
{
namespace MigrationHubConfig
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MigrationHubConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MigrationHubConfigBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MigrationHubConfigEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MigrationHubConfigEndpointProvider,
                                                                        MigrationHubConfigBuiltInParameters,
                                                                        MigrationHubConfigClientContextParameters>;


class MigrationHubConfigEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MigrationHubConfigResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MigrationHubConfigEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MigrationHubConfig::MigrationHubConfigEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MigrationHubConfigResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MigrationHubConfigEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MigrationHubConfigEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MigrationHubConfig
} // namespace Aws
