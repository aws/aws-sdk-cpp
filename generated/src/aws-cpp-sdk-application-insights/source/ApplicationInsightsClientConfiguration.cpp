/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/ApplicationInsightsClientConfiguration.h>

namespace Aws {
namespace ApplicationInsights {

void ApplicationInsightsClientConfiguration::LoadApplicationInsightsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ApplicationInsightsClientConfiguration::ApplicationInsightsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadApplicationInsightsSpecificConfig(this->profileName);
}

ApplicationInsightsClientConfiguration::ApplicationInsightsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadApplicationInsightsSpecificConfig(Aws::String(inputProfileName));
}

ApplicationInsightsClientConfiguration::ApplicationInsightsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                               bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadApplicationInsightsSpecificConfig(this->profileName);
}

ApplicationInsightsClientConfiguration::ApplicationInsightsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadApplicationInsightsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ApplicationInsightsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ApplicationInsights
}  // namespace Aws
