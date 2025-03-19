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
    AWS_FINSPACEDATA_API SchemaDefinition() = default;
    AWS_FINSPACEDATA_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of column definitions.</p>
     */
    inline const Aws::Vector<ColumnDefinition>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<ColumnDefinition>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<ColumnDefinition>>
    SchemaDefinition& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = ColumnDefinition>
    SchemaDefinition& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of column names used for primary key.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrimaryKeyColumns() const { return m_primaryKeyColumns; }
    inline bool PrimaryKeyColumnsHasBeenSet() const { return m_primaryKeyColumnsHasBeenSet; }
    template<typename PrimaryKeyColumnsT = Aws::Vector<Aws::String>>
    void SetPrimaryKeyColumns(PrimaryKeyColumnsT&& value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns = std::forward<PrimaryKeyColumnsT>(value); }
    template<typename PrimaryKeyColumnsT = Aws::Vector<Aws::String>>
    SchemaDefinition& WithPrimaryKeyColumns(PrimaryKeyColumnsT&& value) { SetPrimaryKeyColumns(std::forward<PrimaryKeyColumnsT>(value)); return *this;}
    template<typename PrimaryKeyColumnsT = Aws::String>
    SchemaDefinition& AddPrimaryKeyColumns(PrimaryKeyColumnsT&& value) { m_primaryKeyColumnsHasBeenSet = true; m_primaryKeyColumns.emplace_back(std::forward<PrimaryKeyColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ColumnDefinition> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_primaryKeyColumns;
    bool m_primaryKeyColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
