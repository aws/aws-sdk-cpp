/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/protocol-mock/ProtocolMockEndpointProvider.h>
#include <aws/protocol-mock/internal/ProtocolMockEndpointRules.h>

namespace Aws {
namespace ProtocolMock {
namespace Endpoint {
ProtocolMockEndpointProvider::ProtocolMockEndpointProvider()
    : ProtocolMockDefaultEpProviderBase(Aws::ProtocolMock::ProtocolMockEndpointRules::GetRulesBlob(),
                                        Aws::ProtocolMock::ProtocolMockEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ProtocolMock
}  // namespace Aws
