/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-microvms/LambdaMicrovmsEndpointProvider.h>
#include <aws/lambda-microvms/internal/LambdaMicrovmsEndpointRules.h>

namespace Aws {
#ifndef AWS_LAMBDAMICROVMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LambdaMicrovms::Endpoint::LambdaMicrovmsClientConfiguration,
                                                   LambdaMicrovms::Endpoint::LambdaMicrovmsBuiltInParameters,
                                                   LambdaMicrovms::Endpoint::LambdaMicrovmsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LambdaMicrovms::Endpoint::LambdaMicrovmsClientConfiguration,
                                                  LambdaMicrovms::Endpoint::LambdaMicrovmsBuiltInParameters,
                                                  LambdaMicrovms::Endpoint::LambdaMicrovmsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LambdaMicrovms {
namespace Endpoint {
LambdaMicrovmsEndpointProvider::LambdaMicrovmsEndpointProvider()
    : LambdaMicrovmsDefaultEpProviderBase(Aws::LambdaMicrovms::LambdaMicrovmsEndpointRules::GetRulesBlob(),
                                          Aws::LambdaMicrovms::LambdaMicrovmsEndpointRules::RulesBlobSize) {}

void LambdaMicrovmsBuiltInParameters::SetFromClientConfiguration(const LambdaMicrovmsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LambdaMicrovmsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LambdaMicrovmsBuiltInParameters::SetFromClientConfiguration(const LambdaMicrovmsClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LambdaMicrovmsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LambdaMicrovmsBuiltInParameters::SetServiceSpecificParameters(const LambdaMicrovmsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LambdaMicrovms
}  // namespace Aws
