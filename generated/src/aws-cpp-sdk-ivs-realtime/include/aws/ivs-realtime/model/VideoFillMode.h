/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{
  enum class VideoFillMode
  {
    NOT_SET,
    FILL,
    COVER,
    CONTAIN
  };

namespace VideoFillModeMapper
{
AWS_IVSREALTIME_API VideoFillMode GetVideoFillModeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForVideoFillMode(VideoFillMode value);
} // namespace VideoFillModeMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
