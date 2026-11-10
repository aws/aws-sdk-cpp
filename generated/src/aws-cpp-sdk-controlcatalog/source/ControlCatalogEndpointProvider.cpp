/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/ControlCatalogEndpointProvider.h>
#include <aws/controlcatalog/internal/ControlCatalogEndpointRules.h>

namespace Aws {
#ifndef AWS_CONTROLCATALOG_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ControlCatalog::Endpoint::ControlCatalogClientConfiguration,
                                                   ControlCatalog::Endpoint::ControlCatalogBuiltInParameters,
                                                   ControlCatalog::Endpoint::ControlCatalogClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ControlCatalog::Endpoint::ControlCatalogClientConfiguration,
                                                  ControlCatalog::Endpoint::ControlCatalogBuiltInParameters,
                                                  ControlCatalog::Endpoint::ControlCatalogClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ControlCatalog {
namespace Endpoint {
ControlCatalogEndpointProvider::ControlCatalogEndpointProvider()
    : ControlCatalogDefaultEpProviderBase(Aws::ControlCatalog::ControlCatalogEndpointRules::GetRulesBlob(),
                                          Aws::ControlCatalog::ControlCatalogEndpointRules::RulesBlobSize) {}

void ControlCatalogBuiltInParameters::SetFromClientConfiguration(const ControlCatalogClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ControlCatalogClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ControlCatalogBuiltInParameters::SetFromClientConfiguration(const ControlCatalogClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ControlCatalogClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ControlCatalogBuiltInParameters::SetServiceSpecificParameters(const ControlCatalogClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ControlCatalog
}  // namespace Aws
