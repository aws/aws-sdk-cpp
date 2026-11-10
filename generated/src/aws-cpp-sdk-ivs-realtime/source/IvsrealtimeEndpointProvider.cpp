/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/IvsrealtimeEndpointProvider.h>
#include <aws/ivs-realtime/internal/IvsrealtimeEndpointRules.h>

namespace Aws {
#ifndef AWS_IVSREALTIME_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ivsrealtime::Endpoint::IvsrealtimeClientConfiguration,
                                                   ivsrealtime::Endpoint::IvsrealtimeBuiltInParameters,
                                                   ivsrealtime::Endpoint::IvsrealtimeClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ivsrealtime::Endpoint::IvsrealtimeClientConfiguration,
                                                  ivsrealtime::Endpoint::IvsrealtimeBuiltInParameters,
                                                  ivsrealtime::Endpoint::IvsrealtimeClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ivsrealtime {
namespace Endpoint {
IvsrealtimeEndpointProvider::IvsrealtimeEndpointProvider()
    : IvsrealtimeDefaultEpProviderBase(Aws::ivsrealtime::IvsrealtimeEndpointRules::GetRulesBlob(),
                                       Aws::ivsrealtime::IvsrealtimeEndpointRules::RulesBlobSize) {}

void IvsrealtimeBuiltInParameters::SetFromClientConfiguration(const IvsrealtimeClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IvsrealtimeClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IvsrealtimeBuiltInParameters::SetFromClientConfiguration(const IvsrealtimeClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IvsrealtimeClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IvsrealtimeBuiltInParameters::SetServiceSpecificParameters(const IvsrealtimeClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ivsrealtime
}  // namespace Aws
