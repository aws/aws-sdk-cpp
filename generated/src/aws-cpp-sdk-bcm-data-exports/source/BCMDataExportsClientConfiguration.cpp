/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/BCMDataExportsClientConfiguration.h>

namespace Aws {
namespace BCMDataExports {

void BCMDataExportsClientConfiguration::LoadBCMDataExportsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

BCMDataExportsClientConfiguration::BCMDataExportsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBCMDataExportsSpecificConfig(this->profileName);
}

BCMDataExportsClientConfiguration::BCMDataExportsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBCMDataExportsSpecificConfig(Aws::String(inputProfileName));
}

BCMDataExportsClientConfiguration::BCMDataExportsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBCMDataExportsSpecificConfig(this->profileName);
}

BCMDataExportsClientConfiguration::BCMDataExportsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBCMDataExportsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BCMDataExportsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace BCMDataExports
}  // namespace Aws
