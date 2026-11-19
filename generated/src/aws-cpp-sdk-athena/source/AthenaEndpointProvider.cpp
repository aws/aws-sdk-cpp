/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/AthenaEndpointProvider.h>
#include <aws/athena/internal/AthenaEndpointRules.h>

namespace Aws {
#ifndef AWS_ATHENA_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<Athena::Endpoint::AthenaClientConfiguration, Athena::Endpoint::AthenaBuiltInParameters,
                                                   Athena::Endpoint::AthenaClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<Athena::Endpoint::AthenaClientConfiguration, Athena::Endpoint::AthenaBuiltInParameters,
                                                  Athena::Endpoint::AthenaClientContextParameters>;
}  // namespace Endpoint
#endif

namespace Athena {
namespace Endpoint {
AthenaEndpointProvider::AthenaEndpointProvider()
    : AthenaDefaultEpProviderBase(Aws::Athena::AthenaEndpointRules::GetRulesBlob(), Aws::Athena::AthenaEndpointRules::RulesBlobSize) {}

void AthenaBuiltInParameters::SetFromClientConfiguration(const AthenaClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const AthenaClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void AthenaBuiltInParameters::SetFromClientConfiguration(const AthenaClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const AthenaClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void AthenaBuiltInParameters::SetServiceSpecificParameters(const AthenaClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace Athena
}  // namespace Aws
