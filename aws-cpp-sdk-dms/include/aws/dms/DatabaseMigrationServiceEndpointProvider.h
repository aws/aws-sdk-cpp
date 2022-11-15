/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dms/DatabaseMigrationServiceEndpointRules.h>


namespace Aws
{
namespace DatabaseMigrationService
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using DatabaseMigrationServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;

using DatabaseMigrationServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using DatabaseMigrationServiceBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the DatabaseMigrationService Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using DatabaseMigrationServiceEndpointProviderBase =
    EndpointProviderBase<DatabaseMigrationServiceClientConfiguration, DatabaseMigrationServiceBuiltInParameters, DatabaseMigrationServiceClientContextParameters>;

using DatabaseMigrationServiceDefaultEpProviderBase =
    DefaultEndpointProvider<DatabaseMigrationServiceClientConfiguration, DatabaseMigrationServiceBuiltInParameters, DatabaseMigrationServiceClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_DATABASEMIGRATIONSERVICE_API DatabaseMigrationServiceEndpointProvider : public DatabaseMigrationServiceDefaultEpProviderBase
{
public:
    using DatabaseMigrationServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    DatabaseMigrationServiceEndpointProvider()
      : DatabaseMigrationServiceDefaultEpProviderBase(Aws::DatabaseMigrationService::DatabaseMigrationServiceEndpointRules::Rules)
    {}

    ~DatabaseMigrationServiceEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace DatabaseMigrationService
} // namespace Aws
