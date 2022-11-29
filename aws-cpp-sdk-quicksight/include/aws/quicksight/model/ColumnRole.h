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
  enum class ColumnRole
  {
    NOT_SET,
    DIMENSION,
    MEASURE
  };

namespace ColumnRoleMapper
{
AWS_QUICKSIGHT_API ColumnRole GetColumnRoleForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColumnRole(ColumnRole value);
} // namespace ColumnRoleMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
