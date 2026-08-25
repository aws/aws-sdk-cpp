/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/RestXmlProtocolEndpointProvider.h>
#include <aws/rest-xml-protocol/internal/RestXmlProtocolEndpointRules.h>

namespace Aws {
namespace RestXmlProtocol {
namespace Endpoint {
RestXmlProtocolEndpointProvider::RestXmlProtocolEndpointProvider()
    : RestXmlProtocolDefaultEpProviderBase(Aws::RestXmlProtocol::RestXmlProtocolEndpointRules::GetRulesBlob(),
                                           Aws::RestXmlProtocol::RestXmlProtocolEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace RestXmlProtocol
}  // namespace Aws
