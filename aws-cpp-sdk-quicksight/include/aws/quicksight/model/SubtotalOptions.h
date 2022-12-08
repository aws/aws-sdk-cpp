/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PivotTableSubtotalLevel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TableCellStyle.h>
#include <aws/quicksight/model/PivotTableFieldSubtotalOptions.h>
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
   * <p>The subtotal options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SubtotalOptions">AWS
   * API Reference</a></p>
   */
  class SubtotalOptions
  {
  public:
    AWS_QUICKSIGHT_API SubtotalOptions();
    AWS_QUICKSIGHT_API SubtotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SubtotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline const Visibility& GetTotalsVisibility() const{ return m_totalsVisibility; }

    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline bool TotalsVisibilityHasBeenSet() const { return m_totalsVisibilityHasBeenSet; }

    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline void SetTotalsVisibility(const Visibility& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = value; }

    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline void SetTotalsVisibility(Visibility&& value) { m_totalsVisibilityHasBeenSet = true; m_totalsVisibility = std::move(value); }

    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithTotalsVisibility(const Visibility& value) { SetTotalsVisibility(value); return *this;}

    /**
     * <p>The visibility configuration for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithTotalsVisibility(Visibility&& value) { SetTotalsVisibility(std::move(value)); return *this;}


    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}

    /**
     * <p>The custom label string for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}


    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline const PivotTableSubtotalLevel& GetFieldLevel() const{ return m_fieldLevel; }

    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline bool FieldLevelHasBeenSet() const { return m_fieldLevelHasBeenSet; }

    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline void SetFieldLevel(const PivotTableSubtotalLevel& value) { m_fieldLevelHasBeenSet = true; m_fieldLevel = value; }

    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline void SetFieldLevel(PivotTableSubtotalLevel&& value) { m_fieldLevelHasBeenSet = true; m_fieldLevel = std::move(value); }

    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithFieldLevel(const PivotTableSubtotalLevel& value) { SetFieldLevel(value); return *this;}

    /**
     * <p>The field level (all, custom, last) for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithFieldLevel(PivotTableSubtotalLevel&& value) { SetFieldLevel(std::move(value)); return *this;}


    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline const Aws::Vector<PivotTableFieldSubtotalOptions>& GetFieldLevelOptions() const{ return m_fieldLevelOptions; }

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline bool FieldLevelOptionsHasBeenSet() const { return m_fieldLevelOptionsHasBeenSet; }

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline void SetFieldLevelOptions(const Aws::Vector<PivotTableFieldSubtotalOptions>& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions = value; }

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline void SetFieldLevelOptions(Aws::Vector<PivotTableFieldSubtotalOptions>&& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions = std::move(value); }

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline SubtotalOptions& WithFieldLevelOptions(const Aws::Vector<PivotTableFieldSubtotalOptions>& value) { SetFieldLevelOptions(value); return *this;}

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline SubtotalOptions& WithFieldLevelOptions(Aws::Vector<PivotTableFieldSubtotalOptions>&& value) { SetFieldLevelOptions(std::move(value)); return *this;}

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline SubtotalOptions& AddFieldLevelOptions(const PivotTableFieldSubtotalOptions& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions.push_back(value); return *this; }

    /**
     * <p>The optional configuration of subtotal cells.</p>
     */
    inline SubtotalOptions& AddFieldLevelOptions(PivotTableFieldSubtotalOptions&& value) { m_fieldLevelOptionsHasBeenSet = true; m_fieldLevelOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline const TableCellStyle& GetTotalCellStyle() const{ return m_totalCellStyle; }

    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline bool TotalCellStyleHasBeenSet() const { return m_totalCellStyleHasBeenSet; }

    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline void SetTotalCellStyle(const TableCellStyle& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = value; }

    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline void SetTotalCellStyle(TableCellStyle&& value) { m_totalCellStyleHasBeenSet = true; m_totalCellStyle = std::move(value); }

    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithTotalCellStyle(const TableCellStyle& value) { SetTotalCellStyle(value); return *this;}

    /**
     * <p>The cell styling options for the subtotal cells.</p>
     */
    inline SubtotalOptions& WithTotalCellStyle(TableCellStyle&& value) { SetTotalCellStyle(std::move(value)); return *this;}


    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline const TableCellStyle& GetValueCellStyle() const{ return m_valueCellStyle; }

    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline bool ValueCellStyleHasBeenSet() const { return m_valueCellStyleHasBeenSet; }

    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline void SetValueCellStyle(const TableCellStyle& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = value; }

    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline void SetValueCellStyle(TableCellStyle&& value) { m_valueCellStyleHasBeenSet = true; m_valueCellStyle = std::move(value); }

    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline SubtotalOptions& WithValueCellStyle(const TableCellStyle& value) { SetValueCellStyle(value); return *this;}

    /**
     * <p>The cell styling options for the subtotals of value cells.</p>
     */
    inline SubtotalOptions& WithValueCellStyle(TableCellStyle&& value) { SetValueCellStyle(std::move(value)); return *this;}


    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline const TableCellStyle& GetMetricHeaderCellStyle() const{ return m_metricHeaderCellStyle; }

    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline bool MetricHeaderCellStyleHasBeenSet() const { return m_metricHeaderCellStyleHasBeenSet; }

    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline void SetMetricHeaderCellStyle(const TableCellStyle& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = value; }

    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline void SetMetricHeaderCellStyle(TableCellStyle&& value) { m_metricHeaderCellStyleHasBeenSet = true; m_metricHeaderCellStyle = std::move(value); }

    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline SubtotalOptions& WithMetricHeaderCellStyle(const TableCellStyle& value) { SetMetricHeaderCellStyle(value); return *this;}

    /**
     * <p>The cell styling options for the subtotals of header cells.</p>
     */
    inline SubtotalOptions& WithMetricHeaderCellStyle(TableCellStyle&& value) { SetMetricHeaderCellStyle(std::move(value)); return *this;}

  private:

    Visibility m_totalsVisibility;
    bool m_totalsVisibilityHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    PivotTableSubtotalLevel m_fieldLevel;
    bool m_fieldLevelHasBeenSet = false;

    Aws::Vector<PivotTableFieldSubtotalOptions> m_fieldLevelOptions;
    bool m_fieldLevelOptionsHasBeenSet = false;

    TableCellStyle m_totalCellStyle;
    bool m_totalCellStyleHasBeenSet = false;

    TableCellStyle m_valueCellStyle;
    bool m_valueCellStyleHasBeenSet = false;

    TableCellStyle m_metricHeaderCellStyle;
    bool m_metricHeaderCellStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
