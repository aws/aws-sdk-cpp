/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/EC2EndpointProvider.h>
#include <aws/ec2/internal/EC2EndpointRules.h>

namespace Aws {
#ifndef AWS_EC2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EC2::Endpoint::EC2ClientConfiguration, EC2::Endpoint::EC2BuiltInParameters,
                                                   EC2::Endpoint::EC2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EC2::Endpoint::EC2ClientConfiguration, EC2::Endpoint::EC2BuiltInParameters,
                                                  EC2::Endpoint::EC2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EC2 {
namespace Endpoint {
EC2EndpointProvider::EC2EndpointProvider()
    : EC2DefaultEpProviderBase(Aws::EC2::EC2EndpointRules::GetRulesBlob(), Aws::EC2::EC2EndpointRules::RulesBlobSize) {}

void EC2BuiltInParameters::SetFromClientConfiguration(const EC2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EC2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EC2BuiltInParameters::SetFromClientConfiguration(const EC2ClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EC2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EC2BuiltInParameters::SetServiceSpecificParameters(const EC2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EC2
}  // namespace Aws
