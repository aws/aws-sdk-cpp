/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/AgentRegistryControlClientConfiguration.h>

namespace Aws {
namespace AgentRegistryControl {

void AgentRegistryControlClientConfiguration::LoadAgentRegistryControlSpecificConfig(const Aws::String& inputProfileName) {
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

AgentRegistryControlClientConfiguration::AgentRegistryControlClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAgentRegistryControlSpecificConfig(this->profileName);
}

AgentRegistryControlClientConfiguration::AgentRegistryControlClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAgentRegistryControlSpecificConfig(Aws::String(inputProfileName));
}

AgentRegistryControlClientConfiguration::AgentRegistryControlClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAgentRegistryControlSpecificConfig(this->profileName);
}

AgentRegistryControlClientConfiguration::AgentRegistryControlClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAgentRegistryControlSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const AgentRegistryControlClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace AgentRegistryControl
}  // namespace Aws
