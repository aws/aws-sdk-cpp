/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>

namespace Aws {
namespace BedrockAgent {
struct AWS_BEDROCKAGENT_API BedrockAgentClientConfiguration : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  BedrockAgentClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  BedrockAgentClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  BedrockAgentClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy", bool shouldDisableIMDS = false);

  /**
   * Create a configuration that starts from shared settings (region, timeouts, proxy, retry, ...),
   * then loads this service's options from the environment and profile.
   * Explicit, so a client is never built from the shared configuration implicitly.
   */
  explicit BedrockAgentClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig);

  /**
   * Use FIPS endpoint in the endpoint calculation. Please check first that the service supports FIPS in a selected region.
   */
  bool useFIPS = false;

  /**
   * Use dual stack endpoint in the endpoint calculation. It is your responsibility to verify that the service supports ipv6 in the region
   * you select.
   */
  bool useDualStack = false;

 private:
  void LoadBedrockAgentSpecificConfig(const Aws::String& profileName);
};

/**
 * Values of this service's supported options that the client hands to core.
 */
AWS_BEDROCKAGENT_API Aws::Client::ServiceClientOptions GetServiceClientOptions(const BedrockAgentClientConfiguration& config);
}  // namespace BedrockAgent
}  // namespace Aws