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
  enum class ThumbnailRecordingMode
  {
    NOT_SET,
    INTERVAL,
    DISABLED
  };

namespace ThumbnailRecordingModeMapper
{
AWS_IVSREALTIME_API ThumbnailRecordingMode GetThumbnailRecordingModeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForThumbnailRecordingMode(ThumbnailRecordingMode value);
} // namespace ThumbnailRecordingModeMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
