/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-agent/DevOpsAgentClientConfiguration.h>

namespace Aws {
namespace DevOpsAgent {

void DevOpsAgentClientConfiguration::LoadDevOpsAgentSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const DevOpsAgentClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace DevOpsAgent
}  // namespace Aws
