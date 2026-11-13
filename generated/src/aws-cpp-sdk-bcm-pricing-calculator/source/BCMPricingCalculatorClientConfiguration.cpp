/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorClientConfiguration.h>

namespace Aws {
namespace BCMPricingCalculator {

void BCMPricingCalculatorClientConfiguration::LoadBCMPricingCalculatorSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

BCMPricingCalculatorClientConfiguration::BCMPricingCalculatorClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBCMPricingCalculatorSpecificConfig(this->profileName);
}

BCMPricingCalculatorClientConfiguration::BCMPricingCalculatorClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBCMPricingCalculatorSpecificConfig(Aws::String(inputProfileName));
}

BCMPricingCalculatorClientConfiguration::BCMPricingCalculatorClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBCMPricingCalculatorSpecificConfig(this->profileName);
}

BCMPricingCalculatorClientConfiguration::BCMPricingCalculatorClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBCMPricingCalculatorSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BCMPricingCalculatorClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace BCMPricingCalculator
}  // namespace Aws
