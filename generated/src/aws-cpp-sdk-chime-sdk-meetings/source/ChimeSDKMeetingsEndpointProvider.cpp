/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/ChimeSDKMeetingsEndpointProvider.h>
#include <aws/chime-sdk-meetings/internal/ChimeSDKMeetingsEndpointRules.h>

namespace Aws {
namespace ChimeSDKMeetings {
namespace Endpoint {
ChimeSDKMeetingsEndpointProvider::ChimeSDKMeetingsEndpointProvider()
    : ChimeSDKMeetingsDefaultEpProviderBase(Aws::ChimeSDKMeetings::ChimeSDKMeetingsEndpointRules::GetRulesBlob(),
                                            Aws::ChimeSDKMeetings::ChimeSDKMeetingsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ChimeSDKMeetings
}  // namespace Aws
