/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace RDSDataService
{
namespace Model
{

  /**
   * Column Metadata<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ColumnMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API ColumnMetadata
  {
  public:
    ColumnMetadata();
    ColumnMetadata(Aws::Utils::Json::JsonView jsonValue);
    ColumnMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Homogenous array base SQL type from java.sql.Types.
     */
    inline int GetArrayBaseColumnType() const{ return m_arrayBaseColumnType; }

    /**
     * Homogenous array base SQL type from java.sql.Types.
     */
    inline bool ArrayBaseColumnTypeHasBeenSet() const { return m_arrayBaseColumnTypeHasBeenSet; }

    /**
     * Homogenous array base SQL type from java.sql.Types.
     */
    inline void SetArrayBaseColumnType(int value) { m_arrayBaseColumnTypeHasBeenSet = true; m_arrayBaseColumnType = value; }

    /**
     * Homogenous array base SQL type from java.sql.Types.
     */
    inline ColumnMetadata& WithArrayBaseColumnType(int value) { SetArrayBaseColumnType(value); return *this;}


    /**
     * Whether the designated column is automatically numbered
     */
    inline bool GetIsAutoIncrement() const{ return m_isAutoIncrement; }

    /**
     * Whether the designated column is automatically numbered
     */
    inline bool IsAutoIncrementHasBeenSet() const { return m_isAutoIncrementHasBeenSet; }

    /**
     * Whether the designated column is automatically numbered
     */
    inline void SetIsAutoIncrement(bool value) { m_isAutoIncrementHasBeenSet = true; m_isAutoIncrement = value; }

    /**
     * Whether the designated column is automatically numbered
     */
    inline ColumnMetadata& WithIsAutoIncrement(bool value) { SetIsAutoIncrement(value); return *this;}


    /**
     * Whether values in the designated column's case matters
     */
    inline bool GetIsCaseSensitive() const{ return m_isCaseSensitive; }

    /**
     * Whether values in the designated column's case matters
     */
    inline bool IsCaseSensitiveHasBeenSet() const { return m_isCaseSensitiveHasBeenSet; }

    /**
     * Whether values in the designated column's case matters
     */
    inline void SetIsCaseSensitive(bool value) { m_isCaseSensitiveHasBeenSet = true; m_isCaseSensitive = value; }

    /**
     * Whether values in the designated column's case matters
     */
    inline ColumnMetadata& WithIsCaseSensitive(bool value) { SetIsCaseSensitive(value); return *this;}


    /**
     * Whether values in the designated column is a cash value
     */
    inline bool GetIsCurrency() const{ return m_isCurrency; }

    /**
     * Whether values in the designated column is a cash value
     */
    inline bool IsCurrencyHasBeenSet() const { return m_isCurrencyHasBeenSet; }

    /**
     * Whether values in the designated column is a cash value
     */
    inline void SetIsCurrency(bool value) { m_isCurrencyHasBeenSet = true; m_isCurrency = value; }

    /**
     * Whether values in the designated column is a cash value
     */
    inline ColumnMetadata& WithIsCurrency(bool value) { SetIsCurrency(value); return *this;}


    /**
     * Whether values in the designated column are signed numbers
     */
    inline bool GetIsSigned() const{ return m_isSigned; }

    /**
     * Whether values in the designated column are signed numbers
     */
    inline bool IsSignedHasBeenSet() const { return m_isSignedHasBeenSet; }

    /**
     * Whether values in the designated column are signed numbers
     */
    inline void SetIsSigned(bool value) { m_isSignedHasBeenSet = true; m_isSigned = value; }

    /**
     * Whether values in the designated column are signed numbers
     */
    inline ColumnMetadata& WithIsSigned(bool value) { SetIsSigned(value); return *this;}


    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline ColumnMetadata& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline ColumnMetadata& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * Usually specified by the SQL AS. If not specified, return column name.
     */
    inline ColumnMetadata& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * Name of the column.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of the column.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name of the column.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of the column.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of the column.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of the column.
     */
    inline ColumnMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of the column.
     */
    inline ColumnMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of the column.
     */
    inline ColumnMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Indicates the nullability of values in the designated column. One of
     * columnNoNulls (0), columnNullable (1), columnNullableUnknown (2)
     */
    inline int GetNullable() const{ return m_nullable; }

    /**
     * Indicates the nullability of values in the designated column. One of
     * columnNoNulls (0), columnNullable (1), columnNullableUnknown (2)
     */
    inline bool NullableHasBeenSet() const { return m_nullableHasBeenSet; }

    /**
     * Indicates the nullability of values in the designated column. One of
     * columnNoNulls (0), columnNullable (1), columnNullableUnknown (2)
     */
    inline void SetNullable(int value) { m_nullableHasBeenSet = true; m_nullable = value; }

    /**
     * Indicates the nullability of values in the designated column. One of
     * columnNoNulls (0), columnNullable (1), columnNullableUnknown (2)
     */
    inline ColumnMetadata& WithNullable(int value) { SetNullable(value); return *this;}


    /**
     * Get the designated column's specified column size.For numeric data, this is the
     * maximum precision.  For character data, this is the length in characters. For
     * datetime datatypes, this is the length in characters of the String
     * representation (assuming the maximum allowed precision of the fractional seconds
     * component). For binary data, this is the length in bytes.  For the ROWID
     * datatype, this is the length in bytes. 0 is returned for data types where the
     * column size is not applicable.
     */
    inline int GetPrecision() const{ return m_precision; }

    /**
     * Get the designated column's specified column size.For numeric data, this is the
     * maximum precision.  For character data, this is the length in characters. For
     * datetime datatypes, this is the length in characters of the String
     * representation (assuming the maximum allowed precision of the fractional seconds
     * component). For binary data, this is the length in bytes.  For the ROWID
     * datatype, this is the length in bytes. 0 is returned for data types where the
     * column size is not applicable.
     */
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }

    /**
     * Get the designated column's specified column size.For numeric data, this is the
     * maximum precision.  For character data, this is the length in characters. For
     * datetime datatypes, this is the length in characters of the String
     * representation (assuming the maximum allowed precision of the fractional seconds
     * component). For binary data, this is the length in bytes.  For the ROWID
     * datatype, this is the length in bytes. 0 is returned for data types where the
     * column size is not applicable.
     */
    inline void SetPrecision(int value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * Get the designated column's specified column size.For numeric data, this is the
     * maximum precision.  For character data, this is the length in characters. For
     * datetime datatypes, this is the length in characters of the String
     * representation (assuming the maximum allowed precision of the fractional seconds
     * component). For binary data, this is the length in bytes.  For the ROWID
     * datatype, this is the length in bytes. 0 is returned for data types where the
     * column size is not applicable.
     */
    inline ColumnMetadata& WithPrecision(int value) { SetPrecision(value); return *this;}


    /**
     * Designated column's number of digits to right of the decimal point. 0 is
     * returned for data types where the scale is not applicable.
     */
    inline int GetScale() const{ return m_scale; }

    /**
     * Designated column's number of digits to right of the decimal point. 0 is
     * returned for data types where the scale is not applicable.
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * Designated column's number of digits to right of the decimal point. 0 is
     * returned for data types where the scale is not applicable.
     */
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * Designated column's number of digits to right of the decimal point. 0 is
     * returned for data types where the scale is not applicable.
     */
    inline ColumnMetadata& WithScale(int value) { SetScale(value); return *this;}


    /**
     * Designated column's table's schema
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * Designated column's table's schema
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * Designated column's table's schema
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * Designated column's table's schema
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * Designated column's table's schema
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * Designated column's table's schema
     */
    inline ColumnMetadata& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * Designated column's table's schema
     */
    inline ColumnMetadata& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * Designated column's table's schema
     */
    inline ColumnMetadata& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * Designated column's table name
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * Designated column's table name
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * Designated column's table name
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * Designated column's table name
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * Designated column's table name
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * Designated column's table name
     */
    inline ColumnMetadata& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * Designated column's table name
     */
    inline ColumnMetadata& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * Designated column's table name
     */
    inline ColumnMetadata& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * SQL type from java.sql.Types.
     */
    inline int GetType() const{ return m_type; }

    /**
     * SQL type from java.sql.Types.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * SQL type from java.sql.Types.
     */
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * SQL type from java.sql.Types.
     */
    inline ColumnMetadata& WithType(int value) { SetType(value); return *this;}


    /**
     * Database-specific type name.
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * Database-specific type name.
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * Database-specific type name.
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * Database-specific type name.
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * Database-specific type name.
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * Database-specific type name.
     */
    inline ColumnMetadata& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * Database-specific type name.
     */
    inline ColumnMetadata& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * Database-specific type name.
     */
    inline ColumnMetadata& WithTypeName(const char* value) { SetTypeName(value); return *this;}

  private:

    int m_arrayBaseColumnType;
    bool m_arrayBaseColumnTypeHasBeenSet;

    bool m_isAutoIncrement;
    bool m_isAutoIncrementHasBeenSet;

    bool m_isCaseSensitive;
    bool m_isCaseSensitiveHasBeenSet;

    bool m_isCurrency;
    bool m_isCurrencyHasBeenSet;

    bool m_isSigned;
    bool m_isSignedHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    int m_nullable;
    bool m_nullableHasBeenSet;

    int m_precision;
    bool m_precisionHasBeenSet;

    int m_scale;
    bool m_scaleHasBeenSet;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    int m_type;
    bool m_typeHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
