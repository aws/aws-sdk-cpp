/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityMetricValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityMetricValues::DataQualityMetricValues() : 
    m_actualValue(0.0),
    m_actualValueHasBeenSet(false),
    m_expectedValue(0.0),
    m_expectedValueHasBeenSet(false),
    m_lowerLimit(0.0),
    m_lowerLimitHasBeenSet(false),
    m_upperLimit(0.0),
    m_upperLimitHasBeenSet(false)
{
}

DataQualityMetricValues::DataQualityMetricValues(JsonView jsonValue) : 
    m_actualValue(0.0),
    m_actualValueHasBeenSet(false),
    m_expectedValue(0.0),
    m_expectedValueHasBeenSet(false),
    m_lowerLimit(0.0),
    m_lowerLimitHasBeenSet(false),
    m_upperLimit(0.0),
    m_upperLimitHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityMetricValues& DataQualityMetricValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActualValue"))
  {
    m_actualValue = jsonValue.GetDouble("ActualValue");

    m_actualValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedValue"))
  {
    m_expectedValue = jsonValue.GetDouble("ExpectedValue");

    m_expectedValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LowerLimit"))
  {
    m_lowerLimit = jsonValue.GetDouble("LowerLimit");

    m_lowerLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpperLimit"))
  {
    m_upperLimit = jsonValue.GetDouble("UpperLimit");

    m_upperLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityMetricValues::Jsonize() const
{
  JsonValue payload;

  if(m_actualValueHasBeenSet)
  {
   payload.WithDouble("ActualValue", m_actualValue);

  }

  if(m_expectedValueHasBeenSet)
  {
   payload.WithDouble("ExpectedValue", m_expectedValue);

  }

  if(m_lowerLimitHasBeenSet)
  {
   payload.WithDouble("LowerLimit", m_lowerLimit);

  }

  if(m_upperLimitHasBeenSet)
  {
   payload.WithDouble("UpperLimit", m_upperLimit);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
