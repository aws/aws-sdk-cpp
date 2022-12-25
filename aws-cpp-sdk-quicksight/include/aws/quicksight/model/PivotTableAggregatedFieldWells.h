/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The aggregated field well for the pivot table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class PivotTableAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API PivotTableAggregatedFieldWells();
    AWS_QUICKSIGHT_API PivotTableAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetRows() const{ return m_rows; }

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline void SetRows(const Aws::Vector<DimensionField>& value) { m_rowsHasBeenSet = true; m_rows = value; }

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline void SetRows(Aws::Vector<DimensionField>&& value) { m_rowsHasBeenSet = true; m_rows = std::move(value); }

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline PivotTableAggregatedFieldWells& WithRows(const Aws::Vector<DimensionField>& value) { SetRows(value); return *this;}

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline PivotTableAggregatedFieldWells& WithRows(Aws::Vector<DimensionField>&& value) { SetRows(std::move(value)); return *this;}

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline PivotTableAggregatedFieldWells& AddRows(const DimensionField& value) { m_rowsHasBeenSet = true; m_rows.push_back(value); return *this; }

    /**
     * <p>The rows field well for a pivot table. Values are grouped by rows fields.</p>
     */
    inline PivotTableAggregatedFieldWells& AddRows(DimensionField&& value) { m_rowsHasBeenSet = true; m_rows.push_back(std::move(value)); return *this; }


    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetColumns() const{ return m_columns; }

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline void SetColumns(const Aws::Vector<DimensionField>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline void SetColumns(Aws::Vector<DimensionField>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline PivotTableAggregatedFieldWells& WithColumns(const Aws::Vector<DimensionField>& value) { SetColumns(value); return *this;}

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline PivotTableAggregatedFieldWells& WithColumns(Aws::Vector<DimensionField>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline PivotTableAggregatedFieldWells& AddColumns(const DimensionField& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>The columns field well for a pivot table. Values are grouped by columns
     * fields.</p>
     */
    inline PivotTableAggregatedFieldWells& AddColumns(DimensionField&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline PivotTableAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline PivotTableAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline PivotTableAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values field well for a pivot table. Values are aggregated based on rows
     * and columns fields.</p>
     */
    inline PivotTableAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_rows;
    bool m_rowsHasBeenSet = false;

    Aws::Vector<DimensionField> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
