/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/EBSEndpointProvider.h>
#include <aws/ebs/internal/EBSEndpointRules.h>

namespace Aws {
#ifndef AWS_EBS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EBS::Endpoint::EBSClientConfiguration, EBS::Endpoint::EBSBuiltInParameters,
                                                   EBS::Endpoint::EBSClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EBS::Endpoint::EBSClientConfiguration, EBS::Endpoint::EBSBuiltInParameters,
                                                  EBS::Endpoint::EBSClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EBS {
namespace Endpoint {
EBSEndpointProvider::EBSEndpointProvider()
    : EBSDefaultEpProviderBase(Aws::EBS::EBSEndpointRules::GetRulesBlob(), Aws::EBS::EBSEndpointRules::RulesBlobSize) {}

void EBSBuiltInParameters::SetFromClientConfiguration(const EBSClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EBSClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EBSBuiltInParameters::SetFromClientConfiguration(const EBSClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EBSClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EBSBuiltInParameters::SetServiceSpecificParameters(const EBSClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EBS
}  // namespace Aws
