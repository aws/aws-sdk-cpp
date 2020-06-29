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
  enum class Eac3AtmosCodingMode
  {
    NOT_SET,
    CODING_MODE_9_1_6
  };

namespace Eac3AtmosCodingModeMapper
{
AWS_MEDIACONVERT_API Eac3AtmosCodingMode GetEac3AtmosCodingModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosCodingMode(Eac3AtmosCodingMode value);
} // namespace Eac3AtmosCodingModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
