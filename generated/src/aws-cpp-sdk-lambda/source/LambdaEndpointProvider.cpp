/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/LambdaEndpointProvider.h>
#include <aws/lambda/internal/LambdaEndpointRules.h>

namespace Aws {
#ifndef AWS_LAMBDA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Lambda::Endpoint::LambdaClientConfiguration, Lambda::Endpoint::LambdaBuiltInParameters,
                                                   Lambda::Endpoint::LambdaClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Lambda::Endpoint::LambdaClientConfiguration, Lambda::Endpoint::LambdaBuiltInParameters,
                                                  Lambda::Endpoint::LambdaClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Lambda {
namespace Endpoint {
LambdaEndpointProvider::LambdaEndpointProvider()
    : LambdaDefaultEpProviderBase(Aws::Lambda::LambdaEndpointRules::GetRulesBlob(), Aws::Lambda::LambdaEndpointRules::RulesBlobSize) {}

void LambdaBuiltInParameters::SetFromClientConfiguration(const LambdaClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LambdaClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LambdaBuiltInParameters::SetFromClientConfiguration(const LambdaClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LambdaClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LambdaBuiltInParameters::SetServiceSpecificParameters(const LambdaClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Lambda
}  // namespace Aws
