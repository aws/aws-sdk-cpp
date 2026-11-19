/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/DrsClientConfiguration.h>

namespace Aws {
namespace drs {

void DrsClientConfiguration::LoaddrsSpecificConfig(const Aws::String& inputProfileName) {
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

DrsClientConfiguration::DrsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoaddrsSpecificConfig(this->profileName);
}

DrsClientConfiguration::DrsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoaddrsSpecificConfig(Aws::String(inputProfileName));
}

DrsClientConfiguration::DrsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoaddrsSpecificConfig(this->profileName);
}

DrsClientConfiguration::DrsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoaddrsSpecificConfig(this->profileName);
}

}  // namespace drs
}  // namespace Aws
