/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A filter that uses both column-level and row-level filtering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnRowFilter">AWS
   * API Reference</a></p>
   */
  class ColumnRowFilter
  {
  public:
    AWS_GLUE_API ColumnRowFilter() = default;
    AWS_GLUE_API ColumnRowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnRowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string containing the name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    ColumnRowFilter& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the row-level filter expression.</p>
     */
    inline const Aws::String& GetRowFilterExpression() const { return m_rowFilterExpression; }
    inline bool RowFilterExpressionHasBeenSet() const { return m_rowFilterExpressionHasBeenSet; }
    template<typename RowFilterExpressionT = Aws::String>
    void SetRowFilterExpression(RowFilterExpressionT&& value) { m_rowFilterExpressionHasBeenSet = true; m_rowFilterExpression = std::forward<RowFilterExpressionT>(value); }
    template<typename RowFilterExpressionT = Aws::String>
    ColumnRowFilter& WithRowFilterExpression(RowFilterExpressionT&& value) { SetRowFilterExpression(std::forward<RowFilterExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_rowFilterExpression;
    bool m_rowFilterExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
