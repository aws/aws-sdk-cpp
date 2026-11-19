/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/PrometheusServiceClientConfiguration.h>

namespace Aws {
namespace PrometheusService {

void PrometheusServiceClientConfiguration::LoadPrometheusServiceSpecificConfig(const Aws::String& inputProfileName) {
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

PrometheusServiceClientConfiguration::PrometheusServiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadPrometheusServiceSpecificConfig(this->profileName);
}

PrometheusServiceClientConfiguration::PrometheusServiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadPrometheusServiceSpecificConfig(Aws::String(inputProfileName));
}

PrometheusServiceClientConfiguration::PrometheusServiceClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadPrometheusServiceSpecificConfig(this->profileName);
}

PrometheusServiceClientConfiguration::PrometheusServiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadPrometheusServiceSpecificConfig(this->profileName);
}

}  // namespace PrometheusService
}  // namespace Aws
