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
  enum class ColumnDataType
  {
    NOT_SET,
    STRING,
    INTEGER,
    DECIMAL,
    DATETIME
  };

namespace ColumnDataTypeMapper
{
AWS_QUICKSIGHT_API ColumnDataType GetColumnDataTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColumnDataType(ColumnDataType value);
} // namespace ColumnDataTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
