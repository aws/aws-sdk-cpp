/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class PlaybackMode
  {
    NOT_SET,
    LOOP
  };

namespace PlaybackModeMapper
{
AWS_MEDIATAILOR_API PlaybackMode GetPlaybackModeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForPlaybackMode(PlaybackMode value);
} // namespace PlaybackModeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
