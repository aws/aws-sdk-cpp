/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class H265TimecodeInsertionBehavior
  {
    NOT_SET,
    DISABLED,
    PIC_TIMING_SEI
  };

namespace H265TimecodeInsertionBehaviorMapper
{
AWS_MEDIALIVE_API H265TimecodeInsertionBehavior GetH265TimecodeInsertionBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265TimecodeInsertionBehavior(H265TimecodeInsertionBehavior value);
} // namespace H265TimecodeInsertionBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
