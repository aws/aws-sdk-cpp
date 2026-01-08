/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>

namespace Aws {
namespace BedrockDataAutomationRuntime {
struct AWS_BEDROCKDATAAUTOMATIONRUNTIME_API BedrockDataAutomationRuntimeClientConfiguration
    : public Aws::Client::GenericClientConfiguration {
  using BaseClientConfigClass = Aws::Client::GenericClientConfiguration;

  BedrockDataAutomationRuntimeClientConfiguration(const Client::ClientConfigurationInitValues& configuration = {});

  /**
   * Create a configuration based on settings in the aws configuration file for the given profile name.
   * The configuration file location can be set via the environment variable AWS_CONFIG_FILE
   * @param profileName the aws profile name.
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  BedrockDataAutomationRuntimeClientConfiguration(const char* profileName, bool shouldDisableIMDS = false);

  /**
   * Create a configuration with a predefined smart defaults
   * @param useSmartDefaults, required to differentiate c-tors
   * @param defaultMode, default mode to use
   * @param shouldDisableIMDS whether or not to disable IMDS calls.
   */
  BedrockDataAutomationRuntimeClientConfiguration(bool useSmartDefaults, const char* defaultMode = "legacy",
                                                  bool shouldDisableIMDS = false);

  /**
   * Converting constructors for compatibility with a legacy code
   */
  BedrockDataAutomationRuntimeClientConfiguration(const Client::ClientConfiguration& config);

 private:
  void LoadBedrockDataAutomationRuntimeSpecificConfig(const Aws::String& profileName);
};
}  // namespace BedrockDataAutomationRuntime
}  // namespace Aws