/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/BCMDataExportsEndpointProvider.h>
#include <aws/bcm-data-exports/internal/BCMDataExportsEndpointRules.h>

namespace Aws {
#ifndef AWS_BCMDATAEXPORTS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<BCMDataExports::Endpoint::BCMDataExportsClientConfiguration,
                                                   BCMDataExports::Endpoint::BCMDataExportsBuiltInParameters,
                                                   BCMDataExports::Endpoint::BCMDataExportsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<BCMDataExports::Endpoint::BCMDataExportsClientConfiguration,
                                                  BCMDataExports::Endpoint::BCMDataExportsBuiltInParameters,
                                                  BCMDataExports::Endpoint::BCMDataExportsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace BCMDataExports {
namespace Endpoint {
BCMDataExportsEndpointProvider::BCMDataExportsEndpointProvider()
    : BCMDataExportsDefaultEpProviderBase(Aws::BCMDataExports::BCMDataExportsEndpointRules::GetRulesBlob(),
                                          Aws::BCMDataExports::BCMDataExportsEndpointRules::RulesBlobSize) {}

void BCMDataExportsBuiltInParameters::SetFromClientConfiguration(const BCMDataExportsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const BCMDataExportsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void BCMDataExportsBuiltInParameters::SetFromClientConfiguration(const BCMDataExportsClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const BCMDataExportsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void BCMDataExportsBuiltInParameters::SetServiceSpecificParameters(const BCMDataExportsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
}
}  // namespace Endpoint
}  // namespace BCMDataExports
}  // namespace Aws
