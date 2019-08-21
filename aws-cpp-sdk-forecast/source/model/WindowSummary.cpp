/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/forecast/model/WindowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

WindowSummary::WindowSummary() : 
    m_testWindowStartHasBeenSet(false),
    m_testWindowEndHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_evaluationType(EvaluationType::NOT_SET),
    m_evaluationTypeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
}

WindowSummary::WindowSummary(JsonView jsonValue) : 
    m_testWindowStartHasBeenSet(false),
    m_testWindowEndHasBeenSet(false),
    m_itemCount(0),
    m_itemCountHasBeenSet(false),
    m_evaluationType(EvaluationType::NOT_SET),
    m_evaluationTypeHasBeenSet(false),
    m_metricsHasBeenSet(false)
{
  *this = jsonValue;
}

WindowSummary& WindowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TestWindowStart"))
  {
    m_testWindowStart = jsonValue.GetDouble("TestWindowStart");

    m_testWindowStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestWindowEnd"))
  {
    m_testWindowEnd = jsonValue.GetDouble("TestWindowEnd");

    m_testWindowEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInteger("ItemCount");

    m_itemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationType"))
  {
    m_evaluationType = EvaluationTypeMapper::GetEvaluationTypeForName(jsonValue.GetString("EvaluationType"));

    m_evaluationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    m_metrics = jsonValue.GetObject("Metrics");

    m_metricsHasBeenSet = true;
  }

  return *this;
}

JsonValue WindowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testWindowStartHasBeenSet)
  {
   payload.WithDouble("TestWindowStart", m_testWindowStart.SecondsWithMSPrecision());
  }

  if(m_testWindowEndHasBeenSet)
  {
   payload.WithDouble("TestWindowEnd", m_testWindowEnd.SecondsWithMSPrecision());
  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInteger("ItemCount", m_itemCount);

  }

  if(m_evaluationTypeHasBeenSet)
  {
   payload.WithString("EvaluationType", EvaluationTypeMapper::GetNameForEvaluationType(m_evaluationType));
  }

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("Metrics", m_metrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
