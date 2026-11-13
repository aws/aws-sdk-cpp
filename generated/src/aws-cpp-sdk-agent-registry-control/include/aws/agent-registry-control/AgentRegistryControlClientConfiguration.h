/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>

namespace Aws {
namespace AgentRegistryControl {
struct AWS_AGENTREGISTRYCONTROL_API AgentRegistryControlClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  AgentRegistryControlClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  AgentRegistryControlClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  AgentRegistryControlClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit AgentRegistryControlClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

 private:
  void LoadAgentRegistryControlSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_AGENTREGISTRYCONTROL_API Aws::Client::ServiceClientOptions GetServiceClientOptions(
    const AgentRegistryControlClientConfiguration& config);
}  // namespace AgentRegistryControl
}  // namespace Aws