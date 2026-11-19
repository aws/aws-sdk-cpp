/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/EMRServerlessEndpointProvider.h>
#include <aws/emr-serverless/internal/EMRServerlessEndpointRules.h>

namespace Aws {
#ifndef AWS_EMRSERVERLESS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<EMRServerless::Endpoint::EMRServerlessClientConfiguration,
                                                   EMRServerless::Endpoint::EMRServerlessBuiltInParameters,
                                                   EMRServerless::Endpoint::EMRServerlessClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<EMRServerless::Endpoint::EMRServerlessClientConfiguration,
                                                  EMRServerless::Endpoint::EMRServerlessBuiltInParameters,
                                                  EMRServerless::Endpoint::EMRServerlessClientContextParameters>;
}  // namespace Endpoint
#endif

namespace EMRServerless {
namespace Endpoint {
EMRServerlessEndpointProvider::EMRServerlessEndpointProvider()
    : EMRServerlessDefaultEpProviderBase(Aws::EMRServerless::EMRServerlessEndpointRules::GetRulesBlob(),
                                         Aws::EMRServerless::EMRServerlessEndpointRules::RulesBlobSize) {}

void EMRServerlessBuiltInParameters::SetFromClientConfiguration(const EMRServerlessClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const EMRServerlessClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void EMRServerlessBuiltInParameters::SetFromClientConfiguration(const EMRServerlessClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const EMRServerlessClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void EMRServerlessBuiltInParameters::SetServiceSpecificParameters(const EMRServerlessClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace EMRServerless
}  // namespace Aws
