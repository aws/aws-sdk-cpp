/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/ConnectCasesEndpointProvider.h>
#include <aws/connectcases/internal/ConnectCasesEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTCASES_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectCases::Endpoint::ConnectCasesClientConfiguration,
                                                   ConnectCases::Endpoint::ConnectCasesBuiltInParameters,
                                                   ConnectCases::Endpoint::ConnectCasesClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectCases::Endpoint::ConnectCasesClientConfiguration,
                                                  ConnectCases::Endpoint::ConnectCasesBuiltInParameters,
                                                  ConnectCases::Endpoint::ConnectCasesClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectCases {
namespace Endpoint {
ConnectCasesEndpointProvider::ConnectCasesEndpointProvider()
    : ConnectCasesDefaultEpProviderBase(Aws::ConnectCases::ConnectCasesEndpointRules::GetRulesBlob(),
                                        Aws::ConnectCases::ConnectCasesEndpointRules::RulesBlobSize) {}

void ConnectCasesBuiltInParameters::SetFromClientConfiguration(const ConnectCasesClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectCasesClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectCasesBuiltInParameters::SetFromClientConfiguration(const ConnectCasesClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectCasesClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectCasesBuiltInParameters::SetServiceSpecificParameters(const ConnectCasesClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectCases
}  // namespace Aws
