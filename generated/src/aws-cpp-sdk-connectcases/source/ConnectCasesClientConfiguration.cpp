/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/ConnectCasesClientConfiguration.h>

namespace Aws {
namespace ConnectCases {

void ConnectCasesClientConfiguration::LoadConnectCasesSpecificConfig(const Aws::String& inputProfileName) {
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

ConnectCasesClientConfiguration::ConnectCasesClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadConnectCasesSpecificConfig(this->profileName);
}

ConnectCasesClientConfiguration::ConnectCasesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadConnectCasesSpecificConfig(Aws::String(inputProfileName));
}

ConnectCasesClientConfiguration::ConnectCasesClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadConnectCasesSpecificConfig(this->profileName);
}

ConnectCasesClientConfiguration::ConnectCasesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadConnectCasesSpecificConfig(this->profileName);
}

}  // namespace ConnectCases
}  // namespace Aws
