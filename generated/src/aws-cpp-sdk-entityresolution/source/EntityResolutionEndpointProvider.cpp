/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/EntityResolutionEndpointProvider.h>
#include <aws/entityresolution/internal/EntityResolutionEndpointRules.h>

namespace Aws {
namespace EntityResolution {
namespace Endpoint {
EntityResolutionEndpointProvider::EntityResolutionEndpointProvider()
    : EntityResolutionDefaultEpProviderBase(Aws::EntityResolution::EntityResolutionEndpointRules::GetRulesBlob(),
                                            Aws::EntityResolution::EntityResolutionEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace EntityResolution
}  // namespace Aws
