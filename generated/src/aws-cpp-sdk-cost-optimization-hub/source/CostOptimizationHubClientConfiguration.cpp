/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/CostOptimizationHubClientConfiguration.h>

namespace Aws {
namespace CostOptimizationHub {

void CostOptimizationHubClientConfiguration::LoadCostOptimizationHubSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CostOptimizationHubClientConfiguration::CostOptimizationHubClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCostOptimizationHubSpecificConfig(this->profileName);
}

CostOptimizationHubClientConfiguration::CostOptimizationHubClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCostOptimizationHubSpecificConfig(Aws::String(inputProfileName));
}

CostOptimizationHubClientConfiguration::CostOptimizationHubClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCostOptimizationHubSpecificConfig(this->profileName);
}

CostOptimizationHubClientConfiguration::CostOptimizationHubClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCostOptimizationHubSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const CostOptimizationHubClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace CostOptimizationHub
}  // namespace Aws
