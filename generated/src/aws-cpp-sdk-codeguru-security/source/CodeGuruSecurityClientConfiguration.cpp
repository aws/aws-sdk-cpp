/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/CodeGuruSecurityClientConfiguration.h>

namespace Aws {
namespace CodeGuruSecurity {

void CodeGuruSecurityClientConfiguration::LoadCodeGuruSecuritySpecificConfig(const Aws::String& inputProfileName) {
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

CodeGuruSecurityClientConfiguration::CodeGuruSecurityClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCodeGuruSecuritySpecificConfig(this->profileName);
}

CodeGuruSecurityClientConfiguration::CodeGuruSecurityClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCodeGuruSecuritySpecificConfig(Aws::String(inputProfileName));
}

CodeGuruSecurityClientConfiguration::CodeGuruSecurityClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCodeGuruSecuritySpecificConfig(this->profileName);
}

CodeGuruSecurityClientConfiguration::CodeGuruSecurityClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCodeGuruSecuritySpecificConfig(this->profileName);
}

}  // namespace CodeGuruSecurity
}  // namespace Aws
