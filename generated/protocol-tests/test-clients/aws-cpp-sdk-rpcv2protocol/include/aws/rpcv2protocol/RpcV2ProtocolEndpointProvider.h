/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rpcv2protocol/RpcV2ProtocolClientConfiguration.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace RpcV2Protocol {
namespace Endpoint {
using RpcV2ProtocolClientConfiguration = Aws::RpcV2Protocol::RpcV2ProtocolClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RpcV2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_RPCV2PROTOCOL_API RpcV2ProtocolBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~RpcV2ProtocolBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const RpcV2ProtocolClientConfiguration& config);
  virtual void SetFromClientConfiguration(const RpcV2ProtocolClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the RpcV2Protocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RpcV2ProtocolEndpointProviderBase =
    EndpointProviderBase<RpcV2ProtocolClientConfiguration, RpcV2ProtocolBuiltInParameters, RpcV2ProtocolClientContextParameters>;

using RpcV2ProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<RpcV2ProtocolClientConfiguration, RpcV2ProtocolBuiltInParameters, RpcV2ProtocolClientContextParameters>;

}  // namespace Endpoint
}  // namespace RpcV2Protocol

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_RPCV2PROTOCOL_EXTERN template class AWS_RPCV2PROTOCOL_API Aws::Endpoint::EndpointProviderBase<
    RpcV2Protocol::Endpoint::RpcV2ProtocolClientConfiguration, RpcV2Protocol::Endpoint::RpcV2ProtocolBuiltInParameters,
    RpcV2Protocol::Endpoint::RpcV2ProtocolClientContextParameters>;

AWS_RPCV2PROTOCOL_EXTERN template class AWS_RPCV2PROTOCOL_API Aws::Endpoint::DefaultEndpointProvider<
    RpcV2Protocol::Endpoint::RpcV2ProtocolClientConfiguration, RpcV2Protocol::Endpoint::RpcV2ProtocolBuiltInParameters,
    RpcV2Protocol::Endpoint::RpcV2ProtocolClientContextParameters>;
}  // namespace Endpoint

namespace RpcV2Protocol {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_RPCV2PROTOCOL_API RpcV2ProtocolEndpointProvider : public RpcV2ProtocolDefaultEpProviderBase {
 public:
  using RpcV2ProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RpcV2ProtocolEndpointProvider();

  ~RpcV2ProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RpcV2Protocol
}  // namespace Aws
