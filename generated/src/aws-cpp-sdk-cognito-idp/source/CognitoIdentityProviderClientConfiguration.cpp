/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/CognitoIdentityProviderClientConfiguration.h>

namespace Aws {
namespace CognitoIdentityProvider {

void CognitoIdentityProviderClientConfiguration::LoadCognitoIdentityProviderSpecificConfig(const Aws::String& inputProfileName) {
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

CognitoIdentityProviderClientConfiguration::CognitoIdentityProviderClientConfiguration(
    const Aws::Client::ClientConfigurationInitValues& configuration)
    : BaseClientConfigClass(configuration) {
  LoadCognitoIdentityProviderSpecificConfig(this->profileName);
}

CognitoIdentityProviderClientConfiguration::CognitoIdentityProviderClientConfiguration(const char* inputProfileName, bool shouldDisableIMDS)
    : BaseClientConfigClass(inputProfileName, shouldDisableIMDS) {
  LoadCognitoIdentityProviderSpecificConfig(Aws::String(inputProfileName));
}

CognitoIdentityProviderClientConfiguration::CognitoIdentityProviderClientConfiguration(bool useSmartDefaults, const char* defaultMode,
                                                                                       bool shouldDisableIMDS)
    : BaseClientConfigClass(useSmartDefaults, defaultMode, shouldDisableIMDS) {
  LoadCognitoIdentityProviderSpecificConfig(this->profileName);
}

CognitoIdentityProviderClientConfiguration::CognitoIdentityProviderClientConfiguration(const Aws::Client::ClientConfiguration& sharedConfig)
    : BaseClientConfigClass(sharedConfig) {
  LoadCognitoIdentityProviderSpecificConfig(this->profileName);
}

}  // namespace CognitoIdentityProvider
}  // namespace Aws
