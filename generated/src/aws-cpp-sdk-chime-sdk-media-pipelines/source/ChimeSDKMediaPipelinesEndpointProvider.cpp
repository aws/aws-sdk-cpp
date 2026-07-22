/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesEndpointProvider.h>
#include <aws/chime-sdk-media-pipelines/internal/ChimeSDKMediaPipelinesEndpointRules.h>

namespace Aws {
namespace ChimeSDKMediaPipelines {
namespace Endpoint {
ChimeSDKMediaPipelinesEndpointProvider::ChimeSDKMediaPipelinesEndpointProvider()
    : ChimeSDKMediaPipelinesDefaultEpProviderBase(Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesEndpointRules::GetRulesBlob(),
                                                  Aws::ChimeSDKMediaPipelines::ChimeSDKMediaPipelinesEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
