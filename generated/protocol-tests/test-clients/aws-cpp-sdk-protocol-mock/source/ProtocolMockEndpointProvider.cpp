/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/protocol-mock/ProtocolMockEndpointProvider.h>
#include <aws/protocol-mock/internal/ProtocolMockEndpointRules.h>

namespace Aws {
#ifndef AWS_PROTOCOLMOCK_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ProtocolMock::Endpoint::ProtocolMockClientConfiguration,
                                                   ProtocolMock::Endpoint::ProtocolMockBuiltInParameters,
                                                   ProtocolMock::Endpoint::ProtocolMockClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<ProtocolMock::Endpoint::ProtocolMockClientConfiguration,
                                                      ProtocolMock::Endpoint::ProtocolMockBuiltInParameters,
                                                      ProtocolMock::Endpoint::ProtocolMockClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ProtocolMock {
namespace Endpoint {
ProtocolMockEndpointProvider::ProtocolMockEndpointProvider()
    : ProtocolMockDefaultEpProviderBase(Aws::ProtocolMock::ProtocolMockEndpointRules::GetRulesBlob(),
                                        Aws::ProtocolMock::ProtocolMockEndpointRules::RulesBlobSize) {}

void ProtocolMockBuiltInParameters::SetFromClientConfiguration(const ProtocolMockClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ProtocolMockClientConfiguration::BaseClientConfigClass&>(config));
}

void ProtocolMockBuiltInParameters::SetFromClientConfiguration(const ProtocolMockClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ProtocolMockClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace ProtocolMock
}  // namespace Aws
