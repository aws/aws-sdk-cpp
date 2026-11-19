/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/EntityResolutionClientConfiguration.h>

namespace Aws {
namespace EntityResolution {

void EntityResolutionClientConfiguration::LoadEntityResolutionSpecificConfig(const Aws::String& inputProfileName) {
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

EntityResolutionClientConfiguration::EntityResolutionClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEntityResolutionSpecificConfig(this->profileName);
}

EntityResolutionClientConfiguration::EntityResolutionClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEntityResolutionSpecificConfig(Aws::String(inputProfileName));
}

EntityResolutionClientConfiguration::EntityResolutionClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEntityResolutionSpecificConfig(this->profileName);
}

EntityResolutionClientConfiguration::EntityResolutionClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEntityResolutionSpecificConfig(this->profileName);
}

}  // namespace EntityResolution
}  // namespace Aws
