/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/DAXEndpointProvider.h>
#include <aws/dax/internal/DAXEndpointRules.h>

namespace Aws {
#ifndef AWS_DAX_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<DAX::Endpoint::DAXClientConfiguration, DAX::Endpoint::DAXBuiltInParameters,
                                                   DAX::Endpoint::DAXClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<DAX::Endpoint::DAXClientConfiguration, DAX::Endpoint::DAXBuiltInParameters,
                                                  DAX::Endpoint::DAXClientContextParameters>;
}  // namespace Endpoint
#endif

namespace DAX {
namespace Endpoint {
DAXEndpointProvider::DAXEndpointProvider()
    : DAXDefaultEpProviderBase(Aws::DAX::DAXEndpointRules::GetRulesBlob(), Aws::DAX::DAXEndpointRules::RulesBlobSize) {}

void DAXBuiltInParameters::SetFromClientConfiguration(const DAXClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const DAXClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void DAXBuiltInParameters::SetFromClientConfiguration(const DAXClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const DAXClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void DAXBuiltInParameters::SetServiceSpecificParameters(const DAXClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace DAX
}  // namespace Aws
