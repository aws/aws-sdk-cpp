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
  enum class Vp8RateControlMode
  {
    NOT_SET,
    VBR
  };

namespace Vp8RateControlModeMapper
{
AWS_MEDIACONVERT_API Vp8RateControlMode GetVp8RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp8RateControlMode(Vp8RateControlMode value);
} // namespace Vp8RateControlModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
