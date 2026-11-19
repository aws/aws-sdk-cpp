/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/ComputeOptimizerClientConfiguration.h>

namespace Aws {
namespace ComputeOptimizer {

void ComputeOptimizerClientConfiguration::LoadComputeOptimizerSpecificConfig(const Aws::String& inputProfileName) {
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

ComputeOptimizerClientConfiguration::ComputeOptimizerClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadComputeOptimizerSpecificConfig(this->profileName);
}

ComputeOptimizerClientConfiguration::ComputeOptimizerClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadComputeOptimizerSpecificConfig(Aws::String(inputProfileName));
}

ComputeOptimizerClientConfiguration::ComputeOptimizerClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadComputeOptimizerSpecificConfig(this->profileName);
}

ComputeOptimizerClientConfiguration::ComputeOptimizerClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadComputeOptimizerSpecificConfig(this->profileName);
}

}  // namespace ComputeOptimizer
}  // namespace Aws
