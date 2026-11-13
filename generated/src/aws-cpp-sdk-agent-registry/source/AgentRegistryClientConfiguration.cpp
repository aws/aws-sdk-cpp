/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/AgentRegistryClientConfiguration.h>

namespace Aws {
namespace AgentRegistry {

void AgentRegistryClientConfiguration::LoadAgentRegistrySpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

AgentRegistryClientConfiguration::AgentRegistryClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAgentRegistrySpecificConfig(this->profileName);
}

AgentRegistryClientConfiguration::AgentRegistryClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAgentRegistrySpecificConfig(Aws::String(inputProfileName));
}

AgentRegistryClientConfiguration::AgentRegistryClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAgentRegistrySpecificConfig(this->profileName);
}

AgentRegistryClientConfiguration::AgentRegistryClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAgentRegistrySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const AgentRegistryClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace AgentRegistry
}  // namespace Aws
