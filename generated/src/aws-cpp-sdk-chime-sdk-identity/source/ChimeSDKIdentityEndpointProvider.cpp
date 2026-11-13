/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpointProvider.h>
#include <aws/chime-sdk-identity/internal/ChimeSDKIdentityEndpointRules.h>

namespace Aws {
#ifndef AWS_CHIMESDKIDENTITY_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientConfiguration,
                                                   ChimeSDKIdentity::Endpoint::ChimeSDKIdentityBuiltInParameters,
                                                   ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientConfiguration,
                                                  ChimeSDKIdentity::Endpoint::ChimeSDKIdentityBuiltInParameters,
                                                  ChimeSDKIdentity::Endpoint::ChimeSDKIdentityClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ChimeSDKIdentity {
namespace Endpoint {
ChimeSDKIdentityEndpointProvider::ChimeSDKIdentityEndpointProvider()
    : ChimeSDKIdentityDefaultEpProviderBase(Aws::ChimeSDKIdentity::ChimeSDKIdentityEndpointRules::GetRulesBlob(),
                                            Aws::ChimeSDKIdentity::ChimeSDKIdentityEndpointRules::RulesBlobSize) {}

void ChimeSDKIdentityBuiltInParameters::SetFromClientConfiguration(const ChimeSDKIdentityClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChimeSDKIdentityClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChimeSDKIdentityBuiltInParameters::SetFromClientConfiguration(const ChimeSDKIdentityClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChimeSDKIdentityClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChimeSDKIdentityBuiltInParameters::SetServiceSpecificParameters(const ChimeSDKIdentityClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ChimeSDKIdentity
}  // namespace Aws
