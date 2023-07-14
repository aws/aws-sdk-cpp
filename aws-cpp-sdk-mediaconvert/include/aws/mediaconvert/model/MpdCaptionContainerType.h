/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class MpdCaptionContainerType
  {
    NOT_SET,
    RAW,
    FRAGMENTED_MP4
  };

namespace MpdCaptionContainerTypeMapper
{
AWS_MEDIACONVERT_API MpdCaptionContainerType GetMpdCaptionContainerTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpdCaptionContainerType(MpdCaptionContainerType value);
} // namespace MpdCaptionContainerTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
