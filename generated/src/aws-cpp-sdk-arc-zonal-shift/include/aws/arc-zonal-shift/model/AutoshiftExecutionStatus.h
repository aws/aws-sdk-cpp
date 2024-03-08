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
  enum class AutoshiftExecutionStatus
  {
    NOT_SET,
    ACTIVE,
    COMPLETED
  };

namespace AutoshiftExecutionStatusMapper
{
AWS_ARCZONALSHIFT_API AutoshiftExecutionStatus GetAutoshiftExecutionStatusForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForAutoshiftExecutionStatus(AutoshiftExecutionStatus value);
} // namespace AutoshiftExecutionStatusMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
