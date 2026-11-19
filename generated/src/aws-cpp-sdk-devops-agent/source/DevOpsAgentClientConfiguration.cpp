/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-agent/DevOpsAgentClientConfiguration.h>

namespace Aws {
namespace DevOpsAgent {

void DevOpsAgentClientConfiguration::LoadDevOpsAgentSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

DevOpsAgentClientConfiguration::DevOpsAgentClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadDevOpsAgentSpecificConfig(this->profileName);
}

DevOpsAgentClientConfiguration::DevOpsAgentClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadDevOpsAgentSpecificConfig(Aws::String(inputProfileName));
}

DevOpsAgentClientConfiguration::DevOpsAgentClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadDevOpsAgentSpecificConfig(this->profileName);
}

DevOpsAgentClientConfiguration::DevOpsAgentClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadDevOpsAgentSpecificConfig(this->profileName);
}

}  // namespace DevOpsAgent
}  // namespace Aws
