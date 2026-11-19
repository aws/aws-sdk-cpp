/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/ECRPublicEndpointProvider.h>
#include <aws/ecr-public/internal/ECRPublicEndpointRules.h>

namespace Aws {
#ifndef AWS_ECRPUBLIC_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ECRPublic::Endpoint::ECRPublicClientConfiguration,
                                                   ECRPublic::Endpoint::ECRPublicBuiltInParameters,
                                                   ECRPublic::Endpoint::ECRPublicClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ECRPublic::Endpoint::ECRPublicClientConfiguration,
                                                  ECRPublic::Endpoint::ECRPublicBuiltInParameters,
                                                  ECRPublic::Endpoint::ECRPublicClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ECRPublic {
namespace Endpoint {
ECRPublicEndpointProvider::ECRPublicEndpointProvider()
    : ECRPublicDefaultEpProviderBase(Aws::ECRPublic::ECRPublicEndpointRules::GetRulesBlob(),
                                     Aws::ECRPublic::ECRPublicEndpointRules::RulesBlobSize) {}

void ECRPublicBuiltInParameters::SetFromClientConfiguration(const ECRPublicClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ECRPublicClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ECRPublicBuiltInParameters::SetFromClientConfiguration(const ECRPublicClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ECRPublicClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ECRPublicBuiltInParameters::SetServiceSpecificParameters(const ECRPublicClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ECRPublic
}  // namespace Aws
