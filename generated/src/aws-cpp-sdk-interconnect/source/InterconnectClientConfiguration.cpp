/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/interconnect/InterconnectClientConfiguration.h>

namespace Aws {
namespace Interconnect {

void InterconnectClientConfiguration::LoadInterconnectSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

InterconnectClientConfiguration::InterconnectClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadInterconnectSpecificConfig(this->profileName);
}

InterconnectClientConfiguration::InterconnectClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadInterconnectSpecificConfig(Aws::String(inputProfileName));
}

InterconnectClientConfiguration::InterconnectClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadInterconnectSpecificConfig(this->profileName);
}

InterconnectClientConfiguration::InterconnectClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadInterconnectSpecificConfig(this->profileName);
}

}  // namespace Interconnect
}  // namespace Aws
