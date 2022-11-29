/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineDynamicDataConfiguration.h>
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

ReferenceLineDynamicDataConfiguration::ReferenceLineDynamicDataConfiguration() : 
    m_columnHasBeenSet(false),
    m_measureAggregationFunctionHasBeenSet(false),
    m_calculationHasBeenSet(false)
{
}

ReferenceLineDynamicDataConfiguration::ReferenceLineDynamicDataConfiguration(JsonView jsonValue) : 
    m_columnHasBeenSet(false),
    m_measureAggregationFunctionHasBeenSet(false),
    m_calculationHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLineDynamicDataConfiguration& ReferenceLineDynamicDataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Column"))
  {
    m_column = jsonValue.GetObject("Column");

    m_columnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeasureAggregationFunction"))
  {
    m_measureAggregationFunction = jsonValue.GetObject("MeasureAggregationFunction");

    m_measureAggregationFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Calculation"))
  {
    m_calculation = jsonValue.GetObject("Calculation");

    m_calculationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLineDynamicDataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_columnHasBeenSet)
  {
   payload.WithObject("Column", m_column.Jsonize());

  }

  if(m_measureAggregationFunctionHasBeenSet)
  {
   payload.WithObject("MeasureAggregationFunction", m_measureAggregationFunction.Jsonize());

  }

  if(m_calculationHasBeenSet)
  {
   payload.WithObject("Calculation", m_calculation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
