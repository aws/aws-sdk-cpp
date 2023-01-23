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
  enum class Format
  {
    NOT_SET,
    JPEG,
    PNG
  };

namespace FormatMapper
{
AWS_KINESISVIDEO_API Format GetFormatForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForFormat(Format value);
} // namespace FormatMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
