/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using MigrationHubConfigClientContextParameters = Aws::Endpoint::ClientContextParameters;

using MigrationHubConfigClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using MigrationHubConfigBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the MigrationHubConfig Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using MigrationHubConfigEndpointProviderBase =
    EndpointProviderBase<MigrationHubConfigClientConfiguration, MigrationHubConfigBuiltInParameters, MigrationHubConfigClientContextParameters>;

using MigrationHubConfigDefaultEpProviderBase =
    DefaultEndpointProvider<MigrationHubConfigClientConfiguration, MigrationHubConfigBuiltInParameters, MigrationHubConfigClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_MIGRATIONHUBCONFIG_API MigrationHubConfigEndpointProvider : public MigrationHubConfigDefaultEpProviderBase
{
public:
    using MigrationHubConfigResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    MigrationHubConfigEndpointProvider()
      : MigrationHubConfigDefaultEpProviderBase(Aws::MigrationHubConfig::MigrationHubConfigEndpointRules::Rules)
    {}

    ~MigrationHubConfigEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace MigrationHubConfig
} // namespace Aws
