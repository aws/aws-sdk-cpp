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
  enum class DataLabelOverlap
  {
    NOT_SET,
    DISABLE_OVERLAP,
    ENABLE_OVERLAP
  };

namespace DataLabelOverlapMapper
{
AWS_QUICKSIGHT_API DataLabelOverlap GetDataLabelOverlapForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataLabelOverlap(DataLabelOverlap value);
} // namespace DataLabelOverlapMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
