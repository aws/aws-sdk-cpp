/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/BackupSearchClientConfiguration.h>

namespace Aws {
namespace BackupSearch {

void BackupSearchClientConfiguration::LoadBackupSearchSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

BackupSearchClientConfiguration::BackupSearchClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBackupSearchSpecificConfig(this->profileName);
}

BackupSearchClientConfiguration::BackupSearchClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBackupSearchSpecificConfig(Aws::String(inputProfileName));
}

BackupSearchClientConfiguration::BackupSearchClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBackupSearchSpecificConfig(this->profileName);
}

BackupSearchClientConfiguration::BackupSearchClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBackupSearchSpecificConfig(this->profileName);
}

}  // namespace BackupSearch
}  // namespace Aws
