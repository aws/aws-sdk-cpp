/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsEndpointRules.h>


namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MigrationHubStrategyRecommendationsClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MigrationHubStrategyRecommendationsBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MigrationHubStrategyRecommendationsEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MigrationHubStrategyRecommendationsEndpointProvider,
                                                                        MigrationHubStrategyRecommendationsBuiltInParameters,
                                                                        MigrationHubStrategyRecommendationsClientContextParameters>;


class MigrationHubStrategyRecommendationsEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MigrationHubStrategyRecommendationsResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MigrationHubStrategyRecommendationsEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MigrationHubStrategyRecommendationsResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MigrationHubStrategyRecommendationsEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MigrationHubStrategyRecommendationsEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
