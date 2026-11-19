/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/protocol-mock/ProtocolMockClientConfiguration.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>

namespace Aws {
namespace ProtocolMock {
namespace Endpoint {
using ProtocolMockClientConfiguration = Aws::ProtocolMock::ProtocolMockClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using ProtocolMockClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_PROTOCOLMOCK_API ProtocolMockBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~ProtocolMockBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const ProtocolMockClientConfiguration& config);
  virtual void SetFromClientConfiguration(const ProtocolMockClientConfiguration& config, const Aws::String& serviceName);
};

/**
 * The type for the ProtocolMock Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ProtocolMockEndpointProviderBase =
    EndpointProviderBase<ProtocolMockClientConfiguration, ProtocolMockBuiltInParameters, ProtocolMockClientContextParameters>;

using ProtocolMockDefaultEpProviderBase =
    DefaultEndpointProvider<ProtocolMockClientConfiguration, ProtocolMockBuiltInParameters, ProtocolMockClientContextParameters>;

}  // namespace Endpoint
}  // namespace ProtocolMock

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_PROTOCOLMOCK_EXTERN template class AWS_PROTOCOLMOCK_API Aws::Endpoint::EndpointProviderBase<
    ProtocolMock::Endpoint::ProtocolMockClientConfiguration, ProtocolMock::Endpoint::ProtocolMockBuiltInParameters,
    ProtocolMock::Endpoint::ProtocolMockClientContextParameters>;

AWS_PROTOCOLMOCK_EXTERN template class AWS_PROTOCOLMOCK_API Aws::Endpoint::DefaultEndpointProvider<
    ProtocolMock::Endpoint::ProtocolMockClientConfiguration, ProtocolMock::Endpoint::ProtocolMockBuiltInParameters,
    ProtocolMock::Endpoint::ProtocolMockClientContextParameters>;
}  // namespace Endpoint

namespace ProtocolMock {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_PROTOCOLMOCK_API ProtocolMockEndpointProvider : public ProtocolMockDefaultEpProviderBase {
 public:
  using ProtocolMockResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  ProtocolMockEndpointProvider();

  ~ProtocolMockEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace ProtocolMock
}  // namespace Aws
