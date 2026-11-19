/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/CloudWatchLogsClientConfiguration.h>

namespace Aws {
namespace CloudWatchLogs {

void CloudWatchLogsClientConfiguration::LoadCloudWatchLogsSpecificConfig(const Aws::String& inputProfileName) {
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

CloudWatchLogsClientConfiguration::CloudWatchLogsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudWatchLogsSpecificConfig(this->profileName);
}

CloudWatchLogsClientConfiguration::CloudWatchLogsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudWatchLogsSpecificConfig(Aws::String(inputProfileName));
}

CloudWatchLogsClientConfiguration::CloudWatchLogsClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudWatchLogsSpecificConfig(this->profileName);
}

CloudWatchLogsClientConfiguration::CloudWatchLogsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudWatchLogsSpecificConfig(this->profileName);
}

}  // namespace CloudWatchLogs
}  // namespace Aws
