/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ColumnStatisticsType
  {
    NOT_SET,
    BOOLEAN,
    DATE,
    DECIMAL,
    DOUBLE,
    LONG,
    STRING,
    BINARY
  };

namespace ColumnStatisticsTypeMapper
{
AWS_GLUE_API ColumnStatisticsType GetColumnStatisticsTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForColumnStatisticsType(ColumnStatisticsType value);
} // namespace ColumnStatisticsTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
