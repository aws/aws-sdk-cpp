/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MigrationHubStrategyRecommendationsClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MigrationHubStrategyRecommendationsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MigrationHubStrategyRecommendationsBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MigrationHubStrategyRecommendations Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubStrategyRecommendationsEndpointProviderBase =
    EndpointProviderBase<MigrationHubStrategyRecommendationsClientConfiguration, MigrationHubStrategyRecommendationsBuiltInParameters, MigrationHubStrategyRecommendationsClientContextParameters>;

using MigrationHubStrategyRecommendationsDefaultEpProviderBase =
    DefaultEndpointProvider<MigrationHubStrategyRecommendationsClientConfiguration, MigrationHubStrategyRecommendationsBuiltInParameters, MigrationHubStrategyRecommendationsClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API MigrationHubStrategyRecommendationsEndpointProvider : public MigrationHubStrategyRecommendationsDefaultEpProviderBase
{
public:
    using MigrationHubStrategyRecommendationsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MigrationHubStrategyRecommendationsEndpointProvider()
      : MigrationHubStrategyRecommendationsDefaultEpProviderBase(Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsEndpointRules::Rules)
    {}

    ~MigrationHubStrategyRecommendationsEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
