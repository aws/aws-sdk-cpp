/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/EKSEndpointProvider.h>
#include <aws/eks/internal/EKSEndpointRules.h>

namespace Aws {
#ifndef AWS_EKS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EKS::Endpoint::EKSClientConfiguration, EKS::Endpoint::EKSBuiltInParameters,
                                                   EKS::Endpoint::EKSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EKS::Endpoint::EKSClientConfiguration, EKS::Endpoint::EKSBuiltInParameters,
                                                  EKS::Endpoint::EKSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EKS {
namespace Endpoint {
EKSEndpointProvider::EKSEndpointProvider()
    : EKSDefaultEpProviderBase(Aws::EKS::EKSEndpointRules::GetRulesBlob(), Aws::EKS::EKSEndpointRules::RulesBlobSize) {}

void EKSBuiltInParameters::SetFromClientConfiguration(const EKSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EKSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EKSBuiltInParameters::SetFromClientConfiguration(const EKSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EKSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EKSBuiltInParameters::SetServiceSpecificParameters(const EKSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EKS
}  // namespace Aws
