/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/migrationhuborchestrator/MigrationHubOrchestratorEndpointRules.h>


namespace Aws
{
namespace MigrationHubOrchestrator
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MigrationHubOrchestratorClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MigrationHubOrchestratorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MigrationHubOrchestratorBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MigrationHubOrchestrator Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubOrchestratorEndpointProviderBase =
    EndpointProviderBase<MigrationHubOrchestratorClientConfiguration, MigrationHubOrchestratorBuiltInParameters, MigrationHubOrchestratorClientContextParameters>;

using MigrationHubOrchestratorDefaultEpProviderBase =
    DefaultEndpointProvider<MigrationHubOrchestratorClientConfiguration, MigrationHubOrchestratorBuiltInParameters, MigrationHubOrchestratorClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBORCHESTRATOR_API MigrationHubOrchestratorEndpointProvider : public MigrationHubOrchestratorDefaultEpProviderBase
{
public:
    using MigrationHubOrchestratorResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MigrationHubOrchestratorEndpointProvider()
      : MigrationHubOrchestratorDefaultEpProviderBase(Aws::MigrationHubOrchestrator::MigrationHubOrchestratorEndpointRules::Rules)
    {}

    ~MigrationHubOrchestratorEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MigrationHubOrchestrator
} // namespace Aws
