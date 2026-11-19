/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam-toolbox/IAMToolboxClientConfiguration.h>

namespace Aws {
namespace IAMToolbox {

void IAMToolboxClientConfiguration::LoadIAMToolboxSpecificConfig(const Aws::String& inputProfileName) {
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

IAMToolboxClientConfiguration::IAMToolboxClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIAMToolboxSpecificConfig(this->profileName);
}

IAMToolboxClientConfiguration::IAMToolboxClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIAMToolboxSpecificConfig(Aws::String(inputProfileName));
}

IAMToolboxClientConfiguration::IAMToolboxClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIAMToolboxSpecificConfig(this->profileName);
}

IAMToolboxClientConfiguration::IAMToolboxClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadIAMToolboxSpecificConfig(this->profileName);
}

}  // namespace IAMToolbox
}  // namespace Aws
