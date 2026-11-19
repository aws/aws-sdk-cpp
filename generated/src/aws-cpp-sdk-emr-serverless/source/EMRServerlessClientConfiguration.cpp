/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/EMRServerlessClientConfiguration.h>

namespace Aws {
namespace EMRServerless {

void EMRServerlessClientConfiguration::LoadEMRServerlessSpecificConfig(const Aws::String& inputProfileName) {
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

EMRServerlessClientConfiguration::EMRServerlessClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadEMRServerlessSpecificConfig(this->profileName);
}

EMRServerlessClientConfiguration::EMRServerlessClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadEMRServerlessSpecificConfig(Aws::String(inputProfileName));
}

EMRServerlessClientConfiguration::EMRServerlessClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadEMRServerlessSpecificConfig(this->profileName);
}

EMRServerlessClientConfiguration::EMRServerlessClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadEMRServerlessSpecificConfig(this->profileName);
}

}  // namespace EMRServerless
}  // namespace Aws
