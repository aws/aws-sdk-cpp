/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMediaPipelines
{
namespace Model
{
  enum class LiveConnectorSinkType
  {
    NOT_SET,
    RTMP
  };

namespace LiveConnectorSinkTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkType GetLiveConnectorSinkTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForLiveConnectorSinkType(LiveConnectorSinkType value);
} // namespace LiveConnectorSinkTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
