/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/AppSyncEndpointProvider.h>
#include <aws/appsync/internal/AppSyncEndpointRules.h>

namespace Aws {
namespace AppSync {
namespace Endpoint {
AppSyncEndpointProvider::AppSyncEndpointProvider()
    : AppSyncDefaultEpProviderBase(Aws::AppSync::AppSyncEndpointRules::GetRulesBlob(), Aws::AppSync::AppSyncEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AppSync
}  // namespace Aws
