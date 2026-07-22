/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/GlobalAcceleratorEndpointProvider.h>
#include <aws/globalaccelerator/internal/GlobalAcceleratorEndpointRules.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Endpoint {
GlobalAcceleratorEndpointProvider::GlobalAcceleratorEndpointProvider()
    : GlobalAcceleratorDefaultEpProviderBase(Aws::GlobalAccelerator::GlobalAcceleratorEndpointRules::GetRulesBlob(),
                                             Aws::GlobalAccelerator::GlobalAcceleratorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GlobalAccelerator
}  // namespace Aws
