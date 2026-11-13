/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/IAMEndpointProvider.h>
#include <aws/iam/internal/IAMEndpointRules.h>

namespace Aws {
#ifndef AWS_IAM_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IAM::Endpoint::IAMClientConfiguration, IAM::Endpoint::IAMBuiltInParameters,
                                                   IAM::Endpoint::IAMClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IAM::Endpoint::IAMClientConfiguration, IAM::Endpoint::IAMBuiltInParameters,
                                                  IAM::Endpoint::IAMClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IAM {
namespace Endpoint {
IAMEndpointProvider::IAMEndpointProvider()
    : IAMDefaultEpProviderBase(Aws::IAM::IAMEndpointRules::GetRulesBlob(), Aws::IAM::IAMEndpointRules::RulesBlobSize) {}

void IAMBuiltInParameters::SetFromClientConfiguration(const IAMClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IAMClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IAMBuiltInParameters::SetFromClientConfiguration(const IAMClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IAMClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IAMBuiltInParameters::SetServiceSpecificParameters(const IAMClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IAM
}  // namespace Aws
