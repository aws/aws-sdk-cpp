/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ChimeSDKMediaPipelines
{
namespace ChimeSDKMediaPipelinesEndpoint
{
AWS_CHIMESDKMEDIAPIPELINES_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ChimeSDKMediaPipelinesEndpoint
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
