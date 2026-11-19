/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/FreeTierClientConfiguration.h>

namespace Aws {
namespace FreeTier {

void FreeTierClientConfiguration::LoadFreeTierSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

FreeTierClientConfiguration::FreeTierClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadFreeTierSpecificConfig(this->profileName);
}

FreeTierClientConfiguration::FreeTierClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadFreeTierSpecificConfig(Aws::String(inputProfileName));
}

FreeTierClientConfiguration::FreeTierClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadFreeTierSpecificConfig(this->profileName);
}

FreeTierClientConfiguration::FreeTierClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadFreeTierSpecificConfig(this->profileName);
}

}  // namespace FreeTier
}  // namespace Aws
