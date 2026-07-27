/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/HealthEndpointProvider.h>
#include <aws/health/internal/HealthEndpointRules.h>

namespace Aws {
namespace Health {
namespace Endpoint {
HealthEndpointProvider::HealthEndpointProvider()
    : HealthDefaultEpProviderBase(Aws::Health::HealthEndpointRules::GetRulesBlob(), Aws::Health::HealthEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Health
}  // namespace Aws
