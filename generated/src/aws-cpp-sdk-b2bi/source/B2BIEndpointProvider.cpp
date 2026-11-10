/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/B2BIEndpointProvider.h>
#include <aws/b2bi/internal/B2BIEndpointRules.h>

namespace Aws {
#ifndef AWS_B2BI_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<B2BI::Endpoint::B2BIClientConfiguration, B2BI::Endpoint::B2BIBuiltInParameters,
                                                   B2BI::Endpoint::B2BIClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<B2BI::Endpoint::B2BIClientConfiguration, B2BI::Endpoint::B2BIBuiltInParameters,
                                                  B2BI::Endpoint::B2BIClientContextParameters>;
}  // namespace Endpoint
#endif

namespace B2BI {
namespace Endpoint {
B2BIEndpointProvider::B2BIEndpointProvider()
    : B2BIDefaultEpProviderBase(Aws::B2BI::B2BIEndpointRules::GetRulesBlob(), Aws::B2BI::B2BIEndpointRules::RulesBlobSize) {}

void B2BIBuiltInParameters::SetFromClientConfiguration(const B2BIClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const B2BIClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void B2BIBuiltInParameters::SetFromClientConfiguration(const B2BIClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const B2BIClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void B2BIBuiltInParameters::SetServiceSpecificParameters(const B2BIClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace B2BI
}  // namespace Aws
