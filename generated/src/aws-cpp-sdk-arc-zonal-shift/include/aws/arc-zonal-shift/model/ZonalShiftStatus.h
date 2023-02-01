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
  enum class ZonalShiftStatus
  {
    NOT_SET,
    ACTIVE,
    EXPIRED,
    CANCELED
  };

namespace ZonalShiftStatusMapper
{
AWS_ARCZONALSHIFT_API ZonalShiftStatus GetZonalShiftStatusForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForZonalShiftStatus(ZonalShiftStatus value);
} // namespace ZonalShiftStatusMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
