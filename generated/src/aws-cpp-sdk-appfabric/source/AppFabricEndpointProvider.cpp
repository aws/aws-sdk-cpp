/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/AppFabricEndpointProvider.h>
#include <aws/appfabric/internal/AppFabricEndpointRules.h>

namespace Aws {
namespace AppFabric {
namespace Endpoint {
AppFabricEndpointProvider::AppFabricEndpointProvider()
    : AppFabricDefaultEpProviderBase(Aws::AppFabric::AppFabricEndpointRules::GetRulesBlob(),
                                     Aws::AppFabric::AppFabricEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppFabric
}  // namespace Aws
