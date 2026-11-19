/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/CloudWatchEventsClientConfiguration.h>

namespace Aws {
namespace CloudWatchEvents {

void CloudWatchEventsClientConfiguration::LoadCloudWatchEventsSpecificConfig(const Aws::String& inputProfileName) {
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

CloudWatchEventsClientConfiguration::CloudWatchEventsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudWatchEventsSpecificConfig(this->profileName);
}

CloudWatchEventsClientConfiguration::CloudWatchEventsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudWatchEventsSpecificConfig(Aws::String(inputProfileName));
}

CloudWatchEventsClientConfiguration::CloudWatchEventsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudWatchEventsSpecificConfig(this->profileName);
}

CloudWatchEventsClientConfiguration::CloudWatchEventsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudWatchEventsSpecificConfig(this->profileName);
}

}  // namespace CloudWatchEvents
}  // namespace Aws
