/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-media/KinesisVideoMediaClientConfiguration.h>

namespace Aws {
namespace KinesisVideoMedia {

void KinesisVideoMediaClientConfiguration::LoadKinesisVideoMediaSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KinesisVideoMediaClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace KinesisVideoMedia
}  // namespace Aws
