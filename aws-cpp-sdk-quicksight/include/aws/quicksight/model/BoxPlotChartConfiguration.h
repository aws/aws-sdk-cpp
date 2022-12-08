/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BoxPlotFieldWells.h>
#include <aws/quicksight/model/BoxPlotSortConfiguration.h>
#include <aws/quicksight/model/BoxPlotOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualPalette.h>
#include <aws/quicksight/model/ReferenceLine.h>
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
   * <p>The configuration of a <code>BoxPlotVisual</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotChartConfiguration">AWS
   * API Reference</a></p>
   */
  class BoxPlotChartConfiguration
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotChartConfiguration();
    AWS_QUICKSIGHT_API BoxPlotChartConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotChartConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const BoxPlotFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const BoxPlotFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(BoxPlotFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithFieldWells(const BoxPlotFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithFieldWells(BoxPlotFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline const BoxPlotSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline void SetSortConfiguration(const BoxPlotSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline void SetSortConfiguration(BoxPlotSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline BoxPlotChartConfiguration& WithSortConfiguration(const BoxPlotSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a <code>BoxPlotVisual</code>.</p>
     */
    inline BoxPlotChartConfiguration& WithSortConfiguration(BoxPlotSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline const BoxPlotOptions& GetBoxPlotOptions() const{ return m_boxPlotOptions; }

    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline bool BoxPlotOptionsHasBeenSet() const { return m_boxPlotOptionsHasBeenSet; }

    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline void SetBoxPlotOptions(const BoxPlotOptions& value) { m_boxPlotOptionsHasBeenSet = true; m_boxPlotOptions = value; }

    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline void SetBoxPlotOptions(BoxPlotOptions&& value) { m_boxPlotOptionsHasBeenSet = true; m_boxPlotOptions = std::move(value); }

    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline BoxPlotChartConfiguration& WithBoxPlotOptions(const BoxPlotOptions& value) { SetBoxPlotOptions(value); return *this;}

    /**
     * <p>The box plot chart options for a box plot visual</p>
     */
    inline BoxPlotChartConfiguration& WithBoxPlotOptions(BoxPlotOptions&& value) { SetBoxPlotOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline const AxisDisplayOptions& GetCategoryAxis() const{ return m_categoryAxis; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline bool CategoryAxisHasBeenSet() const { return m_categoryAxisHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline void SetCategoryAxis(const AxisDisplayOptions& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = value; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline void SetCategoryAxis(AxisDisplayOptions&& value) { m_categoryAxisHasBeenSet = true; m_categoryAxis = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline BoxPlotChartConfiguration& WithCategoryAxis(const AxisDisplayOptions& value) { SetCategoryAxis(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline BoxPlotChartConfiguration& WithCategoryAxis(AxisDisplayOptions&& value) { SetCategoryAxis(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline const ChartAxisLabelOptions& GetCategoryLabelOptions() const{ return m_categoryLabelOptions; }

    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline bool CategoryLabelOptionsHasBeenSet() const { return m_categoryLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline void SetCategoryLabelOptions(const ChartAxisLabelOptions& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline void SetCategoryLabelOptions(ChartAxisLabelOptions&& value) { m_categoryLabelOptionsHasBeenSet = true; m_categoryLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline BoxPlotChartConfiguration& WithCategoryLabelOptions(const ChartAxisLabelOptions& value) { SetCategoryLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility and sort Icon visibility) of
     * a box plot category.</p>
     */
    inline BoxPlotChartConfiguration& WithCategoryLabelOptions(ChartAxisLabelOptions&& value) { SetCategoryLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline const AxisDisplayOptions& GetPrimaryYAxisDisplayOptions() const{ return m_primaryYAxisDisplayOptions; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline bool PrimaryYAxisDisplayOptionsHasBeenSet() const { return m_primaryYAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = value; }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline void SetPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { m_primaryYAxisDisplayOptionsHasBeenSet = true; m_primaryYAxisDisplayOptions = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline BoxPlotChartConfiguration& WithPrimaryYAxisDisplayOptions(const AxisDisplayOptions& value) { SetPrimaryYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, axis step) of a box plot
     * category.</p>
     */
    inline BoxPlotChartConfiguration& WithPrimaryYAxisDisplayOptions(AxisDisplayOptions&& value) { SetPrimaryYAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline const ChartAxisLabelOptions& GetPrimaryYAxisLabelOptions() const{ return m_primaryYAxisLabelOptions; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline bool PrimaryYAxisLabelOptionsHasBeenSet() const { return m_primaryYAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline void SetPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_primaryYAxisLabelOptionsHasBeenSet = true; m_primaryYAxisLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline BoxPlotChartConfiguration& WithPrimaryYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetPrimaryYAxisLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility and sort icon visibility) of
     * a box plot value.</p>
     */
    inline BoxPlotChartConfiguration& WithPrimaryYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetPrimaryYAxisLabelOptions(std::move(value)); return *this;}


    
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    
    inline BoxPlotChartConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    
    inline BoxPlotChartConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline const Aws::Vector<ReferenceLine>& GetReferenceLines() const{ return m_referenceLines; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline bool ReferenceLinesHasBeenSet() const { return m_referenceLinesHasBeenSet; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline void SetReferenceLines(const Aws::Vector<ReferenceLine>& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = value; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline void SetReferenceLines(Aws::Vector<ReferenceLine>&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines = std::move(value); }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithReferenceLines(const Aws::Vector<ReferenceLine>& value) { SetReferenceLines(value); return *this;}

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithReferenceLines(Aws::Vector<ReferenceLine>&& value) { SetReferenceLines(std::move(value)); return *this;}

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& AddReferenceLines(const ReferenceLine& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(value); return *this; }

    /**
     * <p>The reference line setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& AddReferenceLines(ReferenceLine&& value) { m_referenceLinesHasBeenSet = true; m_referenceLines.push_back(std::move(value)); return *this; }


    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline const VisualPalette& GetVisualPalette() const{ return m_visualPalette; }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline bool VisualPaletteHasBeenSet() const { return m_visualPaletteHasBeenSet; }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline void SetVisualPalette(const VisualPalette& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = value; }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline void SetVisualPalette(VisualPalette&& value) { m_visualPaletteHasBeenSet = true; m_visualPalette = std::move(value); }

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline BoxPlotChartConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

  private:

    BoxPlotFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    BoxPlotSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    BoxPlotOptions m_boxPlotOptions;
    bool m_boxPlotOptionsHasBeenSet = false;

    AxisDisplayOptions m_categoryAxis;
    bool m_categoryAxisHasBeenSet = false;

    ChartAxisLabelOptions m_categoryLabelOptions;
    bool m_categoryLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_primaryYAxisDisplayOptions;
    bool m_primaryYAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_primaryYAxisLabelOptions;
    bool m_primaryYAxisLabelOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    Aws::Vector<ReferenceLine> m_referenceLines;
    bool m_referenceLinesHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
