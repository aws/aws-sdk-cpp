/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableVisual.h>
#include <aws/quicksight/model/PivotTableVisual.h>
#include <aws/quicksight/model/BarChartVisual.h>
#include <aws/quicksight/model/KPIVisual.h>
#include <aws/quicksight/model/PieChartVisual.h>
#include <aws/quicksight/model/GaugeChartVisual.h>
#include <aws/quicksight/model/LineChartVisual.h>
#include <aws/quicksight/model/HeatMapVisual.h>
#include <aws/quicksight/model/TreeMapVisual.h>
#include <aws/quicksight/model/GeospatialMapVisual.h>
#include <aws/quicksight/model/FilledMapVisual.h>
#include <aws/quicksight/model/FunnelChartVisual.h>
#include <aws/quicksight/model/ScatterPlotVisual.h>
#include <aws/quicksight/model/ComboChartVisual.h>
#include <aws/quicksight/model/BoxPlotVisual.h>
#include <aws/quicksight/model/WaterfallVisual.h>
#include <aws/quicksight/model/HistogramVisual.h>
#include <aws/quicksight/model/WordCloudVisual.h>
#include <aws/quicksight/model/InsightVisual.h>
#include <aws/quicksight/model/SankeyDiagramVisual.h>
#include <aws/quicksight/model/CustomContentVisual.h>
#include <aws/quicksight/model/EmptyVisual.h>
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
   * <p>A visual displayed on a sheet in an analysis, dashboard, or template.</p>
   * <p>This is a union type structure. For this structure to be valid, only one of
   * the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Visual">AWS
   * API Reference</a></p>
   */
  class Visual
  {
  public:
    AWS_QUICKSIGHT_API Visual();
    AWS_QUICKSIGHT_API Visual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Visual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const TableVisual& GetTableVisual() const{ return m_tableVisual; }

    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool TableVisualHasBeenSet() const { return m_tableVisualHasBeenSet; }

    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetTableVisual(const TableVisual& value) { m_tableVisualHasBeenSet = true; m_tableVisual = value; }

    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetTableVisual(TableVisual&& value) { m_tableVisualHasBeenSet = true; m_tableVisual = std::move(value); }

    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithTableVisual(const TableVisual& value) { SetTableVisual(value); return *this;}

    /**
     * <p>A table visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tabular.html">Using
     * tables as visuals</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithTableVisual(TableVisual&& value) { SetTableVisual(std::move(value)); return *this;}


    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const PivotTableVisual& GetPivotTableVisual() const{ return m_pivotTableVisual; }

    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool PivotTableVisualHasBeenSet() const { return m_pivotTableVisualHasBeenSet; }

    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetPivotTableVisual(const PivotTableVisual& value) { m_pivotTableVisualHasBeenSet = true; m_pivotTableVisual = value; }

    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetPivotTableVisual(PivotTableVisual&& value) { m_pivotTableVisualHasBeenSet = true; m_pivotTableVisual = std::move(value); }

    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithPivotTableVisual(const PivotTableVisual& value) { SetPivotTableVisual(value); return *this;}

    /**
     * <p>A pivot table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pivot-table.html">Using
     * pivot tables</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithPivotTableVisual(PivotTableVisual&& value) { SetPivotTableVisual(std::move(value)); return *this;}


    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const BarChartVisual& GetBarChartVisual() const{ return m_barChartVisual; }

    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool BarChartVisualHasBeenSet() const { return m_barChartVisualHasBeenSet; }

    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetBarChartVisual(const BarChartVisual& value) { m_barChartVisualHasBeenSet = true; m_barChartVisual = value; }

    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetBarChartVisual(BarChartVisual&& value) { m_barChartVisualHasBeenSet = true; m_barChartVisual = std::move(value); }

    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithBarChartVisual(const BarChartVisual& value) { SetBarChartVisual(value); return *this;}

    /**
     * <p>A bar chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/bar-charts.html">Using
     * bar charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithBarChartVisual(BarChartVisual&& value) { SetBarChartVisual(std::move(value)); return *this;}


    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const KPIVisual& GetKPIVisual() const{ return m_kPIVisual; }

    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool KPIVisualHasBeenSet() const { return m_kPIVisualHasBeenSet; }

    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetKPIVisual(const KPIVisual& value) { m_kPIVisualHasBeenSet = true; m_kPIVisual = value; }

    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetKPIVisual(KPIVisual&& value) { m_kPIVisualHasBeenSet = true; m_kPIVisual = std::move(value); }

    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithKPIVisual(const KPIVisual& value) { SetKPIVisual(value); return *this;}

    /**
     * <p>A key performance indicator (KPI).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/kpi.html">Using
     * KPIs</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithKPIVisual(KPIVisual&& value) { SetKPIVisual(std::move(value)); return *this;}


    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const PieChartVisual& GetPieChartVisual() const{ return m_pieChartVisual; }

    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool PieChartVisualHasBeenSet() const { return m_pieChartVisualHasBeenSet; }

    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetPieChartVisual(const PieChartVisual& value) { m_pieChartVisualHasBeenSet = true; m_pieChartVisual = value; }

    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetPieChartVisual(PieChartVisual&& value) { m_pieChartVisualHasBeenSet = true; m_pieChartVisual = std::move(value); }

    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithPieChartVisual(const PieChartVisual& value) { SetPieChartVisual(value); return *this;}

    /**
     * <p>A pie or donut chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/pie-chart.html">Using
     * pie charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithPieChartVisual(PieChartVisual&& value) { SetPieChartVisual(std::move(value)); return *this;}


    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const GaugeChartVisual& GetGaugeChartVisual() const{ return m_gaugeChartVisual; }

    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool GaugeChartVisualHasBeenSet() const { return m_gaugeChartVisualHasBeenSet; }

    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetGaugeChartVisual(const GaugeChartVisual& value) { m_gaugeChartVisualHasBeenSet = true; m_gaugeChartVisual = value; }

    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetGaugeChartVisual(GaugeChartVisual&& value) { m_gaugeChartVisualHasBeenSet = true; m_gaugeChartVisual = std::move(value); }

    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithGaugeChartVisual(const GaugeChartVisual& value) { SetGaugeChartVisual(value); return *this;}

    /**
     * <p>A gauge chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/gauge-chart.html">Using
     * gauge charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithGaugeChartVisual(GaugeChartVisual&& value) { SetGaugeChartVisual(std::move(value)); return *this;}


    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const LineChartVisual& GetLineChartVisual() const{ return m_lineChartVisual; }

    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool LineChartVisualHasBeenSet() const { return m_lineChartVisualHasBeenSet; }

    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetLineChartVisual(const LineChartVisual& value) { m_lineChartVisualHasBeenSet = true; m_lineChartVisual = value; }

    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetLineChartVisual(LineChartVisual&& value) { m_lineChartVisualHasBeenSet = true; m_lineChartVisual = std::move(value); }

    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithLineChartVisual(const LineChartVisual& value) { SetLineChartVisual(value); return *this;}

    /**
     * <p>A line chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/line-charts.html">Using
     * line charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithLineChartVisual(LineChartVisual&& value) { SetLineChartVisual(std::move(value)); return *this;}


    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const HeatMapVisual& GetHeatMapVisual() const{ return m_heatMapVisual; }

    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool HeatMapVisualHasBeenSet() const { return m_heatMapVisualHasBeenSet; }

    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetHeatMapVisual(const HeatMapVisual& value) { m_heatMapVisualHasBeenSet = true; m_heatMapVisual = value; }

    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetHeatMapVisual(HeatMapVisual&& value) { m_heatMapVisualHasBeenSet = true; m_heatMapVisual = std::move(value); }

    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithHeatMapVisual(const HeatMapVisual& value) { SetHeatMapVisual(value); return *this;}

    /**
     * <p>A heat map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/heat-map.html">Using
     * heat maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithHeatMapVisual(HeatMapVisual&& value) { SetHeatMapVisual(std::move(value)); return *this;}


    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const TreeMapVisual& GetTreeMapVisual() const{ return m_treeMapVisual; }

    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool TreeMapVisualHasBeenSet() const { return m_treeMapVisualHasBeenSet; }

    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetTreeMapVisual(const TreeMapVisual& value) { m_treeMapVisualHasBeenSet = true; m_treeMapVisual = value; }

    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetTreeMapVisual(TreeMapVisual&& value) { m_treeMapVisualHasBeenSet = true; m_treeMapVisual = std::move(value); }

    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithTreeMapVisual(const TreeMapVisual& value) { SetTreeMapVisual(value); return *this;}

    /**
     * <p>A tree map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/tree-map.html">Using
     * tree maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithTreeMapVisual(TreeMapVisual&& value) { SetTreeMapVisual(std::move(value)); return *this;}


    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const GeospatialMapVisual& GetGeospatialMapVisual() const{ return m_geospatialMapVisual; }

    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool GeospatialMapVisualHasBeenSet() const { return m_geospatialMapVisualHasBeenSet; }

    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetGeospatialMapVisual(const GeospatialMapVisual& value) { m_geospatialMapVisualHasBeenSet = true; m_geospatialMapVisual = value; }

    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetGeospatialMapVisual(GeospatialMapVisual&& value) { m_geospatialMapVisualHasBeenSet = true; m_geospatialMapVisual = std::move(value); }

    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithGeospatialMapVisual(const GeospatialMapVisual& value) { SetGeospatialMapVisual(value); return *this;}

    /**
     * <p>A geospatial map or a points on map visual.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/point-maps.html">Creating
     * point maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithGeospatialMapVisual(GeospatialMapVisual&& value) { SetGeospatialMapVisual(std::move(value)); return *this;}


    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const FilledMapVisual& GetFilledMapVisual() const{ return m_filledMapVisual; }

    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool FilledMapVisualHasBeenSet() const { return m_filledMapVisualHasBeenSet; }

    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFilledMapVisual(const FilledMapVisual& value) { m_filledMapVisualHasBeenSet = true; m_filledMapVisual = value; }

    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFilledMapVisual(FilledMapVisual&& value) { m_filledMapVisualHasBeenSet = true; m_filledMapVisual = std::move(value); }

    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithFilledMapVisual(const FilledMapVisual& value) { SetFilledMapVisual(value); return *this;}

    /**
     * <p>A filled map.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/filled-maps.html">Creating
     * filled maps</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithFilledMapVisual(FilledMapVisual&& value) { SetFilledMapVisual(std::move(value)); return *this;}


    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const FunnelChartVisual& GetFunnelChartVisual() const{ return m_funnelChartVisual; }

    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool FunnelChartVisualHasBeenSet() const { return m_funnelChartVisualHasBeenSet; }

    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFunnelChartVisual(const FunnelChartVisual& value) { m_funnelChartVisualHasBeenSet = true; m_funnelChartVisual = value; }

    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetFunnelChartVisual(FunnelChartVisual&& value) { m_funnelChartVisualHasBeenSet = true; m_funnelChartVisual = std::move(value); }

    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithFunnelChartVisual(const FunnelChartVisual& value) { SetFunnelChartVisual(value); return *this;}

    /**
     * <p>A funnel chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/funnel-visual-content.html">Using
     * funnel charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithFunnelChartVisual(FunnelChartVisual&& value) { SetFunnelChartVisual(std::move(value)); return *this;}


    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const ScatterPlotVisual& GetScatterPlotVisual() const{ return m_scatterPlotVisual; }

    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool ScatterPlotVisualHasBeenSet() const { return m_scatterPlotVisualHasBeenSet; }

    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetScatterPlotVisual(const ScatterPlotVisual& value) { m_scatterPlotVisualHasBeenSet = true; m_scatterPlotVisual = value; }

    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetScatterPlotVisual(ScatterPlotVisual&& value) { m_scatterPlotVisualHasBeenSet = true; m_scatterPlotVisual = std::move(value); }

    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithScatterPlotVisual(const ScatterPlotVisual& value) { SetScatterPlotVisual(value); return *this;}

    /**
     * <p>A scatter plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/scatter-plot.html">Using
     * scatter plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithScatterPlotVisual(ScatterPlotVisual&& value) { SetScatterPlotVisual(std::move(value)); return *this;}


    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const ComboChartVisual& GetComboChartVisual() const{ return m_comboChartVisual; }

    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool ComboChartVisualHasBeenSet() const { return m_comboChartVisualHasBeenSet; }

    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetComboChartVisual(const ComboChartVisual& value) { m_comboChartVisualHasBeenSet = true; m_comboChartVisual = value; }

    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetComboChartVisual(ComboChartVisual&& value) { m_comboChartVisualHasBeenSet = true; m_comboChartVisual = std::move(value); }

    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithComboChartVisual(const ComboChartVisual& value) { SetComboChartVisual(value); return *this;}

    /**
     * <p>A combo chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/combo-charts.html">Using
     * combo charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithComboChartVisual(ComboChartVisual&& value) { SetComboChartVisual(std::move(value)); return *this;}


    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const BoxPlotVisual& GetBoxPlotVisual() const{ return m_boxPlotVisual; }

    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool BoxPlotVisualHasBeenSet() const { return m_boxPlotVisualHasBeenSet; }

    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetBoxPlotVisual(const BoxPlotVisual& value) { m_boxPlotVisualHasBeenSet = true; m_boxPlotVisual = value; }

    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetBoxPlotVisual(BoxPlotVisual&& value) { m_boxPlotVisualHasBeenSet = true; m_boxPlotVisual = std::move(value); }

    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithBoxPlotVisual(const BoxPlotVisual& value) { SetBoxPlotVisual(value); return *this;}

    /**
     * <p>A box plot.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/box-plots.html">Using
     * box plots</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithBoxPlotVisual(BoxPlotVisual&& value) { SetBoxPlotVisual(std::move(value)); return *this;}


    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const WaterfallVisual& GetWaterfallVisual() const{ return m_waterfallVisual; }

    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool WaterfallVisualHasBeenSet() const { return m_waterfallVisualHasBeenSet; }

    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetWaterfallVisual(const WaterfallVisual& value) { m_waterfallVisualHasBeenSet = true; m_waterfallVisual = value; }

    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetWaterfallVisual(WaterfallVisual&& value) { m_waterfallVisualHasBeenSet = true; m_waterfallVisual = std::move(value); }

    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithWaterfallVisual(const WaterfallVisual& value) { SetWaterfallVisual(value); return *this;}

    /**
     * <p>A waterfall chart.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/waterfall-chart.html">Using
     * waterfall charts</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithWaterfallVisual(WaterfallVisual&& value) { SetWaterfallVisual(std::move(value)); return *this;}


    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const HistogramVisual& GetHistogramVisual() const{ return m_histogramVisual; }

    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool HistogramVisualHasBeenSet() const { return m_histogramVisualHasBeenSet; }

    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetHistogramVisual(const HistogramVisual& value) { m_histogramVisualHasBeenSet = true; m_histogramVisual = value; }

    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetHistogramVisual(HistogramVisual&& value) { m_histogramVisualHasBeenSet = true; m_histogramVisual = std::move(value); }

    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithHistogramVisual(const HistogramVisual& value) { SetHistogramVisual(value); return *this;}

    /**
     * <p>A histogram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/histogram-charts.html">Using
     * histograms</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithHistogramVisual(HistogramVisual&& value) { SetHistogramVisual(std::move(value)); return *this;}


    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const WordCloudVisual& GetWordCloudVisual() const{ return m_wordCloudVisual; }

    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool WordCloudVisualHasBeenSet() const { return m_wordCloudVisualHasBeenSet; }

    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetWordCloudVisual(const WordCloudVisual& value) { m_wordCloudVisualHasBeenSet = true; m_wordCloudVisual = value; }

    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetWordCloudVisual(WordCloudVisual&& value) { m_wordCloudVisualHasBeenSet = true; m_wordCloudVisual = std::move(value); }

    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithWordCloudVisual(const WordCloudVisual& value) { SetWordCloudVisual(value); return *this;}

    /**
     * <p>A word cloud.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/word-cloud.html">Using
     * word clouds</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithWordCloudVisual(WordCloudVisual&& value) { SetWordCloudVisual(std::move(value)); return *this;}


    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const InsightVisual& GetInsightVisual() const{ return m_insightVisual; }

    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool InsightVisualHasBeenSet() const { return m_insightVisualHasBeenSet; }

    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetInsightVisual(const InsightVisual& value) { m_insightVisualHasBeenSet = true; m_insightVisual = value; }

    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetInsightVisual(InsightVisual&& value) { m_insightVisualHasBeenSet = true; m_insightVisual = std::move(value); }

    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithInsightVisual(const InsightVisual& value) { SetInsightVisual(value); return *this;}

    /**
     * <p>An insight visual.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/computational-insights.html">Working
     * with insights</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithInsightVisual(InsightVisual&& value) { SetInsightVisual(std::move(value)); return *this;}


    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const SankeyDiagramVisual& GetSankeyDiagramVisual() const{ return m_sankeyDiagramVisual; }

    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool SankeyDiagramVisualHasBeenSet() const { return m_sankeyDiagramVisualHasBeenSet; }

    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetSankeyDiagramVisual(const SankeyDiagramVisual& value) { m_sankeyDiagramVisualHasBeenSet = true; m_sankeyDiagramVisual = value; }

    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetSankeyDiagramVisual(SankeyDiagramVisual&& value) { m_sankeyDiagramVisualHasBeenSet = true; m_sankeyDiagramVisual = std::move(value); }

    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithSankeyDiagramVisual(const SankeyDiagramVisual& value) { SetSankeyDiagramVisual(value); return *this;}

    /**
     * <p>A sankey diagram.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sankey-diagram.html">Using
     * Sankey diagrams</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithSankeyDiagramVisual(SankeyDiagramVisual&& value) { SetSankeyDiagramVisual(std::move(value)); return *this;}


    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline const CustomContentVisual& GetCustomContentVisual() const{ return m_customContentVisual; }

    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline bool CustomContentVisualHasBeenSet() const { return m_customContentVisualHasBeenSet; }

    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetCustomContentVisual(const CustomContentVisual& value) { m_customContentVisualHasBeenSet = true; m_customContentVisual = value; }

    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline void SetCustomContentVisual(CustomContentVisual&& value) { m_customContentVisualHasBeenSet = true; m_customContentVisual = std::move(value); }

    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithCustomContentVisual(const CustomContentVisual& value) { SetCustomContentVisual(value); return *this;}

    /**
     * <p>A visual that contains custom content.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/custom-visual-content.html">Using
     * custom visual content</a> in the <i>Amazon QuickSight User Guide</i>.</p>
     */
    inline Visual& WithCustomContentVisual(CustomContentVisual&& value) { SetCustomContentVisual(std::move(value)); return *this;}


    /**
     * <p>An empty visual.</p>
     */
    inline const EmptyVisual& GetEmptyVisual() const{ return m_emptyVisual; }

    /**
     * <p>An empty visual.</p>
     */
    inline bool EmptyVisualHasBeenSet() const { return m_emptyVisualHasBeenSet; }

    /**
     * <p>An empty visual.</p>
     */
    inline void SetEmptyVisual(const EmptyVisual& value) { m_emptyVisualHasBeenSet = true; m_emptyVisual = value; }

    /**
     * <p>An empty visual.</p>
     */
    inline void SetEmptyVisual(EmptyVisual&& value) { m_emptyVisualHasBeenSet = true; m_emptyVisual = std::move(value); }

    /**
     * <p>An empty visual.</p>
     */
    inline Visual& WithEmptyVisual(const EmptyVisual& value) { SetEmptyVisual(value); return *this;}

    /**
     * <p>An empty visual.</p>
     */
    inline Visual& WithEmptyVisual(EmptyVisual&& value) { SetEmptyVisual(std::move(value)); return *this;}

  private:

    TableVisual m_tableVisual;
    bool m_tableVisualHasBeenSet = false;

    PivotTableVisual m_pivotTableVisual;
    bool m_pivotTableVisualHasBeenSet = false;

    BarChartVisual m_barChartVisual;
    bool m_barChartVisualHasBeenSet = false;

    KPIVisual m_kPIVisual;
    bool m_kPIVisualHasBeenSet = false;

    PieChartVisual m_pieChartVisual;
    bool m_pieChartVisualHasBeenSet = false;

    GaugeChartVisual m_gaugeChartVisual;
    bool m_gaugeChartVisualHasBeenSet = false;

    LineChartVisual m_lineChartVisual;
    bool m_lineChartVisualHasBeenSet = false;

    HeatMapVisual m_heatMapVisual;
    bool m_heatMapVisualHasBeenSet = false;

    TreeMapVisual m_treeMapVisual;
    bool m_treeMapVisualHasBeenSet = false;

    GeospatialMapVisual m_geospatialMapVisual;
    bool m_geospatialMapVisualHasBeenSet = false;

    FilledMapVisual m_filledMapVisual;
    bool m_filledMapVisualHasBeenSet = false;

    FunnelChartVisual m_funnelChartVisual;
    bool m_funnelChartVisualHasBeenSet = false;

    ScatterPlotVisual m_scatterPlotVisual;
    bool m_scatterPlotVisualHasBeenSet = false;

    ComboChartVisual m_comboChartVisual;
    bool m_comboChartVisualHasBeenSet = false;

    BoxPlotVisual m_boxPlotVisual;
    bool m_boxPlotVisualHasBeenSet = false;

    WaterfallVisual m_waterfallVisual;
    bool m_waterfallVisualHasBeenSet = false;

    HistogramVisual m_histogramVisual;
    bool m_histogramVisualHasBeenSet = false;

    WordCloudVisual m_wordCloudVisual;
    bool m_wordCloudVisualHasBeenSet = false;

    InsightVisual m_insightVisual;
    bool m_insightVisualHasBeenSet = false;

    SankeyDiagramVisual m_sankeyDiagramVisual;
    bool m_sankeyDiagramVisualHasBeenSet = false;

    CustomContentVisual m_customContentVisual;
    bool m_customContentVisualHasBeenSet = false;

    EmptyVisual m_emptyVisual;
    bool m_emptyVisualHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
