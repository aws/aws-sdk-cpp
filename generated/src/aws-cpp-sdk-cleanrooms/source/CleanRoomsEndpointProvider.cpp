/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/CleanRoomsEndpointProvider.h>
#include <aws/cleanrooms/internal/CleanRoomsEndpointRules.h>

namespace Aws {
#ifndef AWS_CLEANROOMS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CleanRooms::Endpoint::CleanRoomsClientConfiguration,
                                                   CleanRooms::Endpoint::CleanRoomsBuiltInParameters,
                                                   CleanRooms::Endpoint::CleanRoomsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CleanRooms::Endpoint::CleanRoomsClientConfiguration,
                                                  CleanRooms::Endpoint::CleanRoomsBuiltInParameters,
                                                  CleanRooms::Endpoint::CleanRoomsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CleanRooms {
namespace Endpoint {
CleanRoomsEndpointProvider::CleanRoomsEndpointProvider()
    : CleanRoomsDefaultEpProviderBase(Aws::CleanRooms::CleanRoomsEndpointRules::GetRulesBlob(),
                                      Aws::CleanRooms::CleanRoomsEndpointRules::RulesBlobSize) {}

void CleanRoomsBuiltInParameters::SetFromClientConfiguration(const CleanRoomsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CleanRoomsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CleanRoomsBuiltInParameters::SetFromClientConfiguration(const CleanRoomsClientConfiguration& config, const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CleanRoomsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CleanRoomsBuiltInParameters::SetServiceSpecificParameters(const CleanRoomsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CleanRooms
}  // namespace Aws
