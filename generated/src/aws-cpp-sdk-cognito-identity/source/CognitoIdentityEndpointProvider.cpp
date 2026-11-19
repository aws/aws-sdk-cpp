/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/CognitoIdentityEndpointProvider.h>
#include <aws/cognito-identity/internal/CognitoIdentityEndpointRules.h>

namespace Aws {
#ifndef AWS_COGNITOIDENTITY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CognitoIdentity::Endpoint::CognitoIdentityClientConfiguration,
                                                   CognitoIdentity::Endpoint::CognitoIdentityBuiltInParameters,
                                                   CognitoIdentity::Endpoint::CognitoIdentityClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CognitoIdentity::Endpoint::CognitoIdentityClientConfiguration,
                                                  CognitoIdentity::Endpoint::CognitoIdentityBuiltInParameters,
                                                  CognitoIdentity::Endpoint::CognitoIdentityClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CognitoIdentity {
namespace Endpoint {
CognitoIdentityEndpointProvider::CognitoIdentityEndpointProvider()
    : CognitoIdentityDefaultEpProviderBase(Aws::CognitoIdentity::CognitoIdentityEndpointRules::GetRulesBlob(),
                                           Aws::CognitoIdentity::CognitoIdentityEndpointRules::RulesBlobSize) {}

void CognitoIdentityBuiltInParameters::SetFromClientConfiguration(const CognitoIdentityClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CognitoIdentityClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CognitoIdentityBuiltInParameters::SetFromClientConfiguration(const CognitoIdentityClientConfiguration& config,
                                                                  const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CognitoIdentityClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CognitoIdentityBuiltInParameters::SetServiceSpecificParameters(const CognitoIdentityClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CognitoIdentity
}  // namespace Aws
