/**
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
  enum class ConflictExceptionReason
  {
    NOT_SET,
    ZonalShiftAlreadyExists,
    ZonalShiftStatusNotActive,
    SimultaneousZonalShiftsConflict
  };

namespace ConflictExceptionReasonMapper
{
AWS_ARCZONALSHIFT_API ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason value);
} // namespace ConflictExceptionReasonMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
