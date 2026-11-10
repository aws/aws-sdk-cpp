/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-webrtc-storage/KinesisVideoWebRTCStorageClientConfiguration.h>

namespace Aws {
namespace KinesisVideoWebRTCStorage {

void KinesisVideoWebRTCStorageClientConfiguration::LoadKinesisVideoWebRTCStorageSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

KinesisVideoWebRTCStorageClientConfiguration::KinesisVideoWebRTCStorageClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisVideoWebRTCStorageSpecificConfig(this->profileName);
}

KinesisVideoWebRTCStorageClientConfiguration::KinesisVideoWebRTCStorageClientConfiguration(const char* inputProfileName,
                                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisVideoWebRTCStorageSpecificConfig(Aws::String(inputProfileName));
}

KinesisVideoWebRTCStorageClientConfiguration::KinesisVideoWebRTCStorageClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisVideoWebRTCStorageSpecificConfig(this->profileName);
}

KinesisVideoWebRTCStorageClientConfiguration::KinesisVideoWebRTCStorageClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisVideoWebRTCStorageSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KinesisVideoWebRTCStorageClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace KinesisVideoWebRTCStorage
}  // namespace Aws
