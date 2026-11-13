/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/CleanRoomsMLEndpointProvider.h>
#include <aws/cleanroomsml/internal/CleanRoomsMLEndpointRules.h>

namespace Aws {
#ifndef AWS_CLEANROOMSML_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CleanRoomsML::Endpoint::CleanRoomsMLClientConfiguration,
                                                   CleanRoomsML::Endpoint::CleanRoomsMLBuiltInParameters,
                                                   CleanRoomsML::Endpoint::CleanRoomsMLClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CleanRoomsML::Endpoint::CleanRoomsMLClientConfiguration,
                                                  CleanRoomsML::Endpoint::CleanRoomsMLBuiltInParameters,
                                                  CleanRoomsML::Endpoint::CleanRoomsMLClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CleanRoomsML {
namespace Endpoint {
CleanRoomsMLEndpointProvider::CleanRoomsMLEndpointProvider()
    : CleanRoomsMLDefaultEpProviderBase(Aws::CleanRoomsML::CleanRoomsMLEndpointRules::GetRulesBlob(),
                                        Aws::CleanRoomsML::CleanRoomsMLEndpointRules::RulesBlobSize) {}

void CleanRoomsMLBuiltInParameters::SetFromClientConfiguration(const CleanRoomsMLClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CleanRoomsMLClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CleanRoomsMLBuiltInParameters::SetFromClientConfiguration(const CleanRoomsMLClientConfiguration& config,
                                                               const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CleanRoomsMLClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CleanRoomsMLBuiltInParameters::SetServiceSpecificParameters(const CleanRoomsMLClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CleanRoomsML
}  // namespace Aws
