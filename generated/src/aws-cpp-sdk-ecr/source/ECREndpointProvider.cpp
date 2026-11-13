/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/ECREndpointProvider.h>
#include <aws/ecr/internal/ECREndpointRules.h>

namespace Aws {
#ifndef AWS_ECR_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ECR::Endpoint::ECRClientConfiguration, ECR::Endpoint::ECRBuiltInParameters,
                                                   ECR::Endpoint::ECRClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ECR::Endpoint::ECRClientConfiguration, ECR::Endpoint::ECRBuiltInParameters,
                                                  ECR::Endpoint::ECRClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ECR {
namespace Endpoint {
ECREndpointProvider::ECREndpointProvider()
    : ECRDefaultEpProviderBase(Aws::ECR::ECREndpointRules::GetRulesBlob(), Aws::ECR::ECREndpointRules::RulesBlobSize) {}

void ECRBuiltInParameters::SetFromClientConfiguration(const ECRClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ECRClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ECRBuiltInParameters::SetFromClientConfiguration(const ECRClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ECRClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ECRBuiltInParameters::SetServiceSpecificParameters(const ECRClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ECR
}  // namespace Aws
