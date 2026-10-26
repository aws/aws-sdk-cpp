/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/non-query-compatible-rpcv2-protocol/NonQueryCompatibleRpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace NonQueryCompatibleRpcV2Protocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using NonQueryCompatibleRpcV2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using NonQueryCompatibleRpcV2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using NonQueryCompatibleRpcV2ProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

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
