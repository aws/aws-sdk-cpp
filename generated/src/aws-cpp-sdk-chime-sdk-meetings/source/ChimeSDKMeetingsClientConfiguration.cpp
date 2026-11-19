/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsClientConfiguration.h>

namespace Aws {
namespace ChimeSDKMeetings {

void ChimeSDKMeetingsClientConfiguration::LoadChimeSDKMeetingsSpecificConfig(const Aws::String& inputProfileName) {
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

}  // namespace ChimeSDKMeetings
}  // namespace Aws
