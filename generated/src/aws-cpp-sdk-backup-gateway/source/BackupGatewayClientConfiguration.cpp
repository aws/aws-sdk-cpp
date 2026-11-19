/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/BackupGatewayClientConfiguration.h>

namespace Aws {
namespace BackupGateway {

void BackupGatewayClientConfiguration::LoadBackupGatewaySpecificConfig(const Aws::String& inputProfileName) {
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

BackupGatewayClientConfiguration::BackupGatewayClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBackupGatewaySpecificConfig(this->profileName);
}

BackupGatewayClientConfiguration::BackupGatewayClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBackupGatewaySpecificConfig(Aws::String(inputProfileName));
}

BackupGatewayClientConfiguration::BackupGatewayClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBackupGatewaySpecificConfig(this->profileName);
}

BackupGatewayClientConfiguration::BackupGatewayClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBackupGatewaySpecificConfig(this->profileName);
}

}  // namespace BackupGateway
}  // namespace Aws
