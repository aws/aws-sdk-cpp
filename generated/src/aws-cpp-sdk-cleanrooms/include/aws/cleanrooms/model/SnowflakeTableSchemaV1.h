/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> The Snowflake table schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SnowflakeTableSchemaV1">AWS
   * API Reference</a></p>
   */
  class SnowflakeTableSchemaV1
  {
  public:
    AWS_CLEANROOMS_API SnowflakeTableSchemaV1() = default;
    AWS_CLEANROOMS_API SnowflakeTableSchemaV1(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SnowflakeTableSchemaV1& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The column name.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    SnowflakeTableSchemaV1& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The column's data type. Supported data types: <code>ARRAY</code>,
     * <code>BIGINT</code>, <code>BOOLEAN</code>, <code>CHAR</code>, <code>DATE</code>,
     * <code>DECIMAL</code>, <code>DOUBLE</code>, <code>DOUBLE PRECISION</code>,
     * <code>FLOAT</code>, <code>FLOAT4</code>, <code>INT</code>, <code>INTEGER</code>,
     * <code>MAP</code>, <code>NUMERIC</code>, <code>NUMBER</code>, <code>REAL</code>,
     * <code>SMALLINT</code>, <code>STRING</code>, <code>TIMESTAMP</code>,
     * <code>TIMESTAMP_LTZ</code>, <code>TIMESTAMP_NTZ</code>, <code>DATETIME</code>,
     * <code>TINYINT</code>, <code>VARCHAR</code>, <code>TEXT</code>,
     * <code>CHARACTER</code>.</p>
     */
    inline const Aws::String& GetColumnType() const { return m_columnType; }
    inline bool ColumnTypeHasBeenSet() const { return m_columnTypeHasBeenSet; }
    template<typename ColumnTypeT = Aws::String>
    void SetColumnType(ColumnTypeT&& value) { m_columnTypeHasBeenSet = true; m_columnType = std::forward<ColumnTypeT>(value); }
    template<typename ColumnTypeT = Aws::String>
    SnowflakeTableSchemaV1& WithColumnType(ColumnTypeT&& value) { SetColumnType(std::forward<ColumnTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_columnType;
    bool m_columnTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
