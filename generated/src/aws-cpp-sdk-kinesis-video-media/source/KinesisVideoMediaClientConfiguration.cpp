/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/KinesisVideoMediaClientConfiguration.h>

namespace Aws {
namespace KinesisVideoMedia {

void KinesisVideoMediaClientConfiguration::LoadKinesisVideoMediaSpecificConfig(const Aws::String& inputProfileName) {
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

KinesisVideoMediaClientConfiguration::KinesisVideoMediaClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisVideoMediaSpecificConfig(this->profileName);
}

KinesisVideoMediaClientConfiguration::KinesisVideoMediaClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisVideoMediaSpecificConfig(Aws::String(inputProfileName));
}

KinesisVideoMediaClientConfiguration::KinesisVideoMediaClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisVideoMediaSpecificConfig(this->profileName);
}

KinesisVideoMediaClientConfiguration::KinesisVideoMediaClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisVideoMediaSpecificConfig(this->profileName);
}

}  // namespace KinesisVideoMedia
}  // namespace Aws
