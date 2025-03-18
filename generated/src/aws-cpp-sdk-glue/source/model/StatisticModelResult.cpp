/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatisticModelResult.h>
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

StatisticModelResult::StatisticModelResult(JsonView jsonValue)
{
  *this = jsonValue;
}

StatisticModelResult& StatisticModelResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LowerBound"))
  {
    m_lowerBound = jsonValue.GetDouble("LowerBound");
    m_lowerBoundHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpperBound"))
  {
    m_upperBound = jsonValue.GetDouble("UpperBound");
    m_upperBoundHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredictedValue"))
  {
    m_predictedValue = jsonValue.GetDouble("PredictedValue");
    m_predictedValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActualValue"))
  {
    m_actualValue = jsonValue.GetDouble("ActualValue");
    m_actualValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Date"))
  {
    m_date = jsonValue.GetDouble("Date");
    m_dateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InclusionAnnotation"))
  {
    m_inclusionAnnotation = InclusionAnnotationValueMapper::GetInclusionAnnotationValueForName(jsonValue.GetString("InclusionAnnotation"));
    m_inclusionAnnotationHasBeenSet = true;
  }
  return *this;
}

JsonValue StatisticModelResult::Jsonize() const
{
  JsonValue payload;

  if(m_lowerBoundHasBeenSet)
  {
   payload.WithDouble("LowerBound", m_lowerBound);

  }

  if(m_upperBoundHasBeenSet)
  {
   payload.WithDouble("UpperBound", m_upperBound);

  }

  if(m_predictedValueHasBeenSet)
  {
   payload.WithDouble("PredictedValue", m_predictedValue);

  }

  if(m_actualValueHasBeenSet)
  {
   payload.WithDouble("ActualValue", m_actualValue);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("Date", m_date.SecondsWithMSPrecision());
  }

  if(m_inclusionAnnotationHasBeenSet)
  {
   payload.WithString("InclusionAnnotation", InclusionAnnotationValueMapper::GetNameForInclusionAnnotationValue(m_inclusionAnnotation));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
