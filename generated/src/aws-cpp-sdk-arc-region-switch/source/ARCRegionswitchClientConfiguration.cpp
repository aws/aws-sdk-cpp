/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/ARCRegionswitchClientConfiguration.h>

namespace Aws {
namespace ARCRegionswitch {

void ARCRegionswitchClientConfiguration::LoadARCRegionswitchSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ARCRegionswitchClientConfiguration::ARCRegionswitchClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadARCRegionswitchSpecificConfig(this->profileName);
}

ARCRegionswitchClientConfiguration::ARCRegionswitchClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadARCRegionswitchSpecificConfig(Aws::String(inputProfileName));
}

ARCRegionswitchClientConfiguration::ARCRegionswitchClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadARCRegionswitchSpecificConfig(this->profileName);
}

ARCRegionswitchClientConfiguration::ARCRegionswitchClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadARCRegionswitchSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ARCRegionswitchClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ARCRegionswitch
}  // namespace Aws
