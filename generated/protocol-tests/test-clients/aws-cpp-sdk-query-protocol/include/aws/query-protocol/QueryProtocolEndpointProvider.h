/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/query-protocol/QueryProtocolClientConfiguration.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>

namespace Aws {
namespace QueryProtocol {
namespace Endpoint {
using QueryProtocolClientConfiguration = Aws::QueryProtocol::QueryProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using QueryProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_QUERYPROTOCOL_API QueryProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~QueryProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const QueryProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const QueryProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the QueryProtocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using QueryProtocolEndpointProviderBase =
    EndpointProviderBase<QueryProtocolClientConfiguration, QueryProtocolBuiltInParameters, QueryProtocolClientContextParameters>;

using QueryProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<QueryProtocolClientConfiguration, QueryProtocolBuiltInParameters, QueryProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace QueryProtocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_QUERYPROTOCOL_EXTERN template class AWS_QUERYPROTOCOL_API Aws::Endpoint::EndpointProviderBase<
    QueryProtocol::Endpoint::QueryProtocolClientConfiguration, QueryProtocol::Endpoint::QueryProtocolBuiltInParameters,
    QueryProtocol::Endpoint::QueryProtocolClientContextParameters>;

AWS_QUERYPROTOCOL_EXTERN template class AWS_QUERYPROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    QueryProtocol::Endpoint::QueryProtocolClientConfiguration, QueryProtocol::Endpoint::QueryProtocolBuiltInParameters,
    QueryProtocol::Endpoint::QueryProtocolClientContextParameters>;
}  // namespace Endpoint

namespace QueryProtocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_QUERYPROTOCOL_API QueryProtocolEndpointProvider : public QueryProtocolDefaultEpProviderBase {
 public:
  using QueryProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  QueryProtocolEndpointProvider();

  ~QueryProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace QueryProtocol
}  // namespace Aws
