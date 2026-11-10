/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/aiops/AIOpsEndpointProvider.h>
#include <aws/aiops/internal/AIOpsEndpointRules.h>

namespace Aws {
#ifndef AWS_AIOPS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<AIOps::Endpoint::AIOpsClientConfiguration, AIOps::Endpoint::AIOpsBuiltInParameters,
                                                   AIOps::Endpoint::AIOpsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<AIOps::Endpoint::AIOpsClientConfiguration, AIOps::Endpoint::AIOpsBuiltInParameters,
                                                  AIOps::Endpoint::AIOpsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace AIOps {
namespace Endpoint {
AIOpsEndpointProvider::AIOpsEndpointProvider()
    : AIOpsDefaultEpProviderBase(Aws::AIOps::AIOpsEndpointRules::GetRulesBlob(), Aws::AIOps::AIOpsEndpointRules::RulesBlobSize) {}

void AIOpsBuiltInParameters::SetFromClientConfiguration(const AIOpsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AIOpsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AIOpsBuiltInParameters::SetFromClientConfiguration(const AIOpsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AIOpsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AIOpsBuiltInParameters::SetServiceSpecificParameters(const AIOpsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace AIOps
}  // namespace Aws
