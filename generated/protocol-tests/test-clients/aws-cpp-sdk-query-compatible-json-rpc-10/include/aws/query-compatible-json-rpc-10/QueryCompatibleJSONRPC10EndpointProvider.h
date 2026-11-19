/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10ClientConfiguration.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
namespace Endpoint {
using QueryCompatibleJSONRPC10ClientConfiguration = Aws::QueryCompatibleJSONRPC10::QueryCompatibleJSONRPC10ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QueryCompatibleJSONRPC10ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QUERYCOMPATIBLEJSONRPC10_API QueryCompatibleJSONRPC10BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QueryCompatibleJSONRPC10BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QueryCompatibleJSONRPC10ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QueryCompatibleJSONRPC10ClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the QueryCompatibleJSONRPC10 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QueryCompatibleJSONRPC10EndpointProviderBase =
    EndpointProviderBase<QueryCompatibleJSONRPC10ClientConfiguration, QueryCompatibleJSONRPC10BuiltInParameters,
                         QueryCompatibleJSONRPC10ClientContextParameters>;

using QueryCompatibleJSONRPC10DefaultEpProviderBase =
    DefaultEndpointProvider<QueryCompatibleJSONRPC10ClientConfiguration, QueryCompatibleJSONRPC10BuiltInParameters,
                            QueryCompatibleJSONRPC10ClientContextParameters>;

}  // namespace Endpoint
}  // namespace QueryCompatibleJSONRPC10

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QUERYCOMPATIBLEJSONRPC10_EXTERN template class AWS_QUERYCOMPATIBLEJSONRPC10_API
    Aws::Endpoint::EndpointProviderBase<QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientConfiguration,
                                        QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10BuiltInParameters,
                                        QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientContextParameters>;

AWS_QUERYCOMPATIBLEJSONRPC10_EXTERN template class AWS_QUERYCOMPATIBLEJSONRPC10_API
    Aws::Endpoint::DefaultEndpointProvider<QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientConfiguration,
                                           QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10BuiltInParameters,
                                           QueryCompatibleJSONRPC10::Endpoint::QueryCompatibleJSONRPC10ClientContextParameters>;
}  // namespace Endpoint

namespace QueryCompatibleJSONRPC10 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QUERYCOMPATIBLEJSONRPC10_API QueryCompatibleJSONRPC10EndpointProvider : public QueryCompatibleJSONRPC10DefaultEpProviderBase {
 public:
  using QueryCompatibleJSONRPC10ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QueryCompatibleJSONRPC10EndpointProvider();

  ~QueryCompatibleJSONRPC10EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
