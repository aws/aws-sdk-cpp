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
  enum class MeetingFeatureStatus
  {
    NOT_SET,
    AVAILABLE,
    UNAVAILABLE
  };

namespace MeetingFeatureStatusMapper
{
AWS_CHIMESDKMEETINGS_API MeetingFeatureStatus GetMeetingFeatureStatusForName(const Aws::String& name);

AWS_CHIMESDKMEETINGS_API Aws::String GetNameForMeetingFeatureStatus(MeetingFeatureStatus value);
} // namespace MeetingFeatureStatusMapper
} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
