/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/ChimeSDKVoiceEndpointProvider.h>
#include <aws/chime-sdk-voice/internal/ChimeSDKVoiceEndpointRules.h>

namespace Aws {
#ifndef AWS_CHIMESDKVOICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientConfiguration,
                                                   ChimeSDKVoice::Endpoint::ChimeSDKVoiceBuiltInParameters,
                                                   ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientConfiguration,
                                                  ChimeSDKVoice::Endpoint::ChimeSDKVoiceBuiltInParameters,
                                                  ChimeSDKVoice::Endpoint::ChimeSDKVoiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ChimeSDKVoice {
namespace Endpoint {
ChimeSDKVoiceEndpointProvider::ChimeSDKVoiceEndpointProvider()
    : ChimeSDKVoiceDefaultEpProviderBase(Aws::ChimeSDKVoice::ChimeSDKVoiceEndpointRules::GetRulesBlob(),
                                         Aws::ChimeSDKVoice::ChimeSDKVoiceEndpointRules::RulesBlobSize) {}

void ChimeSDKVoiceBuiltInParameters::SetFromClientConfiguration(const ChimeSDKVoiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ChimeSDKVoiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ChimeSDKVoiceBuiltInParameters::SetFromClientConfiguration(const ChimeSDKVoiceClientConfiguration& config,
                                                                const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ChimeSDKVoiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ChimeSDKVoiceBuiltInParameters::SetServiceSpecificParameters(const ChimeSDKVoiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ChimeSDKVoice
}  // namespace Aws
