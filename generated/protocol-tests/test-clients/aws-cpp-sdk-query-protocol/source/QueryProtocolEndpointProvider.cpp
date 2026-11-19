/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-protocol/QueryProtocolEndpointProvider.h>
#include <aws/query-protocol/internal/QueryProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_QUERYPROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<QueryProtocol::Endpoint::QueryProtocolClientConfiguration,
                                                   QueryProtocol::Endpoint::QueryProtocolBuiltInParameters,
                                                   QueryProtocol::Endpoint::QueryProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<QueryProtocol::Endpoint::QueryProtocolClientConfiguration,
                                                      QueryProtocol::Endpoint::QueryProtocolBuiltInParameters,
                                                      QueryProtocol::Endpoint::QueryProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QueryProtocol {
namespace Endpoint {
QueryProtocolEndpointProvider::QueryProtocolEndpointProvider()
    : QueryProtocolDefaultEpProviderBase(Aws::QueryProtocol::QueryProtocolEndpointRules::GetRulesBlob(),
                                         Aws::QueryProtocol::QueryProtocolEndpointRules::RulesBlobSize) {}

void QueryProtocolBuiltInParameters::SetFromClientConfiguration(const QueryProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QueryProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void QueryProtocolBuiltInParameters::SetFromClientConfiguration(const QueryProtocolClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QueryProtocolClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace QueryProtocol
}  // namespace Aws
