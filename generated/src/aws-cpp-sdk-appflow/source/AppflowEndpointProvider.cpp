/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/AppflowEndpointProvider.h>
#include <aws/appflow/internal/AppflowEndpointRules.h>

namespace Aws {
namespace Appflow {
namespace Endpoint {
AppflowEndpointProvider::AppflowEndpointProvider()
    : AppflowDefaultEpProviderBase(Aws::Appflow::AppflowEndpointRules::GetRulesBlob(), Aws::Appflow::AppflowEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Appflow
}  // namespace Aws
