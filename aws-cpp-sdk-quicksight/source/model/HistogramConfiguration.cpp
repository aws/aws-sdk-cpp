/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HistogramConfiguration.h>
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

HistogramConfiguration::HistogramConfiguration() : 
    m_fieldWellsHasBeenSet(false),
    m_xAxisDisplayOptionsHasBeenSet(false),
    m_xAxisLabelOptionsHasBeenSet(false),
    m_yAxisDisplayOptionsHasBeenSet(false),
    m_binOptionsHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
}

HistogramConfiguration::HistogramConfiguration(JsonView jsonValue) : 
    m_fieldWellsHasBeenSet(false),
    m_xAxisDisplayOptionsHasBeenSet(false),
    m_xAxisLabelOptionsHasBeenSet(false),
    m_yAxisDisplayOptionsHasBeenSet(false),
    m_binOptionsHasBeenSet(false),
    m_dataLabelsHasBeenSet(false),
    m_tooltipHasBeenSet(false),
    m_visualPaletteHasBeenSet(false)
{
  *this = jsonValue;
}

HistogramConfiguration& HistogramConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldWells"))
  {
    m_fieldWells = jsonValue.GetObject("FieldWells");

    m_fieldWellsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisDisplayOptions"))
  {
    m_xAxisDisplayOptions = jsonValue.GetObject("XAxisDisplayOptions");

    m_xAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("XAxisLabelOptions"))
  {
    m_xAxisLabelOptions = jsonValue.GetObject("XAxisLabelOptions");

    m_xAxisLabelOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("YAxisDisplayOptions"))
  {
    m_yAxisDisplayOptions = jsonValue.GetObject("YAxisDisplayOptions");

    m_yAxisDisplayOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BinOptions"))
  {
    m_binOptions = jsonValue.GetObject("BinOptions");

    m_binOptionsHasBeenSet = true;
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

JsonValue HistogramConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fieldWellsHasBeenSet)
  {
   payload.WithObject("FieldWells", m_fieldWells.Jsonize());

  }

  if(m_xAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("XAxisDisplayOptions", m_xAxisDisplayOptions.Jsonize());

  }

  if(m_xAxisLabelOptionsHasBeenSet)
  {
   payload.WithObject("XAxisLabelOptions", m_xAxisLabelOptions.Jsonize());

  }

  if(m_yAxisDisplayOptionsHasBeenSet)
  {
   payload.WithObject("YAxisDisplayOptions", m_yAxisDisplayOptions.Jsonize());

  }

  if(m_binOptionsHasBeenSet)
  {
   payload.WithObject("BinOptions", m_binOptions.Jsonize());

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
