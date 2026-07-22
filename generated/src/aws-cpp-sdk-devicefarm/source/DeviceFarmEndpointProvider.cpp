/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/DeviceFarmEndpointProvider.h>
#include <aws/devicefarm/internal/DeviceFarmEndpointRules.h>

namespace Aws {
namespace DeviceFarm {
namespace Endpoint {
DeviceFarmEndpointProvider::DeviceFarmEndpointProvider()
    : DeviceFarmDefaultEpProviderBase(Aws::DeviceFarm::DeviceFarmEndpointRules::GetRulesBlob(),
                                      Aws::DeviceFarm::DeviceFarmEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace DeviceFarm
}  // namespace Aws
