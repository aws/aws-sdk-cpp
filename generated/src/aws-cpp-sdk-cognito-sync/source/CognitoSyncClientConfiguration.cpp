/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/CognitoSyncClientConfiguration.h>

namespace Aws {
namespace CognitoSync {

void CognitoSyncClientConfiguration::LoadCognitoSyncSpecificConfig(const Aws::String& inputProfileName) {
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

CognitoSyncClientConfiguration::CognitoSyncClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCognitoSyncSpecificConfig(this->profileName);
}

CognitoSyncClientConfiguration::CognitoSyncClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCognitoSyncSpecificConfig(Aws::String(inputProfileName));
}

CognitoSyncClientConfiguration::CognitoSyncClientConfiguration(bool useSmartDefaults, const char* defaultMode, bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCognitoSyncSpecificConfig(this->profileName);
}

CognitoSyncClientConfiguration::CognitoSyncClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCognitoSyncSpecificConfig(this->profileName);
}

}  // namespace CognitoSync
}  // namespace Aws
