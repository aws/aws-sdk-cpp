/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/CognitoIdentityProviderClientConfiguration.h>

namespace Aws {
namespace CognitoIdentityProvider {

void CognitoIdentityProviderClientConfiguration::LoadCognitoIdentityProviderSpecificConfig(const Aws::String& inputProfileName) {
  useFIPS = Aws::Client::LoadUseFIPSFromEnvOrProfile(this->profileName);
  useDualStack = Aws::Client::LoadUseDualStackFromEnvOrProfile(this->profileName);
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

Aws::Client::ServiceClientOptions GetServiceClientOptions(const CognitoIdentityProviderClientConfiguration& config) {
  Aws::Client::ServiceClientOptions options;
  (void)(config);
  return options;
}

}  // namespace CognitoIdentityProvider
}  // namespace Aws
