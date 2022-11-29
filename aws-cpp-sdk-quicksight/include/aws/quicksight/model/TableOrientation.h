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
  enum class TableOrientation
  {
    NOT_SET,
    VERTICAL,
    HORIZONTAL
  };

namespace TableOrientationMapper
{
AWS_QUICKSIGHT_API TableOrientation GetTableOrientationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTableOrientation(TableOrientation value);
} // namespace TableOrientationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
