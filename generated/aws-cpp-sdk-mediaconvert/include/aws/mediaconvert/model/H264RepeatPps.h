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
  enum class H264RepeatPps
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264RepeatPpsMapper
{
AWS_MEDIACONVERT_API H264RepeatPps GetH264RepeatPpsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264RepeatPps(H264RepeatPps value);
} // namespace H264RepeatPpsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
