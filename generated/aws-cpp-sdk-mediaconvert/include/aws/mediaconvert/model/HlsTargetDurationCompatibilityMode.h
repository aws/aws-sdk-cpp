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
  enum class HlsTargetDurationCompatibilityMode
  {
    NOT_SET,
    LEGACY,
    SPEC_COMPLIANT
  };

namespace HlsTargetDurationCompatibilityModeMapper
{
AWS_MEDIACONVERT_API HlsTargetDurationCompatibilityMode GetHlsTargetDurationCompatibilityModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsTargetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode value);
} // namespace HlsTargetDurationCompatibilityModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
