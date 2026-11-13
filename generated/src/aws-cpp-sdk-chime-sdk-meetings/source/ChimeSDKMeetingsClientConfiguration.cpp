/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClientConfiguration.h>

namespace Aws {
namespace ChimeSDKMeetings {

void ChimeSDKMeetingsClientConfiguration::LoadChimeSDKMeetingsSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ChimeSDKMeetingsClientConfiguration::ChimeSDKMeetingsClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadChimeSDKMeetingsSpecificConfig(this->profileName);
}

ChimeSDKMeetingsClientConfiguration::ChimeSDKMeetingsClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadChimeSDKMeetingsSpecificConfig(Aws::String(inputProfileName));
}

ChimeSDKMeetingsClientConfiguration::ChimeSDKMeetingsClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadChimeSDKMeetingsSpecificConfig(this->profileName);
}

ChimeSDKMeetingsClientConfiguration::ChimeSDKMeetingsClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadChimeSDKMeetingsSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ChimeSDKMeetingsClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ChimeSDKMeetings
}  // namespace Aws
