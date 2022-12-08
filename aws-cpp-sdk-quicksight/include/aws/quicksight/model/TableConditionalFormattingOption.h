/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableCellConditionalFormatting.h>
#include <aws/quicksight/model/TableRowConditionalFormatting.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Conditional formatting options for a
   * <code>PivotTableVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableConditionalFormattingOption">AWS
   * API Reference</a></p>
   */
  class TableConditionalFormattingOption
  {
  public:
    AWS_QUICKSIGHT_API TableConditionalFormattingOption();
    AWS_QUICKSIGHT_API TableConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline const TableCellConditionalFormatting& GetCell() const{ return m_cell; }

    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline bool CellHasBeenSet() const { return m_cellHasBeenSet; }

    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline void SetCell(const TableCellConditionalFormatting& value) { m_cellHasBeenSet = true; m_cell = value; }

    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline void SetCell(TableCellConditionalFormatting&& value) { m_cellHasBeenSet = true; m_cell = std::move(value); }

    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline TableConditionalFormattingOption& WithCell(const TableCellConditionalFormatting& value) { SetCell(value); return *this;}

    /**
     * <p>The cell conditional formatting option for a table.</p>
     */
    inline TableConditionalFormattingOption& WithCell(TableCellConditionalFormatting&& value) { SetCell(std::move(value)); return *this;}


    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline const TableRowConditionalFormatting& GetRow() const{ return m_row; }

    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline bool RowHasBeenSet() const { return m_rowHasBeenSet; }

    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline void SetRow(const TableRowConditionalFormatting& value) { m_rowHasBeenSet = true; m_row = value; }

    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline void SetRow(TableRowConditionalFormatting&& value) { m_rowHasBeenSet = true; m_row = std::move(value); }

    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline TableConditionalFormattingOption& WithRow(const TableRowConditionalFormatting& value) { SetRow(value); return *this;}

    /**
     * <p>The row conditional formatting option for a table.</p>
     */
    inline TableConditionalFormattingOption& WithRow(TableRowConditionalFormatting&& value) { SetRow(std::move(value)); return *this;}

  private:

    TableCellConditionalFormatting m_cell;
    bool m_cellHasBeenSet = false;

    TableRowConditionalFormatting m_row;
    bool m_rowHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
