/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesEndpointRules.h>


namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MigrationHubRefactorSpacesClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MigrationHubRefactorSpacesBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MigrationHubRefactorSpacesEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MigrationHubRefactorSpacesEndpointProvider,
                                                                        MigrationHubRefactorSpacesBuiltInParameters,
                                                                        MigrationHubRefactorSpacesClientContextParameters>;


class MigrationHubRefactorSpacesEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MigrationHubRefactorSpacesResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MigrationHubRefactorSpacesEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MigrationHubRefactorSpacesResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MigrationHubRefactorSpacesEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MigrationHubRefactorSpacesEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
