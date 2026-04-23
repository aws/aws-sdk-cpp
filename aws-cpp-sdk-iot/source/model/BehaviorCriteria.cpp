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

#include <aws/iot/model/BehaviorCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

BehaviorCriteria::BehaviorCriteria() : 
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_consecutiveDatapointsToAlarm(0),
    m_consecutiveDatapointsToAlarmHasBeenSet(false),
    m_consecutiveDatapointsToClear(0),
    m_consecutiveDatapointsToClearHasBeenSet(false),
    m_statisticalThresholdHasBeenSet(false)
{
}

BehaviorCriteria::BehaviorCriteria(JsonView jsonValue) : 
    m_comparisonOperator(ComparisonOperator::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_consecutiveDatapointsToAlarm(0),
    m_consecutiveDatapointsToAlarmHasBeenSet(false),
    m_consecutiveDatapointsToClear(0),
    m_consecutiveDatapointsToClearHasBeenSet(false),
    m_statisticalThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

BehaviorCriteria& BehaviorCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorMapper::GetComparisonOperatorForName(jsonValue.GetString("comparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetObject("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("durationSeconds"))
  {
    m_durationSeconds = jsonValue.GetInteger("durationSeconds");

    m_durationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("consecutiveDatapointsToAlarm"))
  {
    m_consecutiveDatapointsToAlarm = jsonValue.GetInteger("consecutiveDatapointsToAlarm");

    m_consecutiveDatapointsToAlarmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("consecutiveDatapointsToClear"))
  {
    m_consecutiveDatapointsToClear = jsonValue.GetInteger("consecutiveDatapointsToClear");

    m_consecutiveDatapointsToClearHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statisticalThreshold"))
  {
    m_statisticalThreshold = jsonValue.GetObject("statisticalThreshold");

    m_statisticalThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue BehaviorCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("comparisonOperator", ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithObject("value", m_value.Jsonize());

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInteger("durationSeconds", m_durationSeconds);

  }

  if(m_consecutiveDatapointsToAlarmHasBeenSet)
  {
   payload.WithInteger("consecutiveDatapointsToAlarm", m_consecutiveDatapointsToAlarm);

  }

  if(m_consecutiveDatapointsToClearHasBeenSet)
  {
   payload.WithInteger("consecutiveDatapointsToClear", m_consecutiveDatapointsToClear);

  }

  if(m_statisticalThresholdHasBeenSet)
  {
   payload.WithObject("statisticalThreshold", m_statisticalThreshold.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
