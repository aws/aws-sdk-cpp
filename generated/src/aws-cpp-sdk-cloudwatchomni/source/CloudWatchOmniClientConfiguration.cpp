/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/CloudWatchOmniClientConfiguration.h>

namespace Aws {
namespace CloudWatchOmni {

void CloudWatchOmniClientConfiguration::LoadCloudWatchOmniSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::ClientConfiguration::LoadConfigFromEnvOrProfile("AWS_USE_FIPS_ENDPOINT", this->profileName, "use_fips_endpoint",
                                                                         {"true", "false"}, "false") == "true";
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

CloudWatchOmniClientConfiguration::CloudWatchOmniClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudWatchOmniSpecificConfig(this->profileName);
}

CloudWatchOmniClientConfiguration::CloudWatchOmniClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudWatchOmniSpecificConfig(Aws::String(inputProfileName));
}

CloudWatchOmniClientConfiguration::CloudWatchOmniClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudWatchOmniSpecificConfig(this->profileName);
}

CloudWatchOmniClientConfiguration::CloudWatchOmniClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudWatchOmniSpecificConfig(this->profileName);
}

}  // namespace CloudWatchOmni
}  // namespace Aws
