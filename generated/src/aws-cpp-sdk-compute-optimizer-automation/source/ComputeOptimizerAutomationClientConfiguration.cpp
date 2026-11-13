/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClientConfiguration.h>

namespace Aws {
namespace ComputeOptimizerAutomation {

void ComputeOptimizerAutomationClientConfiguration::LoadComputeOptimizerAutomationSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ComputeOptimizerAutomationClientConfiguration::ComputeOptimizerAutomationClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadComputeOptimizerAutomationSpecificConfig(this->profileName);
}

ComputeOptimizerAutomationClientConfiguration::ComputeOptimizerAutomationClientConfiguration(const char* inputProfileName,
                                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadComputeOptimizerAutomationSpecificConfig(Aws::String(inputProfileName));
}

ComputeOptimizerAutomationClientConfiguration::ComputeOptimizerAutomationClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadComputeOptimizerAutomationSpecificConfig(this->profileName);
}

ComputeOptimizerAutomationClientConfiguration::ComputeOptimizerAutomationClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadComputeOptimizerAutomationSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ComputeOptimizerAutomationClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
