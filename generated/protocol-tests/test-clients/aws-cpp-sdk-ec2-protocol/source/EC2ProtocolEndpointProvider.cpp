/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-protocol/EC2ProtocolEndpointProvider.h>
#include <aws/ec2-protocol/internal/EC2ProtocolEndpointRules.h>

namespace Aws {
#ifndef AWS_EC2PROTOCOL_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EC2Protocol::Endpoint::EC2ProtocolClientConfiguration,
                                                   EC2Protocol::Endpoint::EC2ProtocolBuiltInParameters,
                                                   EC2Protocol::Endpoint::EC2ProtocolClientContextParameters>;

template class Aws::Endpoint::DefaultEndpointProvider<EC2Protocol::Endpoint::EC2ProtocolClientConfiguration,
                                                      EC2Protocol::Endpoint::EC2ProtocolBuiltInParameters,
                                                      EC2Protocol::Endpoint::EC2ProtocolClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EC2Protocol {
namespace Endpoint {
EC2ProtocolEndpointProvider::EC2ProtocolEndpointProvider()
    : EC2ProtocolDefaultEpProviderBase(Aws::EC2Protocol::EC2ProtocolEndpointRules::GetRulesBlob(),
                                       Aws::EC2Protocol::EC2ProtocolEndpointRules::RulesBlobSize) {}

void EC2ProtocolBuiltInParameters::SetFromClientConfiguration(const EC2ProtocolClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EC2ProtocolClientConfiguration::BaseClientConfigClass&>(config));
}

void EC2ProtocolBuiltInParameters::SetFromClientConfiguration(const EC2ProtocolClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EC2ProtocolClientConfiguration::BaseClientConfigClass&>(config), serviceName);
}

}  // namespace Endpoint
}  // namespace EC2Protocol
}  // namespace Aws
