/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/WaterfallChartFieldWells.h>
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

WaterfallChartFieldWells::WaterfallChartFieldWells() : 
    m_waterfallChartAggregatedFieldWellsHasBeenSet(false)
{
}

WaterfallChartFieldWells::WaterfallChartFieldWells(JsonView jsonValue) : 
    m_waterfallChartAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

WaterfallChartFieldWells& WaterfallChartFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WaterfallChartAggregatedFieldWells"))
  {
    m_waterfallChartAggregatedFieldWells = jsonValue.GetObject("WaterfallChartAggregatedFieldWells");

    m_waterfallChartAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue WaterfallChartFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_waterfallChartAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("WaterfallChartAggregatedFieldWells", m_waterfallChartAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
