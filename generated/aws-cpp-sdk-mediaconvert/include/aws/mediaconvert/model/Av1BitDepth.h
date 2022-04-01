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
  enum class Av1BitDepth
  {
    NOT_SET,
    BIT_8,
    BIT_10
  };

namespace Av1BitDepthMapper
{
AWS_MEDIACONVERT_API Av1BitDepth GetAv1BitDepthForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1BitDepth(Av1BitDepth value);
} // namespace Av1BitDepthMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
