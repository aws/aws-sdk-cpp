/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Visual.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

Visual::Visual() : 
    m_tableVisualHasBeenSet(false),
    m_pivotTableVisualHasBeenSet(false),
    m_barChartVisualHasBeenSet(false),
    m_kPIVisualHasBeenSet(false),
    m_pieChartVisualHasBeenSet(false),
    m_gaugeChartVisualHasBeenSet(false),
    m_lineChartVisualHasBeenSet(false),
    m_heatMapVisualHasBeenSet(false),
    m_treeMapVisualHasBeenSet(false),
    m_geospatialMapVisualHasBeenSet(false),
    m_filledMapVisualHasBeenSet(false),
    m_funnelChartVisualHasBeenSet(false),
    m_scatterPlotVisualHasBeenSet(false),
    m_comboChartVisualHasBeenSet(false),
    m_boxPlotVisualHasBeenSet(false),
    m_waterfallVisualHasBeenSet(false),
    m_histogramVisualHasBeenSet(false),
    m_wordCloudVisualHasBeenSet(false),
    m_insightVisualHasBeenSet(false),
    m_sankeyDiagramVisualHasBeenSet(false),
    m_customContentVisualHasBeenSet(false),
    m_emptyVisualHasBeenSet(false)
{
}

Visual::Visual(JsonView jsonValue) : 
    m_tableVisualHasBeenSet(false),
    m_pivotTableVisualHasBeenSet(false),
    m_barChartVisualHasBeenSet(false),
    m_kPIVisualHasBeenSet(false),
    m_pieChartVisualHasBeenSet(false),
    m_gaugeChartVisualHasBeenSet(false),
    m_lineChartVisualHasBeenSet(false),
    m_heatMapVisualHasBeenSet(false),
    m_treeMapVisualHasBeenSet(false),
    m_geospatialMapVisualHasBeenSet(false),
    m_filledMapVisualHasBeenSet(false),
    m_funnelChartVisualHasBeenSet(false),
    m_scatterPlotVisualHasBeenSet(false),
    m_comboChartVisualHasBeenSet(false),
    m_boxPlotVisualHasBeenSet(false),
    m_waterfallVisualHasBeenSet(false),
    m_histogramVisualHasBeenSet(false),
    m_wordCloudVisualHasBeenSet(false),
    m_insightVisualHasBeenSet(false),
    m_sankeyDiagramVisualHasBeenSet(false),
    m_customContentVisualHasBeenSet(false),
    m_emptyVisualHasBeenSet(false)
{
  *this = jsonValue;
}

Visual& Visual::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableVisual"))
  {
    m_tableVisual = jsonValue.GetObject("TableVisual");

    m_tableVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PivotTableVisual"))
  {
    m_pivotTableVisual = jsonValue.GetObject("PivotTableVisual");

    m_pivotTableVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BarChartVisual"))
  {
    m_barChartVisual = jsonValue.GetObject("BarChartVisual");

    m_barChartVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KPIVisual"))
  {
    m_kPIVisual = jsonValue.GetObject("KPIVisual");

    m_kPIVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PieChartVisual"))
  {
    m_pieChartVisual = jsonValue.GetObject("PieChartVisual");

    m_pieChartVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GaugeChartVisual"))
  {
    m_gaugeChartVisual = jsonValue.GetObject("GaugeChartVisual");

    m_gaugeChartVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LineChartVisual"))
  {
    m_lineChartVisual = jsonValue.GetObject("LineChartVisual");

    m_lineChartVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeatMapVisual"))
  {
    m_heatMapVisual = jsonValue.GetObject("HeatMapVisual");

    m_heatMapVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TreeMapVisual"))
  {
    m_treeMapVisual = jsonValue.GetObject("TreeMapVisual");

    m_treeMapVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GeospatialMapVisual"))
  {
    m_geospatialMapVisual = jsonValue.GetObject("GeospatialMapVisual");

    m_geospatialMapVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilledMapVisual"))
  {
    m_filledMapVisual = jsonValue.GetObject("FilledMapVisual");

    m_filledMapVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunnelChartVisual"))
  {
    m_funnelChartVisual = jsonValue.GetObject("FunnelChartVisual");

    m_funnelChartVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScatterPlotVisual"))
  {
    m_scatterPlotVisual = jsonValue.GetObject("ScatterPlotVisual");

    m_scatterPlotVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComboChartVisual"))
  {
    m_comboChartVisual = jsonValue.GetObject("ComboChartVisual");

    m_comboChartVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BoxPlotVisual"))
  {
    m_boxPlotVisual = jsonValue.GetObject("BoxPlotVisual");

    m_boxPlotVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WaterfallVisual"))
  {
    m_waterfallVisual = jsonValue.GetObject("WaterfallVisual");

    m_waterfallVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HistogramVisual"))
  {
    m_histogramVisual = jsonValue.GetObject("HistogramVisual");

    m_histogramVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WordCloudVisual"))
  {
    m_wordCloudVisual = jsonValue.GetObject("WordCloudVisual");

    m_wordCloudVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsightVisual"))
  {
    m_insightVisual = jsonValue.GetObject("InsightVisual");

    m_insightVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SankeyDiagramVisual"))
  {
    m_sankeyDiagramVisual = jsonValue.GetObject("SankeyDiagramVisual");

    m_sankeyDiagramVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomContentVisual"))
  {
    m_customContentVisual = jsonValue.GetObject("CustomContentVisual");

    m_customContentVisualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmptyVisual"))
  {
    m_emptyVisual = jsonValue.GetObject("EmptyVisual");

    m_emptyVisualHasBeenSet = true;
  }

  return *this;
}

JsonValue Visual::Jsonize() const
{
  JsonValue payload;

  if(m_tableVisualHasBeenSet)
  {
   payload.WithObject("TableVisual", m_tableVisual.Jsonize());

  }

  if(m_pivotTableVisualHasBeenSet)
  {
   payload.WithObject("PivotTableVisual", m_pivotTableVisual.Jsonize());

  }

  if(m_barChartVisualHasBeenSet)
  {
   payload.WithObject("BarChartVisual", m_barChartVisual.Jsonize());

  }

  if(m_kPIVisualHasBeenSet)
  {
   payload.WithObject("KPIVisual", m_kPIVisual.Jsonize());

  }

  if(m_pieChartVisualHasBeenSet)
  {
   payload.WithObject("PieChartVisual", m_pieChartVisual.Jsonize());

  }

  if(m_gaugeChartVisualHasBeenSet)
  {
   payload.WithObject("GaugeChartVisual", m_gaugeChartVisual.Jsonize());

  }

  if(m_lineChartVisualHasBeenSet)
  {
   payload.WithObject("LineChartVisual", m_lineChartVisual.Jsonize());

  }

  if(m_heatMapVisualHasBeenSet)
  {
   payload.WithObject("HeatMapVisual", m_heatMapVisual.Jsonize());

  }

  if(m_treeMapVisualHasBeenSet)
  {
   payload.WithObject("TreeMapVisual", m_treeMapVisual.Jsonize());

  }

  if(m_geospatialMapVisualHasBeenSet)
  {
   payload.WithObject("GeospatialMapVisual", m_geospatialMapVisual.Jsonize());

  }

  if(m_filledMapVisualHasBeenSet)
  {
   payload.WithObject("FilledMapVisual", m_filledMapVisual.Jsonize());

  }

  if(m_funnelChartVisualHasBeenSet)
  {
   payload.WithObject("FunnelChartVisual", m_funnelChartVisual.Jsonize());

  }

  if(m_scatterPlotVisualHasBeenSet)
  {
   payload.WithObject("ScatterPlotVisual", m_scatterPlotVisual.Jsonize());

  }

  if(m_comboChartVisualHasBeenSet)
  {
   payload.WithObject("ComboChartVisual", m_comboChartVisual.Jsonize());

  }

  if(m_boxPlotVisualHasBeenSet)
  {
   payload.WithObject("BoxPlotVisual", m_boxPlotVisual.Jsonize());

  }

  if(m_waterfallVisualHasBeenSet)
  {
   payload.WithObject("WaterfallVisual", m_waterfallVisual.Jsonize());

  }

  if(m_histogramVisualHasBeenSet)
  {
   payload.WithObject("HistogramVisual", m_histogramVisual.Jsonize());

  }

  if(m_wordCloudVisualHasBeenSet)
  {
   payload.WithObject("WordCloudVisual", m_wordCloudVisual.Jsonize());

  }

  if(m_insightVisualHasBeenSet)
  {
   payload.WithObject("InsightVisual", m_insightVisual.Jsonize());

  }

  if(m_sankeyDiagramVisualHasBeenSet)
  {
   payload.WithObject("SankeyDiagramVisual", m_sankeyDiagramVisual.Jsonize());

  }

  if(m_customContentVisualHasBeenSet)
  {
   payload.WithObject("CustomContentVisual", m_customContentVisual.Jsonize());

  }

  if(m_emptyVisualHasBeenSet)
  {
   payload.WithObject("EmptyVisual", m_emptyVisual.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
