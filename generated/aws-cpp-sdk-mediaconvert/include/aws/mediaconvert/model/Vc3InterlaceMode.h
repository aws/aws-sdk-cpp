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
  enum class Vc3InterlaceMode
  {
    NOT_SET,
    INTERLACED,
    PROGRESSIVE
  };

namespace Vc3InterlaceModeMapper
{
AWS_MEDIACONVERT_API Vc3InterlaceMode GetVc3InterlaceModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVc3InterlaceMode(Vc3InterlaceMode value);
} // namespace Vc3InterlaceModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
