/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/CloudFormationEndpointProvider.h>
#include <aws/cloudformation/internal/CloudFormationEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDFORMATION_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudFormation::Endpoint::CloudFormationClientConfiguration,
                                                   CloudFormation::Endpoint::CloudFormationBuiltInParameters,
                                                   CloudFormation::Endpoint::CloudFormationClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudFormation::Endpoint::CloudFormationClientConfiguration,
                                                  CloudFormation::Endpoint::CloudFormationBuiltInParameters,
                                                  CloudFormation::Endpoint::CloudFormationClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudFormation {
namespace Endpoint {
CloudFormationEndpointProvider::CloudFormationEndpointProvider()
    : CloudFormationDefaultEpProviderBase(Aws::CloudFormation::CloudFormationEndpointRules::GetRulesBlob(),
                                          Aws::CloudFormation::CloudFormationEndpointRules::RulesBlobSize) {}

void CloudFormationBuiltInParameters::SetFromClientConfiguration(const CloudFormationClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudFormationClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudFormationBuiltInParameters::SetFromClientConfiguration(const CloudFormationClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudFormationClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudFormationBuiltInParameters::SetServiceSpecificParameters(const CloudFormationClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudFormation
}  // namespace Aws
