/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/EKSAuthEndpointProvider.h>
#include <aws/eks-auth/internal/EKSAuthEndpointRules.h>

namespace Aws {
#ifndef AWS_EKSAUTH_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EKSAuth::Endpoint::EKSAuthClientConfiguration,
                                                   EKSAuth::Endpoint::EKSAuthBuiltInParameters,
                                                   EKSAuth::Endpoint::EKSAuthClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EKSAuth::Endpoint::EKSAuthClientConfiguration,
                                                  EKSAuth::Endpoint::EKSAuthBuiltInParameters,
                                                  EKSAuth::Endpoint::EKSAuthClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EKSAuth {
namespace Endpoint {
EKSAuthEndpointProvider::EKSAuthEndpointProvider()
    : EKSAuthDefaultEpProviderBase(Aws::EKSAuth::EKSAuthEndpointRules::GetRulesBlob(), Aws::EKSAuth::EKSAuthEndpointRules::RulesBlobSize) {}

void EKSAuthBuiltInParameters::SetFromClientConfiguration(const EKSAuthClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EKSAuthClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EKSAuthBuiltInParameters::SetFromClientConfiguration(const EKSAuthClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EKSAuthClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EKSAuthBuiltInParameters::SetServiceSpecificParameters(const EKSAuthClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace EKSAuth
}  // namespace Aws
