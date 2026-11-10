/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClientConfiguration.h>

namespace Aws {
namespace KinesisVideoArchivedMedia {

void KinesisVideoArchivedMediaClientConfiguration::LoadKinesisVideoArchivedMediaSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

KinesisVideoArchivedMediaClientConfiguration::KinesisVideoArchivedMediaClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadKinesisVideoArchivedMediaSpecificConfig(this->profileName);
}

KinesisVideoArchivedMediaClientConfiguration::KinesisVideoArchivedMediaClientConfiguration(const char* inputProfileName,
                                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadKinesisVideoArchivedMediaSpecificConfig(Aws::String(inputProfileName));
}

KinesisVideoArchivedMediaClientConfiguration::KinesisVideoArchivedMediaClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadKinesisVideoArchivedMediaSpecificConfig(this->profileName);
}

KinesisVideoArchivedMediaClientConfiguration::KinesisVideoArchivedMediaClientConfiguration(
    const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadKinesisVideoArchivedMediaSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const KinesisVideoArchivedMediaClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws
