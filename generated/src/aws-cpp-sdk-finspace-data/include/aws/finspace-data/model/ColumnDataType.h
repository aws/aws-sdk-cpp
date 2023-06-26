/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{
  enum class ColumnDataType
  {
    NOT_SET,
    STRING,
    CHAR_,
    INTEGER,
    TINYINT,
    SMALLINT,
    BIGINT,
    FLOAT,
    DOUBLE,
    DATE,
    DATETIME,
    BOOLEAN,
    BINARY
  };

namespace ColumnDataTypeMapper
{
AWS_FINSPACEDATA_API ColumnDataType GetColumnDataTypeForName(const Aws::String& name);

AWS_FINSPACEDATA_API Aws::String GetNameForColumnDataType(ColumnDataType value);
} // namespace ColumnDataTypeMapper
} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
