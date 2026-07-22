/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/CostExplorerEndpointProvider.h>
#include <aws/ce/internal/CostExplorerEndpointRules.h>

namespace Aws {
namespace CostExplorer {
namespace Endpoint {
CostExplorerEndpointProvider::CostExplorerEndpointProvider()
    : CostExplorerDefaultEpProviderBase(Aws::CostExplorer::CostExplorerEndpointRules::GetRulesBlob(),
                                        Aws::CostExplorer::CostExplorerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CostExplorer
}  // namespace Aws
