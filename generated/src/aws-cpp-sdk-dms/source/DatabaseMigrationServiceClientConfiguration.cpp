/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/DatabaseMigrationServiceClientConfiguration.h>

namespace Aws {
namespace DatabaseMigrationService {

void DatabaseMigrationServiceClientConfiguration::LoadDatabaseMigrationServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

DatabaseMigrationServiceClientConfiguration::DatabaseMigrationServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDatabaseMigrationServiceSpecificConfig(this->profileName);
}

DatabaseMigrationServiceClientConfiguration::DatabaseMigrationServiceClientConfiguration(const char* inputProfileName,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDatabaseMigrationServiceSpecificConfig(Aws::String(inputProfileName));
}

DatabaseMigrationServiceClientConfiguration::DatabaseMigrationServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDatabaseMigrationServiceSpecificConfig(this->profileName);
}

DatabaseMigrationServiceClientConfiguration::DatabaseMigrationServiceClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDatabaseMigrationServiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const DatabaseMigrationServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace DatabaseMigrationService
}  // namespace Aws
