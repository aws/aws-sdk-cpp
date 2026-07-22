/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/ECSEndpointProvider.h>
#include <aws/ecs/internal/ECSEndpointRules.h>

namespace Aws {
namespace ECS {
namespace Endpoint {
ECSEndpointProvider::ECSEndpointProvider()
    : ECSDefaultEpProviderBase(Aws::ECS::ECSEndpointRules::GetRulesBlob(), Aws::ECS::ECSEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ECS
}  // namespace Aws
