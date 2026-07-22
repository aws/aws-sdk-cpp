/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/ARCRegionswitchEndpointProvider.h>
#include <aws/arc-region-switch/internal/ARCRegionswitchEndpointRules.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Endpoint {
ARCRegionswitchEndpointProvider::ARCRegionswitchEndpointProvider()
    : ARCRegionswitchDefaultEpProviderBase(Aws::ARCRegionswitch::ARCRegionswitchEndpointRules::GetRulesBlob(),
                                           Aws::ARCRegionswitch::ARCRegionswitchEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ARCRegionswitch
}  // namespace Aws
