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
  enum class AutoshiftAppliedStatus
  {
    NOT_SET,
    APPLIED,
    NOT_APPLIED
  };

namespace AutoshiftAppliedStatusMapper
{
AWS_ARCZONALSHIFT_API AutoshiftAppliedStatus GetAutoshiftAppliedStatusForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForAutoshiftAppliedStatus(AutoshiftAppliedStatus value);
} // namespace AutoshiftAppliedStatusMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
