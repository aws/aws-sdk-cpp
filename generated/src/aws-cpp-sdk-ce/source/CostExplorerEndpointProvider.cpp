/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/CostExplorerEndpointProvider.h>
#include <aws/ce/internal/CostExplorerEndpointRules.h>

namespace Aws {
#ifndef AWS_COSTEXPLORER_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CostExplorer::Endpoint::CostExplorerClientConfiguration,
                                                   CostExplorer::Endpoint::CostExplorerBuiltInParameters,
                                                   CostExplorer::Endpoint::CostExplorerClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CostExplorer::Endpoint::CostExplorerClientConfiguration,
                                                  CostExplorer::Endpoint::CostExplorerBuiltInParameters,
                                                  CostExplorer::Endpoint::CostExplorerClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CostExplorer {
namespace Endpoint {
CostExplorerEndpointProvider::CostExplorerEndpointProvider()
    : CostExplorerDefaultEpProviderBase(Aws::CostExplorer::CostExplorerEndpointRules::GetRulesBlob(),
                                        Aws::CostExplorer::CostExplorerEndpointRules::RulesBlobSize) {}

void CostExplorerBuiltInParameters::SetFromClientConfiguration(const CostExplorerClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CostExplorerClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CostExplorerBuiltInParameters::SetFromClientConfiguration(const CostExplorerClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CostExplorerClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CostExplorerBuiltInParameters::SetServiceSpecificParameters(const CostExplorerClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CostExplorer
}  // namespace Aws
