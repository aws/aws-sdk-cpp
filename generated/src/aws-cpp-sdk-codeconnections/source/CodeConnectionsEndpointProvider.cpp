/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/CodeConnectionsEndpointProvider.h>
#include <aws/codeconnections/internal/CodeConnectionsEndpointRules.h>

namespace Aws {
namespace CodeConnections {
namespace Endpoint {
CodeConnectionsEndpointProvider::CodeConnectionsEndpointProvider()
    : CodeConnectionsDefaultEpProviderBase(Aws::CodeConnections::CodeConnectionsEndpointRules::GetRulesBlob(),
                                           Aws::CodeConnections::CodeConnectionsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CodeConnections
}  // namespace Aws
