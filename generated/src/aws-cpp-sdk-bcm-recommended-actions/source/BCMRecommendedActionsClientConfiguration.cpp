/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/BCMRecommendedActionsClientConfiguration.h>

namespace Aws {
namespace BCMRecommendedActions {

void BCMRecommendedActionsClientConfiguration::LoadBCMRecommendedActionsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

BCMRecommendedActionsClientConfiguration::BCMRecommendedActionsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadBCMRecommendedActionsSpecificConfig(this->profileName);
}

BCMRecommendedActionsClientConfiguration::BCMRecommendedActionsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadBCMRecommendedActionsSpecificConfig(Aws::String(inputProfileName));
}

BCMRecommendedActionsClientConfiguration::BCMRecommendedActionsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadBCMRecommendedActionsSpecificConfig(this->profileName);
}

BCMRecommendedActionsClientConfiguration::BCMRecommendedActionsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadBCMRecommendedActionsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const BCMRecommendedActionsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace BCMRecommendedActions
}  // namespace Aws
