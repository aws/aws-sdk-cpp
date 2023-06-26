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
  enum class MediaPipelineSourceType
  {
    NOT_SET,
    ChimeSdkMeeting
  };

namespace MediaPipelineSourceTypeMapper
{
AWS_CHIME_API MediaPipelineSourceType GetMediaPipelineSourceTypeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForMediaPipelineSourceType(MediaPipelineSourceType value);
} // namespace MediaPipelineSourceTypeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
