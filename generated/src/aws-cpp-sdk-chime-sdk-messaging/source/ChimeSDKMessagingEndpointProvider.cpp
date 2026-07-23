/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/ChimeSDKMessagingEndpointProvider.h>
#include <aws/chime-sdk-messaging/internal/ChimeSDKMessagingEndpointRules.h>

namespace Aws {
namespace ChimeSDKMessaging {
namespace Endpoint {
ChimeSDKMessagingEndpointProvider::ChimeSDKMessagingEndpointProvider()
    : ChimeSDKMessagingDefaultEpProviderBase(Aws::ChimeSDKMessaging::ChimeSDKMessagingEndpointRules::GetRulesBlob(),
                                             Aws::ChimeSDKMessaging::ChimeSDKMessagingEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ChimeSDKMessaging
}  // namespace Aws
