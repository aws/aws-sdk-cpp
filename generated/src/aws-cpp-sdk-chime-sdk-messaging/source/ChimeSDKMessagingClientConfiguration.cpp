/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/ChimeSDKMessagingClientConfiguration.h>

namespace Aws {
namespace ChimeSDKMessaging {

void ChimeSDKMessagingClientConfiguration::LoadChimeSDKMessagingSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ChimeSDKMessagingClientConfiguration::ChimeSDKMessagingClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadChimeSDKMessagingSpecificConfig(this->profileName);
}

ChimeSDKMessagingClientConfiguration::ChimeSDKMessagingClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadChimeSDKMessagingSpecificConfig(Aws::String(inputProfileName));
}

ChimeSDKMessagingClientConfiguration::ChimeSDKMessagingClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                           bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadChimeSDKMessagingSpecificConfig(this->profileName);
}

ChimeSDKMessagingClientConfiguration::ChimeSDKMessagingClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadChimeSDKMessagingSpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ChimeSDKMessagingClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ChimeSDKMessaging
}  // namespace Aws
