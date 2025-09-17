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
#include <aws/protocol-mock/ProtocolMockEndpointRules.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>

namespace Aws {
namespace ProtocolMock {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ProtocolMockClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ProtocolMockClientConfiguration = Aws::Client::GenericClientConfiguration;
using ProtocolMockBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ProtocolMock Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ProtocolMockEndpointProviderBase =
    EndpointProviderBase<ProtocolMockClientConfiguration, ProtocolMockBuiltInParameters, ProtocolMockClientContextParameters>;

using ProtocolMockDefaultEpProviderBase =
    DefaultEndpointProvider<ProtocolMockClientConfiguration, ProtocolMockBuiltInParameters, ProtocolMockClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_PROTOCOLMOCK_API ProtocolMockEndpointProvider : public ProtocolMockDefaultEpProviderBase {
 public:
  using ProtocolMockResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ProtocolMockEndpointProvider()
      : ProtocolMockDefaultEpProviderBase(Aws::ProtocolMock::ProtocolMockEndpointRules::GetRulesBlob(),
                                          Aws::ProtocolMock::ProtocolMockEndpointRules::RulesBlobSize) {}

  ~ProtocolMockEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ProtocolMock
}  // namespace Aws
