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
  enum class CmafTargetDurationCompatibilityMode
  {
    NOT_SET,
    LEGACY,
    SPEC_COMPLIANT
  };

namespace CmafTargetDurationCompatibilityModeMapper
{
AWS_MEDIACONVERT_API CmafTargetDurationCompatibilityMode GetCmafTargetDurationCompatibilityModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode value);
} // namespace CmafTargetDurationCompatibilityModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
