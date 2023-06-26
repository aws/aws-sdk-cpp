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
  enum class LiveConnectorSourceType
  {
    NOT_SET,
    ChimeSdkMeeting
  };

namespace LiveConnectorSourceTypeMapper
{
AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSourceType GetLiveConnectorSourceTypeForName(const Aws::String& name);

AWS_CHIMESDKMEDIAPIPELINES_API Aws::String GetNameForLiveConnectorSourceType(LiveConnectorSourceType value);
} // namespace LiveConnectorSourceTypeMapper
} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
