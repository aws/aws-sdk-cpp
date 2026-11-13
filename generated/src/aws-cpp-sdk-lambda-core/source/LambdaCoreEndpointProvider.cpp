/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda-core/LambdaCoreEndpointProvider.h>
#include <aws/lambda-core/internal/LambdaCoreEndpointRules.h>

namespace Aws {
#ifndef AWS_LAMBDACORE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<LambdaCore::Endpoint::LambdaCoreClientConfiguration,
                                                   LambdaCore::Endpoint::LambdaCoreBuiltInParameters,
                                                   LambdaCore::Endpoint::LambdaCoreClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<LambdaCore::Endpoint::LambdaCoreClientConfiguration,
                                                  LambdaCore::Endpoint::LambdaCoreBuiltInParameters,
                                                  LambdaCore::Endpoint::LambdaCoreClientContextParameters>;
}  // namespace Endpoint
#endif

namespace LambdaCore {
namespace Endpoint {
LambdaCoreEndpointProvider::LambdaCoreEndpointProvider()
    : LambdaCoreDefaultEpProviderBase(Aws::LambdaCore::LambdaCoreEndpointRules::GetRulesBlob(),
                                      Aws::LambdaCore::LambdaCoreEndpointRules::RulesBlobSize) {}

void LambdaCoreBuiltInParameters::SetFromClientConfiguration(const LambdaCoreClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const LambdaCoreClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void LambdaCoreBuiltInParameters::SetFromClientConfiguration(const LambdaCoreClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const LambdaCoreClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void LambdaCoreBuiltInParameters::SetServiceSpecificParameters(const LambdaCoreClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace LambdaCore
}  // namespace Aws
