/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class BarsArrangement
  {
    NOT_SET,
    CLUSTERED,
    STACKED,
    STACKED_PERCENT
  };

namespace BarsArrangementMapper
{
AWS_QUICKSIGHT_API BarsArrangement GetBarsArrangementForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForBarsArrangement(BarsArrangement value);
} // namespace BarsArrangementMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
