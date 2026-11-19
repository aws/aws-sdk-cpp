/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/ChimeSDKVoiceClientConfiguration.h>

namespace Aws {
namespace ChimeSDKVoice {

void ChimeSDKVoiceClientConfiguration::LoadChimeSDKVoiceSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace ChimeSDKVoice
}  // namespace Aws
