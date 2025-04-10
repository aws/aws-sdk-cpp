﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{
  enum class ShiftType
  {
    NOT_SET,
    ZONAL_SHIFT,
    PRACTICE_RUN,
    FIS_EXPERIMENT,
    ZONAL_AUTOSHIFT
  };

namespace ShiftTypeMapper
{
AWS_ARCZONALSHIFT_API ShiftType GetShiftTypeForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForShiftType(ShiftType value);
} // namespace ShiftTypeMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
