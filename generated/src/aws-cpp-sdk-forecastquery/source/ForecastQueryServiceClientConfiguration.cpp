/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/ForecastQueryServiceClientConfiguration.h>

namespace Aws {
namespace ForecastQueryService {

void ForecastQueryServiceClientConfiguration::LoadForecastQueryServiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ForecastQueryServiceClientConfiguration::ForecastQueryServiceClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadForecastQueryServiceSpecificConfig(this->profileName);
}

ForecastQueryServiceClientConfiguration::ForecastQueryServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadForecastQueryServiceSpecificConfig(Aws::String(inputProfileName));
}

ForecastQueryServiceClientConfiguration::ForecastQueryServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                 bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadForecastQueryServiceSpecificConfig(this->profileName);
}

ForecastQueryServiceClientConfiguration::ForecastQueryServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadForecastQueryServiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ForecastQueryServiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ForecastQueryService
}  // namespace Aws
