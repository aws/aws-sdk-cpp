/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/KinesisAnalyticsClientConfiguration.h>

namespace Aws {
namespace KinesisAnalytics {

void KinesisAnalyticsClientConfiguration::LoadKinesisAnalyticsSpecificConfig(const Aws::String& inputProfileName) {
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

KinesisAnalyticsClientConfiguration::KinesisAnalyticsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisAnalyticsSpecificConfig(this->profileName);
}

KinesisAnalyticsClientConfiguration::KinesisAnalyticsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisAnalyticsSpecificConfig(Aws::String(inputProfileName));
}

KinesisAnalyticsClientConfiguration::KinesisAnalyticsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisAnalyticsSpecificConfig(this->profileName);
}

KinesisAnalyticsClientConfiguration::KinesisAnalyticsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisAnalyticsSpecificConfig(this->profileName);
}

}  // namespace KinesisAnalytics
}  // namespace Aws
