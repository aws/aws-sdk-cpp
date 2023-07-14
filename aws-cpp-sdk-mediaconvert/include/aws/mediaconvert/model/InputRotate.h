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
  enum class InputRotate
  {
    NOT_SET,
    DEGREE_0,
    DEGREES_90,
    DEGREES_180,
    DEGREES_270,
    AUTO
  };

namespace InputRotateMapper
{
AWS_MEDIACONVERT_API InputRotate GetInputRotateForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputRotate(InputRotate value);
} // namespace InputRotateMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
