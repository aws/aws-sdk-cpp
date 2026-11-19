/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfigdata/AppConfigDataClientConfiguration.h>

namespace Aws {
namespace AppConfigData {

void AppConfigDataClientConfiguration::LoadAppConfigDataSpecificConfig(const Aws::String& inputProfileName) {
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

AppConfigDataClientConfiguration::AppConfigDataClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadAppConfigDataSpecificConfig(this->profileName);
}

AppConfigDataClientConfiguration::AppConfigDataClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadAppConfigDataSpecificConfig(Aws::String(inputProfileName));
}

AppConfigDataClientConfiguration::AppConfigDataClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadAppConfigDataSpecificConfig(this->profileName);
}

AppConfigDataClientConfiguration::AppConfigDataClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadAppConfigDataSpecificConfig(this->profileName);
}

}  // namespace AppConfigData
}  // namespace Aws
