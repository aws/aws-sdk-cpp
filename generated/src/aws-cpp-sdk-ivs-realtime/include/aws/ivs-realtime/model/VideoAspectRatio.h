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
  enum class VideoAspectRatio
  {
    NOT_SET,
    AUTO,
    VIDEO,
    SQUARE,
    PORTRAIT
  };

namespace VideoAspectRatioMapper
{
AWS_IVSREALTIME_API VideoAspectRatio GetVideoAspectRatioForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForVideoAspectRatio(VideoAspectRatio value);
} // namespace VideoAspectRatioMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
