/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/AWSMigrationHub/MigrationHubEndpointRules.h>


namespace Aws
{
namespace MigrationHub
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MigrationHubClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MigrationHubBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MigrationHubEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MigrationHubEndpointProvider,
                                                                        MigrationHubBuiltInParameters,
                                                                        MigrationHubClientContextParameters>;


class MigrationHubEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MigrationHubResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MigrationHubEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MigrationHub::MigrationHubEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MigrationHubResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MigrationHubEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MigrationHubEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MigrationHub
} // namespace Aws
