/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/DLMClientConfiguration.h>

namespace Aws {
namespace DLM {

void DLMClientConfiguration::LoadDLMSpecificConfig(const Aws::String& inputProfileName) {
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

DLMClientConfiguration::DLMClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDLMSpecificConfig(this->profileName);
}

DLMClientConfiguration::DLMClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDLMSpecificConfig(Aws::String(inputProfileName));
}

DLMClientConfiguration::DLMClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDLMSpecificConfig(this->profileName);
}

DLMClientConfiguration::DLMClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig) : BaseClientConfigClass(sharedConfig) {
  LoadDLMSpecificConfig(this->profileName);
}

}  // namespace DLM
}  // namespace Aws
