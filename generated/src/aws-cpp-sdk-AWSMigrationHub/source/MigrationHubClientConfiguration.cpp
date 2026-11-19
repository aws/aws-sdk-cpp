/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/MigrationHubClientConfiguration.h>

namespace Aws {
namespace MigrationHub {

void MigrationHubClientConfiguration::LoadMigrationHubSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
  useDualStack = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile(
                     "AWS_USE_DUALSTACK_ENDPOINT", this->profileName, "use_dualstack_endpoint", {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

MigrationHubClientConfiguration::MigrationHubClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMigrationHubSpecificConfig(this->profileName);
}

MigrationHubClientConfiguration::MigrationHubClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMigrationHubSpecificConfig(Aws::String(inputProfileName));
}

MigrationHubClientConfiguration::MigrationHubClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMigrationHubSpecificConfig(this->profileName);
}

MigrationHubClientConfiguration::MigrationHubClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMigrationHubSpecificConfig(this->profileName);
}

}  // namespace MigrationHub
}  // namespace Aws
