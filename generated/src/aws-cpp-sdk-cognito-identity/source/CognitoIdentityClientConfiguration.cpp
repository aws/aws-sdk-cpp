/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/CognitoIdentityClientConfiguration.h>

namespace Aws {
namespace CognitoIdentity {

void CognitoIdentityClientConfiguration::LoadCognitoIdentitySpecificConfig(const Aws::String& inputProfileName) {
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

CognitoIdentityClientConfiguration::CognitoIdentityClientConfiguration(const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCognitoIdentitySpecificConfig(this->profileName);
}

CognitoIdentityClientConfiguration::CognitoIdentityClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCognitoIdentitySpecificConfig(Aws::String(inputProfileName));
}

CognitoIdentityClientConfiguration::CognitoIdentityClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCognitoIdentitySpecificConfig(this->profileName);
}

CognitoIdentityClientConfiguration::CognitoIdentityClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCognitoIdentitySpecificConfig(this->profileName);
}

}  // namespace CognitoIdentity
}  // namespace Aws
