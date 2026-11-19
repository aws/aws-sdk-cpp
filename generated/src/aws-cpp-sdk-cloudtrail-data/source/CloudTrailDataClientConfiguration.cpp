/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail-data/CloudTrailDataClientConfiguration.h>

namespace Aws {
namespace CloudTrailData {

void CloudTrailDataClientConfiguration::LoadCloudTrailDataSpecificConfig(const Aws::String& inputProfileName) {
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

CloudTrailDataClientConfiguration::CloudTrailDataClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCloudTrailDataSpecificConfig(this->profileName);
}

CloudTrailDataClientConfiguration::CloudTrailDataClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCloudTrailDataSpecificConfig(Aws::String(inputProfileName));
}

CloudTrailDataClientConfiguration::CloudTrailDataClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCloudTrailDataSpecificConfig(this->profileName);
}

CloudTrailDataClientConfiguration::CloudTrailDataClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCloudTrailDataSpecificConfig(this->profileName);
}

}  // namespace CloudTrailData
}  // namespace Aws
