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
  enum class Eac3PhaseControl
  {
    NOT_SET,
    SHIFT_90_DEGREES,
    NO_SHIFT
  };

namespace Eac3PhaseControlMapper
{
AWS_MEDIACONVERT_API Eac3PhaseControl GetEac3PhaseControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3PhaseControl(Eac3PhaseControl value);
} // namespace Eac3PhaseControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
