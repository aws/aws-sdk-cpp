/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
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
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DatabaseMigrationServiceClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DatabaseMigrationServiceBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DatabaseMigrationServiceEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DatabaseMigrationServiceEndpointProvider,
                                                                        DatabaseMigrationServiceBuiltInParameters,
                                                                        DatabaseMigrationServiceClientContextParameters>;


class DatabaseMigrationServiceEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DatabaseMigrationServiceResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DatabaseMigrationServiceEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DatabaseMigrationService::DatabaseMigrationServiceEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DatabaseMigrationServiceResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DatabaseMigrationServiceEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DatabaseMigrationServiceEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DatabaseMigrationService
} // namespace Aws
