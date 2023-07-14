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
  enum class ProresInterlaceMode
  {
    NOT_SET,
    PROGRESSIVE,
    TOP_FIELD,
    BOTTOM_FIELD,
    FOLLOW_TOP_FIELD,
    FOLLOW_BOTTOM_FIELD
  };

namespace ProresInterlaceModeMapper
{
AWS_MEDIACONVERT_API ProresInterlaceMode GetProresInterlaceModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresInterlaceMode(ProresInterlaceMode value);
} // namespace ProresInterlaceModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
