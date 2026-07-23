/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/aiops/AIOpsEndpointProvider.h>
#include <aws/aiops/internal/AIOpsEndpointRules.h>

namespace Aws {
namespace AIOps {
namespace Endpoint {
AIOpsEndpointProvider::AIOpsEndpointProvider()
    : AIOpsDefaultEpProviderBase(Aws::AIOps::AIOpsEndpointRules::GetRulesBlob(), Aws::AIOps::AIOpsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace AIOps
}  // namespace Aws
