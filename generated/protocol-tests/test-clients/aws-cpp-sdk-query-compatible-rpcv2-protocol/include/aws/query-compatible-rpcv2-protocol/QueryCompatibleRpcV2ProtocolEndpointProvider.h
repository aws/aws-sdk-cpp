/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolClientConfiguration.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
namespace Endpoint {
using QueryCompatibleRpcV2ProtocolClientConfiguration = Aws::QueryCompatibleRpcV2Protocol::QueryCompatibleRpcV2ProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QueryCompatibleRpcV2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API QueryCompatibleRpcV2ProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QueryCompatibleRpcV2ProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QueryCompatibleRpcV2ProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QueryCompatibleRpcV2ProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the QueryCompatibleRpcV2Protocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QueryCompatibleRpcV2ProtocolEndpointProviderBase =
    EndpointProviderBase<QueryCompatibleRpcV2ProtocolClientConfiguration, QueryCompatibleRpcV2ProtocolBuiltInParameters,
                         QueryCompatibleRpcV2ProtocolClientContextParameters>;

using QueryCompatibleRpcV2ProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<QueryCompatibleRpcV2ProtocolClientConfiguration, QueryCompatibleRpcV2ProtocolBuiltInParameters,
                            QueryCompatibleRpcV2ProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace QueryCompatibleRpcV2Protocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QUERYCOMPATIBLERPCV2PROTOCOL_EXTERN template class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API
    Aws::Endpoint::EndpointProviderBase<QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientConfiguration,
                                        QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolBuiltInParameters,
                                        QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientContextParameters>;

AWS_QUERYCOMPATIBLERPCV2PROTOCOL_EXTERN template class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API
    Aws::Endpoint::DefaultEndpointProvider<QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientConfiguration,
                                           QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolBuiltInParameters,
                                           QueryCompatibleRpcV2Protocol::Endpoint::QueryCompatibleRpcV2ProtocolClientContextParameters>;
}  // namespace Endpoint

namespace QueryCompatibleRpcV2Protocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API QueryCompatibleRpcV2ProtocolEndpointProvider
    : public QueryCompatibleRpcV2ProtocolDefaultEpProviderBase {
 public:
  using QueryCompatibleRpcV2ProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QueryCompatibleRpcV2ProtocolEndpointProvider();

  ~QueryCompatibleRpcV2ProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
