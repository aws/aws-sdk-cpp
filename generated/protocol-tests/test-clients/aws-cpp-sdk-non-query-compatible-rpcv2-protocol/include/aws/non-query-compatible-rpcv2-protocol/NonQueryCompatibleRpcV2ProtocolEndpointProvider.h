/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2ProtocolClientConfiguration.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
namespace Endpoint {
using NonQueryCompatibleRpcV2ProtocolClientConfiguration =
    Aws::NonQueryCompatibleRpcV2Protocol::NonQueryCompatibleRpcV2ProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NonQueryCompatibleRpcV2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API NonQueryCompatibleRpcV2ProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~NonQueryCompatibleRpcV2ProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const NonQueryCompatibleRpcV2ProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const NonQueryCompatibleRpcV2ProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the NonQueryCompatibleRpcV2Protocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using NonQueryCompatibleRpcV2ProtocolEndpointProviderBase =
    EndpointProviderBase<NonQueryCompatibleRpcV2ProtocolClientConfiguration, NonQueryCompatibleRpcV2ProtocolBuiltInParameters,
                         NonQueryCompatibleRpcV2ProtocolClientContextParameters>;

using NonQueryCompatibleRpcV2ProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<NonQueryCompatibleRpcV2ProtocolClientConfiguration, NonQueryCompatibleRpcV2ProtocolBuiltInParameters,
                            NonQueryCompatibleRpcV2ProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace NonQueryCompatibleRpcV2Protocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_EXTERN template class AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API
    Aws::Endpoint::EndpointProviderBase<NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientConfiguration,
                                        NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolBuiltInParameters,
                                        NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientContextParameters>;

AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_EXTERN template class AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientConfiguration,
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolBuiltInParameters,
    NonQueryCompatibleRpcV2Protocol::Endpoint::NonQueryCompatibleRpcV2ProtocolClientContextParameters>;
}  // namespace Endpoint

namespace NonQueryCompatibleRpcV2Protocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_NONQUERYCOMPATIBLERPCV2PROTOCOL_API NonQueryCompatibleRpcV2ProtocolEndpointProvider
    : public NonQueryCompatibleRpcV2ProtocolDefaultEpProviderBase {
 public:
  using NonQueryCompatibleRpcV2ProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  NonQueryCompatibleRpcV2ProtocolEndpointProvider();

  ~NonQueryCompatibleRpcV2ProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace NonQueryCompatibleRpcV2Protocol
}  // namespace Aws
