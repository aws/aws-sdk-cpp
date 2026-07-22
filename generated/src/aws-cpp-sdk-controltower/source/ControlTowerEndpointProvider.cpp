/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/ControlTowerEndpointProvider.h>
#include <aws/controltower/internal/ControlTowerEndpointRules.h>

namespace Aws {
namespace ControlTower {
namespace Endpoint {
ControlTowerEndpointProvider::ControlTowerEndpointProvider()
    : ControlTowerDefaultEpProviderBase(Aws::ControlTower::ControlTowerEndpointRules::GetRulesBlob(),
                                        Aws::ControlTower::ControlTowerEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ControlTower
}  // namespace Aws
