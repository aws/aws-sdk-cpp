/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class SmoothGroupEventStopBehavior
  {
    NOT_SET,
    NONE,
    SEND_EOS
  };

namespace SmoothGroupEventStopBehaviorMapper
{
AWS_MEDIALIVE_API SmoothGroupEventStopBehavior GetSmoothGroupEventStopBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSmoothGroupEventStopBehavior(SmoothGroupEventStopBehavior value);
} // namespace SmoothGroupEventStopBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
