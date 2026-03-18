/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesClient.h>
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>

#include <algorithm>

namespace Aws {
namespace ChimeSDKMediaPipelines {

template <typename DerivedClient = ChimeSDKMediaPipelinesClient>
class ChimeSDKMediaPipelinesWaiter {
 public:
};
}  // namespace ChimeSDKMediaPipelines
}  // namespace Aws
