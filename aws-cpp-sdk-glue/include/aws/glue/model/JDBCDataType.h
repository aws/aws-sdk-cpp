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
  enum class JDBCDataType
  {
    NOT_SET,
    ARRAY,
    BIGINT,
    BINARY,
    BIT,
    BLOB,
    BOOLEAN,
    CHAR_,
    CLOB,
    DATALINK,
    DATE,
    DECIMAL,
    DISTINCT,
    DOUBLE,
    FLOAT,
    INTEGER,
    JAVA_OBJECT,
    LONGNVARCHAR,
    LONGVARBINARY,
    LONGVARCHAR,
    NCHAR,
    NCLOB,
    NULL_,
    NUMERIC,
    NVARCHAR,
    OTHER,
    REAL,
    REF,
    REF_CURSOR,
    ROWID,
    SMALLINT,
    SQLXML,
    STRUCT,
    TIME,
    TIME_WITH_TIMEZONE,
    TIMESTAMP,
    TIMESTAMP_WITH_TIMEZONE,
    TINYINT,
    VARBINARY,
    VARCHAR
  };

namespace JDBCDataTypeMapper
{
AWS_GLUE_API JDBCDataType GetJDBCDataTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForJDBCDataType(JDBCDataType value);
} // namespace JDBCDataTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
