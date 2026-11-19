/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/DevOpsGuruClientConfiguration.h>

namespace Aws {
namespace DevOpsGuru {

void DevOpsGuruClientConfiguration::LoadDevOpsGuruSpecificConfig(const Aws::String& inputProfileName) {
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

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDevOpsGuruSpecificConfig(this->profileName);
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDevOpsGuruSpecificConfig(Aws::String(inputProfileName));
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDevOpsGuruSpecificConfig(this->profileName);
}

DevOpsGuruClientConfiguration::DevOpsGuruClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDevOpsGuruSpecificConfig(this->profileName);
}

}  // namespace DevOpsGuru
}  // namespace Aws
