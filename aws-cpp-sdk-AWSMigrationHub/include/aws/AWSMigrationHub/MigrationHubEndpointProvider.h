/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MigrationHubClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MigrationHubClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MigrationHubBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MigrationHub Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubEndpointProviderBase =
    EndpointProviderBase<MigrationHubClientConfiguration, MigrationHubBuiltInParameters, MigrationHubClientContextParameters>;

using MigrationHubDefaultEpProviderBase =
    DefaultEndpointProvider<MigrationHubClientConfiguration, MigrationHubBuiltInParameters, MigrationHubClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUB_API MigrationHubEndpointProvider : public MigrationHubDefaultEpProviderBase
{
public:
    using MigrationHubResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MigrationHubEndpointProvider()
      : MigrationHubDefaultEpProviderBase(Aws::MigrationHub::MigrationHubEndpointRules::Rules)
    {}

    ~MigrationHubEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MigrationHub
} // namespace Aws
