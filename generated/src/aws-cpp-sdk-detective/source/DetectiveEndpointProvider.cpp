/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/DetectiveEndpointProvider.h>
#include <aws/detective/internal/DetectiveEndpointRules.h>

namespace Aws {
#ifndef AWS_DETECTIVE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Detective::Endpoint::DetectiveClientConfiguration,
                                                   Detective::Endpoint::DetectiveBuiltInParameters,
                                                   Detective::Endpoint::DetectiveClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Detective::Endpoint::DetectiveClientConfiguration,
                                                  Detective::Endpoint::DetectiveBuiltInParameters,
                                                  Detective::Endpoint::DetectiveClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Detective {
namespace Endpoint {
DetectiveEndpointProvider::DetectiveEndpointProvider()
    : DetectiveDefaultEpProviderBase(Aws::Detective::DetectiveEndpointRules::GetRulesBlob(),
                                     Aws::Detective::DetectiveEndpointRules::RulesBlobSize) {}

void DetectiveBuiltInParameters::SetFromClientConfiguration(const DetectiveClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DetectiveClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DetectiveBuiltInParameters::SetFromClientConfiguration(const DetectiveClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DetectiveClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DetectiveBuiltInParameters::SetServiceSpecificParameters(const DetectiveClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Detective
}  // namespace Aws
