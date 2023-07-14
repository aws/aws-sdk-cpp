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
  enum class Eac3SurroundMode
  {
    NOT_SET,
    NOT_INDICATED,
    ENABLED,
    DISABLED
  };

namespace Eac3SurroundModeMapper
{
AWS_MEDIACONVERT_API Eac3SurroundMode GetEac3SurroundModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3SurroundMode(Eac3SurroundMode value);
} // namespace Eac3SurroundModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
