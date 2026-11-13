/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/BackupGatewayClientConfiguration.h>

namespace Aws {
namespace BackupGateway {

void BackupGatewayClientConfiguration::LoadBackupGatewaySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BackupGatewayClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace BackupGateway
}  // namespace Aws
