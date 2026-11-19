/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/CognitoIdentityProviderEndpointProvider.h>
#include <aws/cognito-idp/internal/CognitoIdentityProviderEndpointRules.h>

namespace Aws {
#ifndef AWS_COGNITOIDENTITYPROVIDER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientConfiguration,
                                                   CognitoIdentityProvider::Endpoint::CognitoIdentityProviderBuiltInParameters,
                                                   CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientConfiguration,
                                                  CognitoIdentityProvider::Endpoint::CognitoIdentityProviderBuiltInParameters,
                                                  CognitoIdentityProvider::Endpoint::CognitoIdentityProviderClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CognitoIdentityProvider {
namespace Endpoint {
CognitoIdentityProviderEndpointProvider::CognitoIdentityProviderEndpointProvider()
    : CognitoIdentityProviderDefaultEpProviderBase(Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::GetRulesBlob(),
                                                   Aws::CognitoIdentityProvider::CognitoIdentityProviderEndpointRules::RulesBlobSize) {}

void CognitoIdentityProviderBuiltInParameters::SetFromClientConfiguration(const CognitoIdentityProviderClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CognitoIdentityProviderClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CognitoIdentityProviderBuiltInParameters::SetFromClientConfiguration(const CognitoIdentityProviderClientConfiguration& config,
                                                                          const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CognitoIdentityProviderClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CognitoIdentityProviderBuiltInParameters::SetServiceSpecificParameters(const CognitoIdentityProviderClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CognitoIdentityProvider
}  // namespace Aws
