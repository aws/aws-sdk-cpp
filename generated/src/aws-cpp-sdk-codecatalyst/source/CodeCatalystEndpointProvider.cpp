/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/CodeCatalystEndpointProvider.h>
#include <aws/codecatalyst/internal/CodeCatalystEndpointRules.h>

namespace Aws {
namespace CodeCatalyst {
namespace Endpoint {
CodeCatalystEndpointProvider::CodeCatalystEndpointProvider()
    : CodeCatalystDefaultEpProviderBase(Aws::CodeCatalyst::CodeCatalystEndpointRules::GetRulesBlob(),
                                        Aws::CodeCatalyst::CodeCatalystEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeCatalyst
}  // namespace Aws
