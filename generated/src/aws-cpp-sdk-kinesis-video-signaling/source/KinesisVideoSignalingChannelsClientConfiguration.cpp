/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsClientConfiguration.h>

namespace Aws {
namespace KinesisVideoSignalingChannels {

void KinesisVideoSignalingChannelsClientConfiguration::LoadKinesisVideoSignalingChannelsSpecificConfig(
    const Aws::String& inputProfileName) {
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

KinesisVideoSignalingChannelsClientConfiguration::KinesisVideoSignalingChannelsClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisVideoSignalingChannelsSpecificConfig(this->profileName);
}

KinesisVideoSignalingChannelsClientConfiguration::KinesisVideoSignalingChannelsClientConfiguration(const char* inputProfileName,
                                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisVideoSignalingChannelsSpecificConfig(Aws::String(inputProfileName));
}

KinesisVideoSignalingChannelsClientConfiguration::KinesisVideoSignalingChannelsClientConfiguration(bool useSmartDefaults,
                                                                                                   const char* defaultMode,
                                                                                                   bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisVideoSignalingChannelsSpecificConfig(this->profileName);
}

KinesisVideoSignalingChannelsClientConfiguration::KinesisVideoSignalingChannelsClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisVideoSignalingChannelsSpecificConfig(this->profileName);
}

}  // namespace KinesisVideoSignalingChannels
}  // namespace Aws
