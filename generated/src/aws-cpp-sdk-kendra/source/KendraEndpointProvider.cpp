/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/KendraEndpointProvider.h>
#include <aws/kendra/internal/KendraEndpointRules.h>

namespace Aws {
namespace kendra {
namespace Endpoint {
KendraEndpointProvider::KendraEndpointProvider()
    : KendraDefaultEpProviderBase(Aws::kendra::KendraEndpointRules::GetRulesBlob(), Aws::kendra::KendraEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace kendra
}  // namespace Aws
