/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecastquery/ForecastQueryServiceClientConfiguration.h>

namespace Aws {
namespace ForecastQueryService {

void ForecastQueryServiceClientConfiguration::LoadForecastQueryServiceSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace ForecastQueryService
}  // namespace Aws
