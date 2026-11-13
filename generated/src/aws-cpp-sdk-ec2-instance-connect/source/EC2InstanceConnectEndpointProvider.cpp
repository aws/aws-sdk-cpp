/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2-instance-connect/EC2InstanceConnectEndpointProvider.h>
#include <aws/ec2-instance-connect/internal/EC2InstanceConnectEndpointRules.h>

namespace Aws {
#ifndef AWS_EC2INSTANCECONNECT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EC2InstanceConnect::Endpoint::EC2InstanceConnectClientConfiguration,
                                                   EC2InstanceConnect::Endpoint::EC2InstanceConnectBuiltInParameters,
                                                   EC2InstanceConnect::Endpoint::EC2InstanceConnectClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EC2InstanceConnect::Endpoint::EC2InstanceConnectClientConfiguration,
                                                  EC2InstanceConnect::Endpoint::EC2InstanceConnectBuiltInParameters,
                                                  EC2InstanceConnect::Endpoint::EC2InstanceConnectClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EC2InstanceConnect {
namespace Endpoint {
EC2InstanceConnectEndpointProvider::EC2InstanceConnectEndpointProvider()
    : EC2InstanceConnectDefaultEpProviderBase(Aws::EC2InstanceConnect::EC2InstanceConnectEndpointRules::GetRulesBlob(),
                                              Aws::EC2InstanceConnect::EC2InstanceConnectEndpointRules::RulesBlobSize) {}

void EC2InstanceConnectBuiltInParameters::SetFromClientConfiguration(const EC2InstanceConnectClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EC2InstanceConnectClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EC2InstanceConnectBuiltInParameters::SetFromClientConfiguration(const EC2InstanceConnectClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EC2InstanceConnectClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EC2InstanceConnectBuiltInParameters::SetServiceSpecificParameters(const EC2InstanceConnectClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EC2InstanceConnect
}  // namespace Aws
