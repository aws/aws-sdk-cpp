/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/CodeStarconnectionsEndpointProvider.h>
#include <aws/codestar-connections/internal/CodeStarconnectionsEndpointRules.h>

namespace Aws {
namespace CodeStarconnections {
namespace Endpoint {
CodeStarconnectionsEndpointProvider::CodeStarconnectionsEndpointProvider()
    : CodeStarconnectionsDefaultEpProviderBase(Aws::CodeStarconnections::CodeStarconnectionsEndpointRules::GetRulesBlob(),
                                               Aws::CodeStarconnections::CodeStarconnectionsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeStarconnections
}  // namespace Aws
