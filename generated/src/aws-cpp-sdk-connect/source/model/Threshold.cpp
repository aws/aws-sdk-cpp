/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Threshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Threshold::Threshold() : 
    m_comparison(Comparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_thresholdValue(0.0),
    m_thresholdValueHasBeenSet(false)
{
}

Threshold::Threshold(JsonView jsonValue) : 
    m_comparison(Comparison::NOT_SET),
    m_comparisonHasBeenSet(false),
    m_thresholdValue(0.0),
    m_thresholdValueHasBeenSet(false)
{
  *this = jsonValue;
}

Threshold& Threshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Comparison"))
  {
    m_comparison = ComparisonMapper::GetComparisonForName(jsonValue.GetString("Comparison"));

    m_comparisonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdValue"))
  {
    m_thresholdValue = jsonValue.GetDouble("ThresholdValue");

    m_thresholdValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Threshold::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonHasBeenSet)
  {
   payload.WithString("Comparison", ComparisonMapper::GetNameForComparison(m_comparison));
  }

  if(m_thresholdValueHasBeenSet)
  {
   payload.WithDouble("ThresholdValue", m_thresholdValue);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
