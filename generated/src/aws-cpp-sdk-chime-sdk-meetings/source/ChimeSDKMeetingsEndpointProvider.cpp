/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointProvider.h>
#include <aws/chime-sdk-meetings/internal/ChimeSDKMeetingsEndpointRules.h>

namespace Aws {
#ifndef AWS_CHIMESDKMEETINGS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientConfiguration,
                                                   ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsBuiltInParameters,
                                                   ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientConfiguration,
                                                  ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsBuiltInParameters,
                                                  ChimeSDKMeetings::Endpoint::ChimeSDKMeetingsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ChimeSDKMeetings {
namespace Endpoint {
ChimeSDKMeetingsEndpointProvider::ChimeSDKMeetingsEndpointProvider()
    : ChimeSDKMeetingsDefaultEpProviderBase(Aws::ChimeSDKMeetings::ChimeSDKMeetingsEndpointRules::GetRulesBlob(),
                                            Aws::ChimeSDKMeetings::ChimeSDKMeetingsEndpointRules::RulesBlobSize) {}

void ChimeSDKMeetingsBuiltInParameters::SetFromClientConfiguration(const ChimeSDKMeetingsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChimeSDKMeetingsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChimeSDKMeetingsBuiltInParameters::SetFromClientConfiguration(const ChimeSDKMeetingsClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChimeSDKMeetingsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChimeSDKMeetingsBuiltInParameters::SetServiceSpecificParameters(const ChimeSDKMeetingsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ChimeSDKMeetings
}  // namespace Aws
