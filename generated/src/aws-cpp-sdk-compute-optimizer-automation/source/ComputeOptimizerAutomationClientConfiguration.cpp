/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationClientConfiguration.h>

namespace Aws {
namespace ComputeOptimizerAutomation {

void ComputeOptimizerAutomationClientConfiguration::LoadComputeOptimizerAutomationSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
