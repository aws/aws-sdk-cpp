/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ScatterPlotFieldWells.h>
#include <aws/quicksight/model/ChartAxisLabelOptions.h>
#include <aws/quicksight/model/AxisDisplayOptions.h>
#include <aws/quicksight/model/LegendOptions.h>
#include <aws/quicksight/model/DataLabelOptions.h>
#include <aws/quicksight/model/TooltipOptions.h>
#include <aws/quicksight/model/VisualPalette.h>
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
   * <p>The configuration of a scatter plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ScatterPlotConfiguration">AWS
   * API Reference</a></p>
   */
  class ScatterPlotConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ScatterPlotConfiguration();
    AWS_QUICKSIGHT_API ScatterPlotConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ScatterPlotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field wells of the visual.</p>
     */
    inline const ScatterPlotFieldWells& GetFieldWells() const{ return m_fieldWells; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline bool FieldWellsHasBeenSet() const { return m_fieldWellsHasBeenSet; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(const ScatterPlotFieldWells& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = value; }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline void SetFieldWells(ScatterPlotFieldWells&& value) { m_fieldWellsHasBeenSet = true; m_fieldWells = std::move(value); }

    /**
     * <p>The field wells of the visual.</p>
     */
    inline ScatterPlotConfiguration& WithFieldWells(const ScatterPlotFieldWells& value) { SetFieldWells(value); return *this;}

    /**
     * <p>The field wells of the visual.</p>
     */
    inline ScatterPlotConfiguration& WithFieldWells(ScatterPlotFieldWells&& value) { SetFieldWells(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline const ChartAxisLabelOptions& GetXAxisLabelOptions() const{ return m_xAxisLabelOptions; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline bool XAxisLabelOptionsHasBeenSet() const { return m_xAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline void SetXAxisLabelOptions(const ChartAxisLabelOptions& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline void SetXAxisLabelOptions(ChartAxisLabelOptions&& value) { m_xAxisLabelOptionsHasBeenSet = true; m_xAxisLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline ScatterPlotConfiguration& WithXAxisLabelOptions(const ChartAxisLabelOptions& value) { SetXAxisLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's x-axis.</p>
     */
    inline ScatterPlotConfiguration& WithXAxisLabelOptions(ChartAxisLabelOptions&& value) { SetXAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline const AxisDisplayOptions& GetXAxisDisplayOptions() const{ return m_xAxisDisplayOptions; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline bool XAxisDisplayOptionsHasBeenSet() const { return m_xAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline void SetXAxisDisplayOptions(const AxisDisplayOptions& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = value; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline void SetXAxisDisplayOptions(AxisDisplayOptions&& value) { m_xAxisDisplayOptionsHasBeenSet = true; m_xAxisDisplayOptions = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline ScatterPlotConfiguration& WithXAxisDisplayOptions(const AxisDisplayOptions& value) { SetXAxisDisplayOptions(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's x-axis.</p>
     */
    inline ScatterPlotConfiguration& WithXAxisDisplayOptions(AxisDisplayOptions&& value) { SetXAxisDisplayOptions(std::move(value)); return *this;}


    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline const ChartAxisLabelOptions& GetYAxisLabelOptions() const{ return m_yAxisLabelOptions; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline bool YAxisLabelOptionsHasBeenSet() const { return m_yAxisLabelOptionsHasBeenSet; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline void SetYAxisLabelOptions(const ChartAxisLabelOptions& value) { m_yAxisLabelOptionsHasBeenSet = true; m_yAxisLabelOptions = value; }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline void SetYAxisLabelOptions(ChartAxisLabelOptions&& value) { m_yAxisLabelOptionsHasBeenSet = true; m_yAxisLabelOptions = std::move(value); }

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline ScatterPlotConfiguration& WithYAxisLabelOptions(const ChartAxisLabelOptions& value) { SetYAxisLabelOptions(value); return *this;}

    /**
     * <p>The label options (label text, label visibility, and sort icon visibility) of
     * the scatter plot's y-axis.</p>
     */
    inline ScatterPlotConfiguration& WithYAxisLabelOptions(ChartAxisLabelOptions&& value) { SetYAxisLabelOptions(std::move(value)); return *this;}


    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline const AxisDisplayOptions& GetYAxisDisplayOptions() const{ return m_yAxisDisplayOptions; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline bool YAxisDisplayOptionsHasBeenSet() const { return m_yAxisDisplayOptionsHasBeenSet; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline void SetYAxisDisplayOptions(const AxisDisplayOptions& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = value; }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline void SetYAxisDisplayOptions(AxisDisplayOptions&& value) { m_yAxisDisplayOptionsHasBeenSet = true; m_yAxisDisplayOptions = std::move(value); }

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline ScatterPlotConfiguration& WithYAxisDisplayOptions(const AxisDisplayOptions& value) { SetYAxisDisplayOptions(value); return *this;}

    /**
     * <p>The label display options (grid line, range, scale, and axis step) of the
     * scatter plot's y-axis.</p>
     */
    inline ScatterPlotConfiguration& WithYAxisDisplayOptions(AxisDisplayOptions&& value) { SetYAxisDisplayOptions(std::move(value)); return *this;}


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
    inline ScatterPlotConfiguration& WithLegend(const LegendOptions& value) { SetLegend(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline ScatterPlotConfiguration& WithLegend(LegendOptions&& value) { SetLegend(std::move(value)); return *this;}


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
    inline ScatterPlotConfiguration& WithDataLabels(const DataLabelOptions& value) { SetDataLabels(value); return *this;}

    /**
     * <p>The options that determine if visual data labels are displayed.</p>
     */
    inline ScatterPlotConfiguration& WithDataLabels(DataLabelOptions&& value) { SetDataLabels(std::move(value)); return *this;}


    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline const TooltipOptions& GetTooltip() const{ return m_tooltip; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline bool TooltipHasBeenSet() const { return m_tooltipHasBeenSet; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetTooltip(const TooltipOptions& value) { m_tooltipHasBeenSet = true; m_tooltip = value; }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline void SetTooltip(TooltipOptions&& value) { m_tooltipHasBeenSet = true; m_tooltip = std::move(value); }

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline ScatterPlotConfiguration& WithTooltip(const TooltipOptions& value) { SetTooltip(value); return *this;}

    /**
     * <p>The legend display setup of the visual.</p>
     */
    inline ScatterPlotConfiguration& WithTooltip(TooltipOptions&& value) { SetTooltip(std::move(value)); return *this;}


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
    inline ScatterPlotConfiguration& WithVisualPalette(const VisualPalette& value) { SetVisualPalette(value); return *this;}

    /**
     * <p>The palette (chart color) display setup of the visual.</p>
     */
    inline ScatterPlotConfiguration& WithVisualPalette(VisualPalette&& value) { SetVisualPalette(std::move(value)); return *this;}

  private:

    ScatterPlotFieldWells m_fieldWells;
    bool m_fieldWellsHasBeenSet = false;

    ChartAxisLabelOptions m_xAxisLabelOptions;
    bool m_xAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_xAxisDisplayOptions;
    bool m_xAxisDisplayOptionsHasBeenSet = false;

    ChartAxisLabelOptions m_yAxisLabelOptions;
    bool m_yAxisLabelOptionsHasBeenSet = false;

    AxisDisplayOptions m_yAxisDisplayOptions;
    bool m_yAxisDisplayOptionsHasBeenSet = false;

    LegendOptions m_legend;
    bool m_legendHasBeenSet = false;

    DataLabelOptions m_dataLabels;
    bool m_dataLabelsHasBeenSet = false;

    TooltipOptions m_tooltip;
    bool m_tooltipHasBeenSet = false;

    VisualPalette m_visualPalette;
    bool m_visualPaletteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
