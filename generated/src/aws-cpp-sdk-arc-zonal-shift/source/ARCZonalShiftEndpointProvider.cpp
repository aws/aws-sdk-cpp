/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/ARCZonalShiftEndpointProvider.h>
#include <aws/arc-zonal-shift/internal/ARCZonalShiftEndpointRules.h>

namespace Aws {
namespace ARCZonalShift {
namespace Endpoint {
ARCZonalShiftEndpointProvider::ARCZonalShiftEndpointProvider()
    : ARCZonalShiftDefaultEpProviderBase(Aws::ARCZonalShift::ARCZonalShiftEndpointRules::GetRulesBlob(),
                                         Aws::ARCZonalShift::ARCZonalShiftEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ARCZonalShift
}  // namespace Aws
