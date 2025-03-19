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
    AWS_ATHENA_API ColumnInfo() = default;
    AWS_ATHENA_API ColumnInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ColumnInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The catalog to which the query results belong.</p>
     */
    inline const Aws::String& GetCatalogName() const { return m_catalogName; }
    inline bool CatalogNameHasBeenSet() const { return m_catalogNameHasBeenSet; }
    template<typename CatalogNameT = Aws::String>
    void SetCatalogName(CatalogNameT&& value) { m_catalogNameHasBeenSet = true; m_catalogName = std::forward<CatalogNameT>(value); }
    template<typename CatalogNameT = Aws::String>
    ColumnInfo& WithCatalogName(CatalogNameT&& value) { SetCatalogName(std::forward<CatalogNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema name (database name) to which the query results belong.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    ColumnInfo& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table name for the query results.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ColumnInfo& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ColumnInfo& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A column label.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    ColumnInfo& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type of the column.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ColumnInfo& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits, up
     * to 38. For performance reasons, we recommend up to 18 digits.</p>
     */
    inline int GetPrecision() const { return m_precision; }
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }
    inline void SetPrecision(int value) { m_precisionHasBeenSet = true; m_precision = value; }
    inline ColumnInfo& WithPrecision(int value) { SetPrecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>DECIMAL</code> data types, specifies the total number of digits in
     * the fractional part of the value. Defaults to 0.</p>
     */
    inline int GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline ColumnInfo& WithScale(int value) { SetScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unsupported constraint. This value always shows as <code>UNKNOWN</code>.</p>
     */
    inline ColumnNullable GetNullable() const { return m_nullable; }
    inline bool NullableHasBeenSet() const { return m_nullableHasBeenSet; }
    inline void SetNullable(ColumnNullable value) { m_nullableHasBeenSet = true; m_nullable = value; }
    inline ColumnInfo& WithNullable(ColumnNullable value) { SetNullable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether values in the column are case-sensitive.</p>
     */
    inline bool GetCaseSensitive() const { return m_caseSensitive; }
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

    int m_precision{0};
    bool m_precisionHasBeenSet = false;

    int m_scale{0};
    bool m_scaleHasBeenSet = false;

    ColumnNullable m_nullable{ColumnNullable::NOT_SET};
    bool m_nullableHasBeenSet = false;

    bool m_caseSensitive{false};
    bool m_caseSensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
