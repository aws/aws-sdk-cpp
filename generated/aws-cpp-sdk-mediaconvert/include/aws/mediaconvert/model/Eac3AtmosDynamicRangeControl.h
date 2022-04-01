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
  enum class Eac3AtmosDynamicRangeControl
  {
    NOT_SET,
    SPECIFIED,
    INITIALIZE_FROM_SOURCE
  };

namespace Eac3AtmosDynamicRangeControlMapper
{
AWS_MEDIACONVERT_API Eac3AtmosDynamicRangeControl GetEac3AtmosDynamicRangeControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosDynamicRangeControl(Eac3AtmosDynamicRangeControl value);
} // namespace Eac3AtmosDynamicRangeControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
