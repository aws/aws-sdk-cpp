/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/IvschatEndpointProvider.h>
#include <aws/ivschat/internal/IvschatEndpointRules.h>

namespace Aws {
#ifndef AWS_IVSCHAT_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ivschat::Endpoint::IvschatClientConfiguration,
                                                   ivschat::Endpoint::IvschatBuiltInParameters,
                                                   ivschat::Endpoint::IvschatClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ivschat::Endpoint::IvschatClientConfiguration,
                                                  ivschat::Endpoint::IvschatBuiltInParameters,
                                                  ivschat::Endpoint::IvschatClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ivschat {
namespace Endpoint {
IvschatEndpointProvider::IvschatEndpointProvider()
    : IvschatDefaultEpProviderBase(Aws::ivschat::IvschatEndpointRules::GetRulesBlob(), Aws::ivschat::IvschatEndpointRules::RulesBlobSize) {}

void IvschatBuiltInParameters::SetFromClientConfiguration(const IvschatClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IvschatClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IvschatBuiltInParameters::SetFromClientConfiguration(const IvschatClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IvschatClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IvschatBuiltInParameters::SetServiceSpecificParameters(const IvschatClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ivschat
}  // namespace Aws
