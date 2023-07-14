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
  enum class Eac3SurroundExMode
  {
    NOT_SET,
    NOT_INDICATED,
    ENABLED,
    DISABLED
  };

namespace Eac3SurroundExModeMapper
{
AWS_MEDIACONVERT_API Eac3SurroundExMode GetEac3SurroundExModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3SurroundExMode(Eac3SurroundExMode value);
} // namespace Eac3SurroundExModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
