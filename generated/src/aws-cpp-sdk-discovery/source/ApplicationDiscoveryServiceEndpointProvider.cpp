/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/ApplicationDiscoveryServiceEndpointProvider.h>
#include <aws/discovery/internal/ApplicationDiscoveryServiceEndpointRules.h>

namespace Aws {
namespace ApplicationDiscoveryService {
namespace Endpoint {
ApplicationDiscoveryServiceEndpointProvider::ApplicationDiscoveryServiceEndpointProvider()
    : ApplicationDiscoveryServiceDefaultEpProviderBase(
          Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::GetRulesBlob(),
          Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ApplicationDiscoveryService
}  // namespace Aws
