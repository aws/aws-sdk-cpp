/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/DLMEndpointProvider.h>
#include <aws/dlm/internal/DLMEndpointRules.h>

namespace Aws {
#ifndef AWS_DLM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DLM::Endpoint::DLMClientConfiguration, DLM::Endpoint::DLMBuiltInParameters,
                                                   DLM::Endpoint::DLMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DLM::Endpoint::DLMClientConfiguration, DLM::Endpoint::DLMBuiltInParameters,
                                                  DLM::Endpoint::DLMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DLM {
namespace Endpoint {
DLMEndpointProvider::DLMEndpointProvider()
    : DLMDefaultEpProviderBase(Aws::DLM::DLMEndpointRules::GetRulesBlob(), Aws::DLM::DLMEndpointRules::RulesBlobSize) {}

void DLMBuiltInParameters::SetFromClientConfiguration(const DLMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DLMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DLMBuiltInParameters::SetFromClientConfiguration(const DLMClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DLMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DLMBuiltInParameters::SetServiceSpecificParameters(const DLMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DLM
}  // namespace Aws
