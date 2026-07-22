/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/ChimeSDKVoiceEndpointProvider.h>
#include <aws/chime-sdk-voice/internal/ChimeSDKVoiceEndpointRules.h>

namespace Aws {
namespace ChimeSDKVoice {
namespace Endpoint {
ChimeSDKVoiceEndpointProvider::ChimeSDKVoiceEndpointProvider()
    : ChimeSDKVoiceDefaultEpProviderBase(Aws::ChimeSDKVoice::ChimeSDKVoiceEndpointRules::GetRulesBlob(),
                                         Aws::ChimeSDKVoice::ChimeSDKVoiceEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ChimeSDKVoice
}  // namespace Aws
