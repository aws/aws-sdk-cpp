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
  enum class ZonalAutoshiftStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ZonalAutoshiftStatusMapper
{
AWS_ARCZONALSHIFT_API ZonalAutoshiftStatus GetZonalAutoshiftStatusForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForZonalAutoshiftStatus(ZonalAutoshiftStatus value);
} // namespace ZonalAutoshiftStatusMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
