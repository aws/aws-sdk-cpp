/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/ChimeSDKVoiceClientConfiguration.h>

namespace Aws {
namespace ChimeSDKVoice {

void ChimeSDKVoiceClientConfiguration::LoadChimeSDKVoiceSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ChimeSDKVoiceClientConfiguration::ChimeSDKVoiceClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadChimeSDKVoiceSpecificConfig(this->profileName);
}

ChimeSDKVoiceClientConfiguration::ChimeSDKVoiceClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadChimeSDKVoiceSpecificConfig(Aws::String(inputProfileName));
}

ChimeSDKVoiceClientConfiguration::ChimeSDKVoiceClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadChimeSDKVoiceSpecificConfig(this->profileName);
}

ChimeSDKVoiceClientConfiguration::ChimeSDKVoiceClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadChimeSDKVoiceSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ChimeSDKVoiceClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ChimeSDKVoice
}  // namespace Aws
