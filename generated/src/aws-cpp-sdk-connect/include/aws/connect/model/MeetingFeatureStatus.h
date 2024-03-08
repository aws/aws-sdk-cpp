/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
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
AWS_CONNECT_API MeetingFeatureStatus GetMeetingFeatureStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMeetingFeatureStatus(MeetingFeatureStatus value);
} // namespace MeetingFeatureStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
