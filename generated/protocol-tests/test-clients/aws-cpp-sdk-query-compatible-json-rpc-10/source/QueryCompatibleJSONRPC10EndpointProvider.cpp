/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10EndpointProvider.h>
#include <aws/query-compatible-json-rpc-10/internal/QueryCompatibleJSONRPC10EndpointRules.h>

namespace Aws {
#ifndef AWS_QUERYCOMPATIBLEJSONRPC10_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientConfiguration,
                                                   QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10BuiltInParameters,
                                                   QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientConfiguration,
                                                      QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10BuiltInParameters,
                                                      QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace QueryCompatibleJSONRPC10 {
namespace Endpoint {
QueryCompatibleJSONRPC10EndpointProvider::QueryCompatibleJSONRPC10EndpointProvider()
    : QueryCompatibleJSONRPC10DefaultEpProviderBase(Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10EndpointRules::GetRulesBlob(),
                                                    Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10EndpointRules::RulesBlobSize) {}

void QueryCompatibleJSONRPC10BuiltInParameters::SetFromClientConfiguration(const QueryCompatibleJSONRPC10ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const QueryCompatibleJSONRPC10ClientConfiguration::BaseClientConfigClass&>(config));
}

void QueryCompatibleJSONRPC10BuiltInParameters::SetFromClientConfiguration(const QueryCompatibleJSONRPC10ClientConfiguration& config,
                                                                           const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const QueryCompatibleJSONRPC10ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
