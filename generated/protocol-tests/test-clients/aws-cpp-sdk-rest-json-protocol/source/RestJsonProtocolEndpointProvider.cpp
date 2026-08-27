/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/RestJsonProtocolEndpointProvider.h>
#include <aws/rest-json-protocol/internal/RestJsonProtocolEndpointRules.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Endpoint {
RestJsonProtocolEndpointProvider::RestJsonProtocolEndpointProvider()
    : RestJsonProtocolDefaultEpProviderBase(Aws::RestJsonProtocol::RestJsonProtocolEndpointRules::GetRulesBlob(),
                                            Aws::RestJsonProtocol::RestJsonProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RestJsonProtocol
}  // namespace Aws
