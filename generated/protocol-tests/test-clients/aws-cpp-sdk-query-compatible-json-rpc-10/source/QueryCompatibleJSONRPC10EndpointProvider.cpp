/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10EndpointProvider.h>
#include <aws/query-compatible-json-rpc-10/internal/QueryCompatibleJSONRPC10EndpointRules.h>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
namespace Endpoint {
QueryCompatibleJSONRPC10EndpointProvider::QueryCompatibleJSONRPC10EndpointProvider()
    : QueryCompatibleJSONRPC10DefaultEpProviderBase(Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10EndpointRules::GetRulesBlob(),
                                                    Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
