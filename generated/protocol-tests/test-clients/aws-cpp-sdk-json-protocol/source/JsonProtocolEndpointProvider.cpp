/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/json-protocol/JsonProtocolEndpointProvider.h>
#include <aws/json-protocol/internal/JsonProtocolEndpointRules.h>

namespace Aws {
namespace JsonProtocol {
namespace Endpoint {
JsonProtocolEndpointProvider::JsonProtocolEndpointProvider()
    : JsonProtocolDefaultEpProviderBase(Aws::JsonProtocol::JsonProtocolEndpointRules::GetRulesBlob(),
                                        Aws::JsonProtocol::JsonProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace JsonProtocol
}  // namespace Aws
