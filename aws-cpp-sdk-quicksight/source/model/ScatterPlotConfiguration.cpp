/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ScatterPlotConfiguration.h>
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

ScatterPlotConfiguration::ScatterPlotConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_xAxisLabelOptionsHasBeenSet(false),
    m_xAxisDisplayOptionsHasBeenSet(false),
    m_yAxisLabelOptionsHasBeenSet(false),
    m_yAxisDisplayOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

ScatterPlotConfiguration::ScatterPlotConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_xAxisLabelOptionsHasBeenSet(false),
    m_xAxisDisplayOptionsHasBeenSet(false),
    m_yAxisLabelOptionsHasBeenSet(false),
    m_yAxisDisplayOptionsHasBeenSet(false),
    m_legendHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

ScatterPlotConfiguration& ScatterPlotConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisLabelOptions"))
  {
    m_xAxisLabelOptions = jsonValue.GetObject("XAxisLabelOptions");

    m_xAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisDisplayOptions"))
  {
    m_xAxisDisplayOptions = jsonValue.GetObject("XAxisDisplayOptions");

    m_xAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YAxisLabelOptions"))
  {
    m_yAxisLabelOptions = jsonValue.GetObject("YAxisLabelOptions");

    m_yAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YAxisDisplayOptions"))
  {
    m_yAxisDisplayOptions = jsonValue.GetObject("YAxisDisplayOptions");

    m_yAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Legend"))
  {
    m_legend = jsonValue.GetObject("Legend");

    m_legendHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataLabels"))
  {
    m_dataLabels = jsonValue.GetObject("DataLabels");

    m_dataLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tooltip"))
  {
    m_tooltip = jsonValue.GetObject("Tooltip");

    m_tooltipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisualPalette"))
  {
    m_visualPalette = jsonValue.GetObject("VisualPalette");

    m_visualPaletteHasBeenSet = true;
  }

  return *this;
}

JsonValue ScatterPlotConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_xAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("XAxisLabelOptions", m_xAxisLabelOptions.Jsonize());

  }

  if(m_xAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("XAxisDisplayOptions", m_xAxisDisplayOptions.Jsonize());

  }

  if(m_yAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("YAxisLabelOptions", m_yAxisLabelOptions.Jsonize());

  }

  if(m_yAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("YAxisDisplayOptions", m_yAxisDisplayOptions.Jsonize());

  }

  if(m_legendHasBeenSet)
  {
   payload.WithObject("Legend", m_legend.Jsonize());

  }

  if(m_dataLabelsHasBeenSet)
  {
   payload.WithObject("DataLabels", m_dataLabels.Jsonize());

  }

  if(m_tooltipHasBeenSet)
  {
   payload.WithObject("Tooltip", m_tooltip.Jsonize());

  }

  if(m_visualPaletteHasBeenSet)
  {
   payload.WithObject("VisualPalette", m_visualPalette.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
