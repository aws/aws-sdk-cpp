/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/HeatMapFieldWells.h>
#include <aws/quicksight/model/HeatMapSortConfiguration.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/ColorScale.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
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
   * <p>The configuration of a heat map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HeatMapConfiguration">AWS
   * API Reference</a></p>
   */
  class HeatMapConfiguration
  {
  public:
    AWS_QUICKSIGHT_API HeatMapConfiguration();
    AWS_QUICKSIGHT_API HeatMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HeatMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const HeatMapFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const HeatMapFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(HeatMapFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline HeatMapConfiguration& WithFieldWells(const HeatMapFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline HeatMapConfiguration& WithFieldWells(HeatMapFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline const HeatMapSortConfiguration& GetSortConfiguration() const{ return m_sortConfiguration; }

    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline bool SortConfigurationHasBeenSet() const { return m_sortConfigurationHasBeenSet; }

    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline void SetSortConfiguration(const HeatMapSortConfiguration& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = value; }

    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline void SetSortConfiguration(HeatMapSortConfiguration&& value) { m_sortConfigurationHasBeenSet = true; m_sortConfiguration = std::move(value); }

    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline HeatMapConfiguration& WithSortConfiguration(const HeatMapSortConfiguration& value) { SetSortConfiguration(value); return *this;}

    /**
     * <p>The sort configuration of a heat map.</p>
     */
    inline HeatMapConfiguration& WithSortConfiguration(HeatMapSortConfiguration&& value) { SetSortConfiguration(std::move(value)); return *this;}


    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline const ChartAxisLabelOptions& GetRowLabelOptions() const{ return m_rowLabelOptions; }

    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline bool RowLabelOptionsHasBeenSet() const { return m_rowLabelOptionsHasBeenSet; }

    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline void SetRowLabelOptions(const ChartAxisLabelOptions& value) { m_rowLabelOptionsHasBeenSet = true; m_rowLabelOptions = value; }

    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline void SetRowLabelOptions(ChartAxisLabelOptions&& value) { m_rowLabelOptionsHasBeenSet = true; m_rowLabelOptions = std::move(value); }

    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline HeatMapConfiguration& WithRowLabelOptions(const ChartAxisLabelOptions& value) { SetRowLabelOptions(value); return *this;}

    /**
     * <p>The label options of the row that is displayed in a <code>heat
     * map</code>.</p>
     */
    inline HeatMapConfiguration& WithRowLabelOptions(ChartAxisLabelOptions&& value) { SetRowLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline const ChartAxisLabelOptions& GetColumnLabelOptions() const{ return m_columnLabelOptions; }

    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline bool ColumnLabelOptionsHasBeenSet() const { return m_columnLabelOptionsHasBeenSet; }

    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline void SetColumnLabelOptions(const ChartAxisLabelOptions& value) { m_columnLabelOptionsHasBeenSet = true; m_columnLabelOptions = value; }

    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline void SetColumnLabelOptions(ChartAxisLabelOptions&& value) { m_columnLabelOptionsHasBeenSet = true; m_columnLabelOptions = std::move(value); }

    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline HeatMapConfiguration& WithColumnLabelOptions(const ChartAxisLabelOptions& value) { SetColumnLabelOptions(value); return *this;}

    /**
     * <p>The label options of the column that is displayed in a heat map.</p>
     */
    inline HeatMapConfiguration& WithColumnLabelOptions(ChartAxisLabelOptions&& value) { SetColumnLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline const ColorScale& GetColorScale() const{ return m_colorScale; }

    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline bool ColorScaleHasBeenSet() const { return m_colorScaleHasBeenSet; }

    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline void SetColorScale(const ColorScale& value) { m_colorScaleHasBeenSet = true; m_colorScale = value; }

    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline void SetColorScale(ColorScale&& value) { m_colorScaleHasBeenSet = true; m_colorScale = std::move(value); }

    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline HeatMapConfiguration& WithColorScale(const ColorScale& value) { SetColorScale(value); return *this;}

    /**
     * <p>The color options (gradient color, point of divergence) in a heat map.</p>
     */
    inline HeatMapConfiguration& WithColorScale(ColorScale&& value) { SetColorScale(std::move(value)); return *this;}


    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const LegendOptions& GetLegend() const{ return m_legend; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline bool LegendHasBeenSet() const { return m_legendHasBeenSet; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(const LegendOptions& value) { m_legendHasBeenSet = true; m_legend = value; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetLegend(LegendOptions&& value) { m_legendHasBeenSet = true; m_legend = std::move(value); }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline HeatMapConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline HeatMapConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline const DataLabelOptions& GetDataLabels() const{ return m_dataLabels; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline bool DataLabelsHasBeenSet() const { return m_dataLabelsHasBeenSet; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline void SetDataLabels(const DataLabelOptions& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = value; }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline void SetDataLabels(DataLabelOptions&& value) { m_dataLabelsHasBeenSet = true; m_dataLabels = std::move(value); }

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline HeatMapConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline HeatMapConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


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
    inline HeatMapConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The tooltip display setup of the visual.</p>
     */
    inline HeatMapConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}

  private:

    HeatMapFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    HeatMapSortConfiguration m_sortConfiguration;
    bool m_sortConfigurationHasBeenSet = false;

    ChartAxisLabelOptions m_rowLabelOptions;
    bool m_rowLabelOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_columnLabelOptions;
    bool m_columnLabelOptionsHasBeenSet = false;

    ColorScale m_colorScale;
    bool m_colorScaleHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
