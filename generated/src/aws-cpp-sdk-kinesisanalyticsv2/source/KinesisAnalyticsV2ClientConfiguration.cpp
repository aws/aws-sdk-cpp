/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ClientConfiguration.h>

namespace Aws {
namespace KinesisAnalyticsV2 {

void KinesisAnalyticsV2ClientConfiguration::LoadKinesisAnalyticsV2SpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

KinesisAnalyticsV2ClientConfiguration::KinesisAnalyticsV2ClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisAnalyticsV2SpecificConfig(this->profileName);
}

KinesisAnalyticsV2ClientConfiguration::KinesisAnalyticsV2ClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisAnalyticsV2SpecificConfig(Aws::String(inputProfileName));
}

KinesisAnalyticsV2ClientConfiguration::KinesisAnalyticsV2ClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                             bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisAnalyticsV2SpecificConfig(this->profileName);
}

KinesisAnalyticsV2ClientConfiguration::KinesisAnalyticsV2ClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisAnalyticsV2SpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KinesisAnalyticsV2ClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace KinesisAnalyticsV2
}  // namespace Aws
