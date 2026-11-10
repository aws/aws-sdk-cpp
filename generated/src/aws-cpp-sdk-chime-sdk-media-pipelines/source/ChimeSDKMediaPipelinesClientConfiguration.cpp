/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClientConfiguration.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {

void ChimeSDKMediaPipelinesClientConfiguration::LoadChimeSDKMediaPipelinesSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ChimeSDKMediaPipelinesClientConfiguration::ChimeSDKMediaPipelinesClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadChimeSDKMediaPipelinesSpecificConfig(this->profileName);
}

ChimeSDKMediaPipelinesClientConfiguration::ChimeSDKMediaPipelinesClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadChimeSDKMediaPipelinesSpecificConfig(Aws::String(inputProfileName));
}

ChimeSDKMediaPipelinesClientConfiguration::ChimeSDKMediaPipelinesClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                     bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadChimeSDKMediaPipelinesSpecificConfig(this->profileName);
}

ChimeSDKMediaPipelinesClientConfiguration::ChimeSDKMediaPipelinesClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadChimeSDKMediaPipelinesSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ChimeSDKMediaPipelinesClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
