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
  enum class Av1RateControlMode
  {
    NOT_SET,
    QVBR
  };

namespace Av1RateControlModeMapper
{
AWS_MEDIACONVERT_API Av1RateControlMode GetAv1RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAv1RateControlMode(Av1RateControlMode value);
} // namespace Av1RateControlModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
