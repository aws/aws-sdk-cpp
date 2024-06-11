/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
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
  class ColumnInfo
  {
  public:
    AWS_ATHENA_API ColumnInfo();
    AWS_ATHENA_API ColumnInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ColumnInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline const Aws::String& GetCatalogName() const{ return m_catalogName; }
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
    inline void SetCatalogName(const Aws::String& value) { m_catalogNameHasBeenSet = true; m_catalogName = value; }
    inline void SetCatalogName(Aws::String&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::move(value); }
    inline void SetCatalogName(const char* value) { m_catalogNameHasBeenSet = true; m_catalogName.assign(value); }
    inline ColumnInfo& WithCatalogName(const Aws::String& value) { SetCatalogName(value); return *this;}
    inline ColumnInfo& WithCatalogName(Aws::String&& value) { SetCatalogName(std::move(value)); return *this;}
    inline ColumnInfo& WithCatalogName(const char* value) { SetCatalogName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }
    inline ColumnInfo& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline ColumnInfo& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline ColumnInfo& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table name for the query results.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline ColumnInfo& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline ColumnInfo& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline ColumnInfo& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ColumnInfo& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ColumnInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ColumnInfo& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A column label.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline ColumnInfo& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline ColumnInfo& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline ColumnInfo& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ColumnInfo& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ColumnInfo& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ColumnInfo& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits, up
     * to 38. For performance reasons, we recommend up to 18 digits.</p>
     */
    inline int GetPrecision() const{ return m_precision; }
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }
    inline void SetPrecision(int value) { m_precisionHasBeenSet = true; m_precision = value; }
    inline ColumnInfo& WithPrecision(int value) { SetPrecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits in
     * the fractional part of the value. Defaults to 0.</p>
     */
    inline int GetScale() const{ return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline ColumnInfo& WithScale(int value) { SetScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unsupported constraint. This value always shows as <code>UNKNOWN</code>.</p>
     */
    inline const ColumnNullable& GetNullable() const{ return m_nullable; }
    inline bool NullableHasBeenSet() const { return m_nullableHasBeenSet; }
    inline void SetNullable(const ColumnNullable& value) { m_nullableHasBeenSet = true; m_nullable = value; }
    inline void SetNullable(ColumnNullable&& value) { m_nullableHasBeenSet = true; m_nullable = std::move(value); }
    inline ColumnInfo& WithNullable(const ColumnNullable& value) { SetNullable(value); return *this;}
    inline ColumnInfo& WithNullable(ColumnNullable&& value) { SetNullable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether values in the column are case-sensitive.</p>
     */
    inline bool GetCaseSensitive() const{ return m_caseSensitive; }
    inline bool CaseSensitiveHasBeenSet() const { return m_caseSensitiveHasBeenSet; }
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }
    inline ColumnInfo& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogName;
    bool m_catalogNameHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_precision;
    bool m_precisionHasBeenSet = false;

    int m_scale;
    bool m_scaleHasBeenSet = false;

    ColumnNullable m_nullable;
    bool m_nullableHasBeenSet = false;

    bool m_caseSensitive;
    bool m_caseSensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
