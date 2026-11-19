/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/EMREndpointProvider.h>
#include <aws/elasticmapreduce/internal/EMREndpointRules.h>

namespace Aws {
#ifndef AWS_EMR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EMR::Endpoint::EMRClientConfiguration, EMR::Endpoint::EMRBuiltInParameters,
                                                   EMR::Endpoint::EMRClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EMR::Endpoint::EMRClientConfiguration, EMR::Endpoint::EMRBuiltInParameters,
                                                  EMR::Endpoint::EMRClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EMR {
namespace Endpoint {
EMREndpointProvider::EMREndpointProvider()
    : EMRDefaultEpProviderBase(Aws::EMR::EMREndpointRules::GetRulesBlob(), Aws::EMR::EMREndpointRules::RulesBlobSize) {}

void EMRBuiltInParameters::SetFromClientConfiguration(const EMRClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EMRClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EMRBuiltInParameters::SetFromClientConfiguration(const EMRClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EMRClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EMRBuiltInParameters::SetServiceSpecificParameters(const EMRClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EMR
}  // namespace Aws
