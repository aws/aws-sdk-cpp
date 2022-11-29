/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/HeatMapFieldWells.h>
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

HeatMapFieldWells::HeatMapFieldWells() : 
    m_heatMapAggregatedFieldWellsHasBeenSet(false)
{
}

HeatMapFieldWells::HeatMapFieldWells(JsonView jsonValue) : 
    m_heatMapAggregatedFieldWellsHasBeenSet(false)
{
  *this = jsonValue;
}

HeatMapFieldWells& HeatMapFieldWells::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeatMapAggregatedFieldWells"))
  {
    m_heatMapAggregatedFieldWells = jsonValue.GetObject("HeatMapAggregatedFieldWells");

    m_heatMapAggregatedFieldWellsHasBeenSet = true;
  }

  return *this;
}

JsonValue HeatMapFieldWells::Jsonize() const
{
  JsonValue payload;

  if(m_heatMapAggregatedFieldWellsHasBeenSet)
  {
   payload.WithObject("HeatMapAggregatedFieldWells", m_heatMapAggregatedFieldWells.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
