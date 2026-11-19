/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/IVSClientConfiguration.h>

namespace Aws {
namespace IVS {

void IVSClientConfiguration::LoadIVSSpecificConfig(const Aws::String& inputProfileName) {
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

IVSClientConfiguration::IVSClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadIVSSpecificConfig(this->profileName);
}

IVSClientConfiguration::IVSClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadIVSSpecificConfig(Aws::String(inputProfileName));
}

IVSClientConfiguration::IVSClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadIVSSpecificConfig(this->profileName);
}

IVSClientConfiguration::IVSClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadIVSSpecificConfig(this->profileName);
}

}  // namespace IVS
}  // namespace Aws
