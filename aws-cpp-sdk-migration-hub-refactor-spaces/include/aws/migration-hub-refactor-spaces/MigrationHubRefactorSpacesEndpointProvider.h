/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MigrationHubRefactorSpacesClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MigrationHubRefactorSpacesClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MigrationHubRefactorSpacesBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MigrationHubRefactorSpaces Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubRefactorSpacesEndpointProviderBase =
    EndpointProviderBase<MigrationHubRefactorSpacesClientConfiguration, MigrationHubRefactorSpacesBuiltInParameters, MigrationHubRefactorSpacesClientContextParameters>;

using MigrationHubRefactorSpacesDefaultEpProviderBase =
    DefaultEndpointProvider<MigrationHubRefactorSpacesClientConfiguration, MigrationHubRefactorSpacesBuiltInParameters, MigrationHubRefactorSpacesClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBREFACTORSPACES_API MigrationHubRefactorSpacesEndpointProvider : public MigrationHubRefactorSpacesDefaultEpProviderBase
{
public:
    using MigrationHubRefactorSpacesResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MigrationHubRefactorSpacesEndpointProvider()
      : MigrationHubRefactorSpacesDefaultEpProviderBase(Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesEndpointRules::Rules)
    {}

    ~MigrationHubRefactorSpacesEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
