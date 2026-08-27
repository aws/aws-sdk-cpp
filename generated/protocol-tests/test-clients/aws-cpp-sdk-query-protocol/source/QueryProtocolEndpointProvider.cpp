/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/QueryProtocolEndpointProvider.h>
#include <aws/query-protocol/internal/QueryProtocolEndpointRules.h>

namespace Aws {
namespace QueryProtocol {
namespace Endpoint {
QueryProtocolEndpointProvider::QueryProtocolEndpointProvider()
    : QueryProtocolDefaultEpProviderBase(Aws::QueryProtocol::QueryProtocolEndpointRules::GetRulesBlob(),
                                         Aws::QueryProtocol::QueryProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QueryProtocol
}  // namespace Aws
