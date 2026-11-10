/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/ChimeSDKIdentityClientConfiguration.h>

namespace Aws {
namespace ChimeSDKIdentity {

void ChimeSDKIdentityClientConfiguration::LoadChimeSDKIdentitySpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
#if defined(_MSC_VER)
  (&reinterpret_cast<const int&>(inputProfileName));
#else
  (void)(inputProfileName);
#endif
}

ChimeSDKIdentityClientConfiguration::ChimeSDKIdentityClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadChimeSDKIdentitySpecificConfig(this->profileName);
}

ChimeSDKIdentityClientConfiguration::ChimeSDKIdentityClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadChimeSDKIdentitySpecificConfig(Aws::String(inputProfileName));
}

ChimeSDKIdentityClientConfiguration::ChimeSDKIdentityClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                         bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadChimeSDKIdentitySpecificConfig(this->profileName);
}

ChimeSDKIdentityClientConfiguration::ChimeSDKIdentityClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadChimeSDKIdentitySpecificConfig(this->profileName);
}

Aws::Client::ServiceClientOptions GetServiceClientOptions(const ChimeSDKIdentityClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace ChimeSDKIdentity
}  // namespace Aws
