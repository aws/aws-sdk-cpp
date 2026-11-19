/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-web/LambdaWebEndpointProvider.h>
#include <aws/lambda-web/internal/LambdaWebEndpointRules.h>

namespace Aws {
#ifndef AWS_LAMBDAWEB_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LambdaWeb::Endpoint::LambdaWebClientConfiguration,
                                                   LambdaWeb::Endpoint::LambdaWebBuiltInParameters,
                                                   LambdaWeb::Endpoint::LambdaWebClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LambdaWeb::Endpoint::LambdaWebClientConfiguration,
                                                  LambdaWeb::Endpoint::LambdaWebBuiltInParameters,
                                                  LambdaWeb::Endpoint::LambdaWebClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LambdaWeb {
namespace Endpoint {
LambdaWebEndpointProvider::LambdaWebEndpointProvider()
    : LambdaWebDefaultEpProviderBase(Aws::LambdaWeb::LambdaWebEndpointRules::GetRulesBlob(),
                                     Aws::LambdaWeb::LambdaWebEndpointRules::RulesBlobSize) {}

void LambdaWebBuiltInParameters::SetFromClientConfiguration(const LambdaWebClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LambdaWebClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LambdaWebBuiltInParameters::SetFromClientConfiguration(const LambdaWebClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LambdaWebClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LambdaWebBuiltInParameters::SetServiceSpecificParameters(const LambdaWebClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LambdaWeb
}  // namespace Aws
