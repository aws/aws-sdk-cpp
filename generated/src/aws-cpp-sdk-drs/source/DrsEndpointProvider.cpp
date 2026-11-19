/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/DrsEndpointProvider.h>
#include <aws/drs/internal/DrsEndpointRules.h>

namespace Aws {
#ifndef AWS_DRS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<drs::Endpoint::DrsClientConfiguration, drs::Endpoint::DrsBuiltInParameters,
                                                   drs::Endpoint::DrsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<drs::Endpoint::DrsClientConfiguration, drs::Endpoint::DrsBuiltInParameters,
                                                  drs::Endpoint::DrsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace drs {
namespace Endpoint {
DrsEndpointProvider::DrsEndpointProvider()
    : DrsDefaultEpProviderBase(Aws::drs::DrsEndpointRules::GetRulesBlob(), Aws::drs::DrsEndpointRules::RulesBlobSize) {}

void DrsBuiltInParameters::SetFromClientConfiguration(const DrsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DrsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DrsBuiltInParameters::SetFromClientConfiguration(const DrsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DrsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DrsBuiltInParameters::SetServiceSpecificParameters(const DrsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace drs
}  // namespace Aws
