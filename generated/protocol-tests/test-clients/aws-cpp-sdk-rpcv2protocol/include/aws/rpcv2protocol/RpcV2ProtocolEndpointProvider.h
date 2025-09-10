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
#include <aws/rpcv2protocol/RpcV2ProtocolEndpointRules.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

namespace Aws {
namespace RpcV2Protocol {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using RpcV2ProtocolClientContextParameters = Aws::Endpoint::ClientContextParameters;

using RpcV2ProtocolClientConfiguration = Aws::Client::GenericClientConfiguration;
using RpcV2ProtocolBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the RpcV2Protocol Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using RpcV2ProtocolEndpointProviderBase =
    EndpointProviderBase<RpcV2ProtocolClientConfiguration, RpcV2ProtocolBuiltInParameters, RpcV2ProtocolClientContextParameters>;

using RpcV2ProtocolDefaultEpProviderBase =
    DefaultEndpointProvider<RpcV2ProtocolClientConfiguration, RpcV2ProtocolBuiltInParameters, RpcV2ProtocolClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_RPCV2PROTOCOL_API RpcV2ProtocolEndpointProvider : public RpcV2ProtocolDefaultEpProviderBase {
 public:
  using RpcV2ProtocolResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RpcV2ProtocolEndpointProvider()
      : RpcV2ProtocolDefaultEpProviderBase(Aws::RpcV2Protocol::RpcV2ProtocolEndpointRules::GetRulesBlob(),
                                           Aws::RpcV2Protocol::RpcV2ProtocolEndpointRules::RulesBlobSize) {}

  ~RpcV2ProtocolEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace RpcV2Protocol
}  // namespace Aws
