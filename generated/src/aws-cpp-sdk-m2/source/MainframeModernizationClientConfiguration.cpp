/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/MainframeModernizationClientConfiguration.h>

namespace Aws {
namespace MainframeModernization {

void MainframeModernizationClientConfiguration::LoadMainframeModernizationSpecificConfig(const Aws::String& inputProfileName) {
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

MainframeModernizationClientConfiguration::MainframeModernizationClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadMainframeModernizationSpecificConfig(this->profileName);
}

MainframeModernizationClientConfiguration::MainframeModernizationClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadMainframeModernizationSpecificConfig(Aws::String(inputProfileName));
}

MainframeModernizationClientConfiguration::MainframeModernizationClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadMainframeModernizationSpecificConfig(this->profileName);
}

MainframeModernizationClientConfiguration::MainframeModernizationClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadMainframeModernizationSpecificConfig(this->profileName);
}

}  // namespace MainframeModernization
}  // namespace Aws
