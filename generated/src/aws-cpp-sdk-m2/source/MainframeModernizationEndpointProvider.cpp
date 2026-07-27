/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/MainframeModernizationEndpointProvider.h>
#include <aws/m2/internal/MainframeModernizationEndpointRules.h>

namespace Aws {
namespace MainframeModernization {
namespace Endpoint {
MainframeModernizationEndpointProvider::MainframeModernizationEndpointProvider()
    : MainframeModernizationDefaultEpProviderBase(Aws::MainframeModernization::MainframeModernizationEndpointRules::GetRulesBlob(),
                                                  Aws::MainframeModernization::MainframeModernizationEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace MainframeModernization
}  // namespace Aws
