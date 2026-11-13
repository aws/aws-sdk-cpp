/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/KinesisAnalyticsClientConfiguration.h>

namespace Aws {
namespace KinesisAnalytics {

void KinesisAnalyticsClientConfiguration::LoadKinesisAnalyticsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KinesisAnalyticsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace KinesisAnalytics
}  // namespace Aws
