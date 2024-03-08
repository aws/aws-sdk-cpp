/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{
  enum class VideoResolution
  {
    NOT_SET,
    None,
    HD,
    FHD
  };

namespace VideoResolutionMapper
{
AWS_CHIMESDKMEETINGS_API VideoResolution GetVideoResolutionForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForVideoResolution(VideoResolution value);
} // namespace VideoResolutionMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
