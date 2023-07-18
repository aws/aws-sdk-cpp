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
  enum class ColumnTagName
  {
    NOT_SET,
    COLUMN_GEOGRAPHIC_ROLE,
    COLUMN_DESCRIPTION
  };

namespace ColumnTagNameMapper
{
AWS_QUICKSIGHT_API ColumnTagName GetColumnTagNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForColumnTagName(ColumnTagName value);
} // namespace ColumnTagNameMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
