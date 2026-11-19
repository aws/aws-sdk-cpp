/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/DatabaseMigrationServiceEndpointProvider.h>
#include <aws/dms/internal/DatabaseMigrationServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_DATABASEMIGRATIONSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientConfiguration,
                                                   DatabaseMigrationService::Endpoint::DatabaseMigrationServiceBuiltInParameters,
                                                   DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientConfiguration,
                                                  DatabaseMigrationService::Endpoint::DatabaseMigrationServiceBuiltInParameters,
                                                  DatabaseMigrationService::Endpoint::DatabaseMigrationServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DatabaseMigrationService {
namespace Endpoint {
DatabaseMigrationServiceEndpointProvider::DatabaseMigrationServiceEndpointProvider()
    : DatabaseMigrationServiceDefaultEpProviderBase(Aws::DatabaseMigrationService::DatabaseMigrationServiceEndpointRules::GetRulesBlob(),
                                                    Aws::DatabaseMigrationService::DatabaseMigrationServiceEndpointRules::RulesBlobSize) {}

void DatabaseMigrationServiceBuiltInParameters::SetFromClientConfiguration(const DatabaseMigrationServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DatabaseMigrationServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DatabaseMigrationServiceBuiltInParameters::SetFromClientConfiguration(const DatabaseMigrationServiceClientConfiguration& config,
                                                                           const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DatabaseMigrationServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DatabaseMigrationServiceBuiltInParameters::SetServiceSpecificParameters(const DatabaseMigrationServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DatabaseMigrationService
}  // namespace Aws
