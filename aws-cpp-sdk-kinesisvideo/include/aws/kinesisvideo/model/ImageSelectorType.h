/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class ImageSelectorType
  {
    NOT_SET,
    SERVER_TIMESTAMP,
    PRODUCER_TIMESTAMP
  };

namespace ImageSelectorTypeMapper
{
AWS_KINESISVIDEO_API ImageSelectorType GetImageSelectorTypeForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForImageSelectorType(ImageSelectorType value);
} // namespace ImageSelectorTypeMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
