/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class VideoMuxType
  {
    NOT_SET,
    VideoOnly
  };

namespace VideoMuxTypeMapper
{
AWS_CHIME_API VideoMuxType GetVideoMuxTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForVideoMuxType(VideoMuxType value);
} // namespace VideoMuxTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
