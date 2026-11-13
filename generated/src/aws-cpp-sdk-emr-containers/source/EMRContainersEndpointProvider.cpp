/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/EMRContainersEndpointProvider.h>
#include <aws/emr-containers/internal/EMRContainersEndpointRules.h>

namespace Aws {
#ifndef AWS_EMRCONTAINERS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EMRContainers::Endpoint::EMRContainersClientConfiguration,
                                                   EMRContainers::Endpoint::EMRContainersBuiltInParameters,
                                                   EMRContainers::Endpoint::EMRContainersClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EMRContainers::Endpoint::EMRContainersClientConfiguration,
                                                  EMRContainers::Endpoint::EMRContainersBuiltInParameters,
                                                  EMRContainers::Endpoint::EMRContainersClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EMRContainers {
namespace Endpoint {
EMRContainersEndpointProvider::EMRContainersEndpointProvider()
    : EMRContainersDefaultEpProviderBase(Aws::EMRContainers::EMRContainersEndpointRules::GetRulesBlob(),
                                         Aws::EMRContainers::EMRContainersEndpointRules::RulesBlobSize) {}

void EMRContainersBuiltInParameters::SetFromClientConfiguration(const EMRContainersClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EMRContainersClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EMRContainersBuiltInParameters::SetFromClientConfiguration(const EMRContainersClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EMRContainersClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EMRContainersBuiltInParameters::SetServiceSpecificParameters(const EMRContainersClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EMRContainers
}  // namespace Aws
