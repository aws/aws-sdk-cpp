/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/ColumnDefinition.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>Definition for a schema on a tabular Dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/SchemaDefinition">AWS
   * API Reference</a></p>
   */
  class SchemaDefinition
  {
  public:
    AWS_FINSPACEDATA_API SchemaDefinition();
    AWS_FINSPACEDATA_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of column definitions.</p>
     */
    inline const Aws::Vector<ColumnDefinition>& GetColumns() const{ return m_columns; }

    /**
     * <p>List of column definitions.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>List of column definitions.</p>
     */
    inline void SetColumns(const Aws::Vector<ColumnDefinition>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>List of column definitions.</p>
     */
    inline void SetColumns(Aws::Vector<ColumnDefinition>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>List of column definitions.</p>
     */
    inline SchemaDefinition& WithColumns(const Aws::Vector<ColumnDefinition>& value) { SetColumns(value); return *this;}

    /**
     * <p>List of column definitions.</p>
     */
    inline SchemaDefinition& WithColumns(Aws::Vector<ColumnDefinition>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>List of column definitions.</p>
     */
    inline SchemaDefinition& AddColumns(const ColumnDefinition& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>List of column definitions.</p>
     */
    inline SchemaDefinition& AddColumns(ColumnDefinition&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>List of column names used for primary key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrimaryKeyColumns() const{ return m_primaryKeyColumns; }

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline bool PrimaryKeyColumnsHasBeenSet() const { return m_primaryKeyColumnsHasBeenSet; }

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline void SetPrimaryKeyColumns(const Aws::Vector<Aws::String>& value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns = value; }

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline void SetPrimaryKeyColumns(Aws::Vector<Aws::String>&& value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns = std::move(value); }

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline SchemaDefinition& WithPrimaryKeyColumns(const Aws::Vector<Aws::String>& value) { SetPrimaryKeyColumns(value); return *this;}

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline SchemaDefinition& WithPrimaryKeyColumns(Aws::Vector<Aws::String>&& value) { SetPrimaryKeyColumns(std::move(value)); return *this;}

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline SchemaDefinition& AddPrimaryKeyColumns(const Aws::String& value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns.push_back(value); return *this; }

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline SchemaDefinition& AddPrimaryKeyColumns(Aws::String&& value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>List of column names used for primary key.</p>
     */
    inline SchemaDefinition& AddPrimaryKeyColumns(const char* value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns.push_back(value); return *this; }

  private:

    Aws::Vector<ColumnDefinition> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_primaryKeyColumns;
    bool m_primaryKeyColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
