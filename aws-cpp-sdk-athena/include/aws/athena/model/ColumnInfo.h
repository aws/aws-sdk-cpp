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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/ColumnNullable.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Athena
{
namespace Model
{

  /**
   * <p>Information about the columns in a query execution result.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ColumnInfo">AWS
   * API Reference</a></p>
   */
  class AWS_ATHENA_API ColumnInfo
  {
  public:
    ColumnInfo();
    ColumnInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    ColumnInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }

    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }

    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }

    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }

    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline ColumnInfo& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}

    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline ColumnInfo& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}

    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline ColumnInfo& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}


    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline ColumnInfo& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline ColumnInfo& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline ColumnInfo& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The table name for the query results.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name for the query results.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table name for the query results.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table name for the query results.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table name for the query results.</p>
     */
    inline ColumnInfo& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name for the query results.</p>
     */
    inline ColumnInfo& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name for the query results.</p>
     */
    inline ColumnInfo& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnInfo& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A column label.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>A column label.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>A column label.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>A column label.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>A column label.</p>
     */
    inline ColumnInfo& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>A column label.</p>
     */
    inline ColumnInfo& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>A column label.</p>
     */
    inline ColumnInfo& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The data type of the column.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The data type of the column.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type of the column.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type of the column.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The data type of the column.</p>
     */
    inline ColumnInfo& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The data type of the column.</p>
     */
    inline ColumnInfo& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The data type of the column.</p>
     */
    inline ColumnInfo& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits, up
     * to 38. For performance reasons, we recommend up to 18 digits.</p>
     */
    inline int GetPrecision() const{ return m_precision; }

    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits, up
     * to 38. For performance reasons, we recommend up to 18 digits.</p>
     */
    inline void SetPrecision(int value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits, up
     * to 38. For performance reasons, we recommend up to 18 digits.</p>
     */
    inline ColumnInfo& WithPrecision(int value) { SetPrecision(value); return *this;}


    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits in
     * the fractional part of the value. Defaults to 0.</p>
     */
    inline int GetScale() const{ return m_scale; }

    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits in
     * the fractional part of the value. Defaults to 0.</p>
     */
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits in
     * the fractional part of the value. Defaults to 0.</p>
     */
    inline ColumnInfo& WithScale(int value) { SetScale(value); return *this;}


    /**
     * <p>Indicates the column's nullable status.</p>
     */
    inline const ColumnNullable& GetNullable() const{ return m_nullable; }

    /**
     * <p>Indicates the column's nullable status.</p>
     */
    inline void SetNullable(const ColumnNullable& value) { m_nullableHasBeenSet = true; m_nullable = value; }

    /**
     * <p>Indicates the column's nullable status.</p>
     */
    inline void SetNullable(ColumnNullable&& value) { m_nullableHasBeenSet = true; m_nullable = std::move(value); }

    /**
     * <p>Indicates the column's nullable status.</p>
     */
    inline ColumnInfo& WithNullable(const ColumnNullable& value) { SetNullable(value); return *this;}

    /**
     * <p>Indicates the column's nullable status.</p>
     */
    inline ColumnInfo& WithNullable(ColumnNullable&& value) { SetNullable(std::move(value)); return *this;}


    /**
     * <p>Indicates whether values in the column are case-sensitive.</p>
     */
    inline bool GetCaseSensitive() const{ return m_caseSensitive; }

    /**
     * <p>Indicates whether values in the column are case-sensitive.</p>
     */
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }

    /**
     * <p>Indicates whether values in the column are case-sensitive.</p>
     */
    inline ColumnInfo& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}

  private:

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_label;
    bool m_labelHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    int m_precision;
    bool m_precisionHasBeenSet;

    int m_scale;
    bool m_scaleHasBeenSet;

    ColumnNullable m_nullable;
    bool m_nullableHasBeenSet;

    bool m_caseSensitive;
    bool m_caseSensitiveHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
