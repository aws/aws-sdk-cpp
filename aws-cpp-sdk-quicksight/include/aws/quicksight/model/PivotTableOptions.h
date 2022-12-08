/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableMetricPlacement.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/TableCellStyle.h>
#include <aws/quicksight/model/RowAlternateColorOptions.h>
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
   * <p>The table options for a pivot table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableOptions();
    AWS_QUICKSIGHT_API PivotTableOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline const PivotTableMetricPlacement& GetMetricPlacement() const{ return m_metricPlacement; }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline bool MetricPlacementHasBeenSet() const { return m_metricPlacementHasBeenSet; }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline void SetMetricPlacement(const PivotTableMetricPlacement& value) { m_metricPlacementHasBeenSet = true; m_metricPlacement = value; }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline void SetMetricPlacement(PivotTableMetricPlacement&& value) { m_metricPlacementHasBeenSet = true; m_metricPlacement = std::move(value); }

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline PivotTableOptions& WithMetricPlacement(const PivotTableMetricPlacement& value) { SetMetricPlacement(value); return *this;}

    /**
     * <p>The metric placement (row, column) options.</p>
     */
    inline PivotTableOptions& WithMetricPlacement(PivotTableMetricPlacement&& value) { SetMetricPlacement(std::move(value)); return *this;}


    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline const Visibility& GetSingleMetricVisibility() const{ return m_singleMetricVisibility; }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline bool SingleMetricVisibilityHasBeenSet() const { return m_singleMetricVisibilityHasBeenSet; }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline void SetSingleMetricVisibility(const Visibility& value) { m_singleMetricVisibilityHasBeenSet = true; m_singleMetricVisibility = value; }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline void SetSingleMetricVisibility(Visibility&& value) { m_singleMetricVisibilityHasBeenSet = true; m_singleMetricVisibility = std::move(value); }

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline PivotTableOptions& WithSingleMetricVisibility(const Visibility& value) { SetSingleMetricVisibility(value); return *this;}

    /**
     * <p>The visibility of the single metric options.</p>
     */
    inline PivotTableOptions& WithSingleMetricVisibility(Visibility&& value) { SetSingleMetricVisibility(std::move(value)); return *this;}


    /**
     * <p>The visibility of the column names.</p>
     */
    inline const Visibility& GetColumnNamesVisibility() const{ return m_columnNamesVisibility; }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline bool ColumnNamesVisibilityHasBeenSet() const { return m_columnNamesVisibilityHasBeenSet; }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline void SetColumnNamesVisibility(const Visibility& value) { m_columnNamesVisibilityHasBeenSet = true; m_columnNamesVisibility = value; }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline void SetColumnNamesVisibility(Visibility&& value) { m_columnNamesVisibilityHasBeenSet = true; m_columnNamesVisibility = std::move(value); }

    /**
     * <p>The visibility of the column names.</p>
     */
    inline PivotTableOptions& WithColumnNamesVisibility(const Visibility& value) { SetColumnNamesVisibility(value); return *this;}

    /**
     * <p>The visibility of the column names.</p>
     */
    inline PivotTableOptions& WithColumnNamesVisibility(Visibility&& value) { SetColumnNamesVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline const Visibility& GetToggleButtonsVisibility() const{ return m_toggleButtonsVisibility; }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline bool ToggleButtonsVisibilityHasBeenSet() const { return m_toggleButtonsVisibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline void SetToggleButtonsVisibility(const Visibility& value) { m_toggleButtonsVisibilityHasBeenSet = true; m_toggleButtonsVisibility = value; }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline void SetToggleButtonsVisibility(Visibility&& value) { m_toggleButtonsVisibilityHasBeenSet = true; m_toggleButtonsVisibility = std::move(value); }

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline PivotTableOptions& WithToggleButtonsVisibility(const Visibility& value) { SetToggleButtonsVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the pivot table.</p>
     */
    inline PivotTableOptions& WithToggleButtonsVisibility(Visibility&& value) { SetToggleButtonsVisibility(std::move(value)); return *this;}


    /**
     * <p>The table cell style of the column header.</p>
     */
    inline const TableCellStyle& GetColumnHeaderStyle() const{ return m_columnHeaderStyle; }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline bool ColumnHeaderStyleHasBeenSet() const { return m_columnHeaderStyleHasBeenSet; }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline void SetColumnHeaderStyle(const TableCellStyle& value) { m_columnHeaderStyleHasBeenSet = true; m_columnHeaderStyle = value; }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline void SetColumnHeaderStyle(TableCellStyle&& value) { m_columnHeaderStyleHasBeenSet = true; m_columnHeaderStyle = std::move(value); }

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline PivotTableOptions& WithColumnHeaderStyle(const TableCellStyle& value) { SetColumnHeaderStyle(value); return *this;}

    /**
     * <p>The table cell style of the column header.</p>
     */
    inline PivotTableOptions& WithColumnHeaderStyle(TableCellStyle&& value) { SetColumnHeaderStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline const TableCellStyle& GetRowHeaderStyle() const{ return m_rowHeaderStyle; }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline bool RowHeaderStyleHasBeenSet() const { return m_rowHeaderStyleHasBeenSet; }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline void SetRowHeaderStyle(const TableCellStyle& value) { m_rowHeaderStyleHasBeenSet = true; m_rowHeaderStyle = value; }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline void SetRowHeaderStyle(TableCellStyle&& value) { m_rowHeaderStyleHasBeenSet = true; m_rowHeaderStyle = std::move(value); }

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline PivotTableOptions& WithRowHeaderStyle(const TableCellStyle& value) { SetRowHeaderStyle(value); return *this;}

    /**
     * <p>The table cell style of the row headers.</p>
     */
    inline PivotTableOptions& WithRowHeaderStyle(TableCellStyle&& value) { SetRowHeaderStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of cells.</p>
     */
    inline const TableCellStyle& GetCellStyle() const{ return m_cellStyle; }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline bool CellStyleHasBeenSet() const { return m_cellStyleHasBeenSet; }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline void SetCellStyle(const TableCellStyle& value) { m_cellStyleHasBeenSet = true; m_cellStyle = value; }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline void SetCellStyle(TableCellStyle&& value) { m_cellStyleHasBeenSet = true; m_cellStyle = std::move(value); }

    /**
     * <p>The table cell style of cells.</p>
     */
    inline PivotTableOptions& WithCellStyle(const TableCellStyle& value) { SetCellStyle(value); return *this;}

    /**
     * <p>The table cell style of cells.</p>
     */
    inline PivotTableOptions& WithCellStyle(TableCellStyle&& value) { SetCellStyle(std::move(value)); return *this;}


    /**
     * <p>The table cell style of row field names.</p>
     */
    inline const TableCellStyle& GetRowFieldNamesStyle() const{ return m_rowFieldNamesStyle; }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline bool RowFieldNamesStyleHasBeenSet() const { return m_rowFieldNamesStyleHasBeenSet; }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline void SetRowFieldNamesStyle(const TableCellStyle& value) { m_rowFieldNamesStyleHasBeenSet = true; m_rowFieldNamesStyle = value; }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline void SetRowFieldNamesStyle(TableCellStyle&& value) { m_rowFieldNamesStyleHasBeenSet = true; m_rowFieldNamesStyle = std::move(value); }

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline PivotTableOptions& WithRowFieldNamesStyle(const TableCellStyle& value) { SetRowFieldNamesStyle(value); return *this;}

    /**
     * <p>The table cell style of row field names.</p>
     */
    inline PivotTableOptions& WithRowFieldNamesStyle(TableCellStyle&& value) { SetRowFieldNamesStyle(std::move(value)); return *this;}


    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline const RowAlternateColorOptions& GetRowAlternateColorOptions() const{ return m_rowAlternateColorOptions; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline bool RowAlternateColorOptionsHasBeenSet() const { return m_rowAlternateColorOptionsHasBeenSet; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline void SetRowAlternateColorOptions(const RowAlternateColorOptions& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = value; }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline void SetRowAlternateColorOptions(RowAlternateColorOptions&& value) { m_rowAlternateColorOptionsHasBeenSet = true; m_rowAlternateColorOptions = std::move(value); }

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline PivotTableOptions& WithRowAlternateColorOptions(const RowAlternateColorOptions& value) { SetRowAlternateColorOptions(value); return *this;}

    /**
     * <p>The row alternate color options (widget status, row alternate colors).</p>
     */
    inline PivotTableOptions& WithRowAlternateColorOptions(RowAlternateColorOptions&& value) { SetRowAlternateColorOptions(std::move(value)); return *this;}

  private:

    PivotTableMetricPlacement m_metricPlacement;
    bool m_metricPlacementHasBeenSet = false;

    Visibility m_singleMetricVisibility;
    bool m_singleMetricVisibilityHasBeenSet = false;

    Visibility m_columnNamesVisibility;
    bool m_columnNamesVisibilityHasBeenSet = false;

    Visibility m_toggleButtonsVisibility;
    bool m_toggleButtonsVisibilityHasBeenSet = false;

    TableCellStyle m_columnHeaderStyle;
    bool m_columnHeaderStyleHasBeenSet = false;

    TableCellStyle m_rowHeaderStyle;
    bool m_rowHeaderStyleHasBeenSet = false;

    TableCellStyle m_cellStyle;
    bool m_cellStyleHasBeenSet = false;

    TableCellStyle m_rowFieldNamesStyle;
    bool m_rowFieldNamesStyleHasBeenSet = false;

    RowAlternateColorOptions m_rowAlternateColorOptions;
    bool m_rowAlternateColorOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
