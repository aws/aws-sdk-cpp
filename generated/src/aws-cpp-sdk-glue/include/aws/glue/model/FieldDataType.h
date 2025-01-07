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
  enum class FieldDataType
  {
    NOT_SET,
    INT,
    SMALLINT,
    BIGINT,
    FLOAT,
    LONG,
    DATE,
    BOOLEAN,
    MAP,
    ARRAY,
    STRING,
    TIMESTAMP,
    DECIMAL,
    BYTE,
    SHORT,
    DOUBLE,
    STRUCT
  };

namespace FieldDataTypeMapper
{
AWS_GLUE_API FieldDataType GetFieldDataTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForFieldDataType(FieldDataType value);
} // namespace FieldDataTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
