/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/CreateRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

CreateRule::CreateRule() : 
    m_location(LocationValues::NOT_SET),
    m_locationHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(IntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_cronExpressionHasBeenSet(false)
{
}

CreateRule::CreateRule(JsonView jsonValue) : 
    m_location(LocationValues::NOT_SET),
    m_locationHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(IntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false),
    m_timesHasBeenSet(false),
    m_cronExpressionHasBeenSet(false)
{
  *this = jsonValue;
}

CreateRule& CreateRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = LocationValuesMapper::GetLocationValuesForName(jsonValue.GetString("Location"));

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetInteger("Interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntervalUnit"))
  {
    m_intervalUnit = IntervalUnitValuesMapper::GetIntervalUnitValuesForName(jsonValue.GetString("IntervalUnit"));

    m_intervalUnitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Times"))
  {
    Aws::Utils::Array<JsonView> timesJsonList = jsonValue.GetArray("Times");
    for(unsigned timesIndex = 0; timesIndex < timesJsonList.GetLength(); ++timesIndex)
    {
      m_times.push_back(timesJsonList[timesIndex].AsString());
    }
    m_timesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CronExpression"))
  {
    m_cronExpression = jsonValue.GetString("CronExpression");

    m_cronExpressionHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateRule::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", LocationValuesMapper::GetNameForLocationValues(m_location));
  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("Interval", m_interval);

  }

  if(m_intervalUnitHasBeenSet)
  {
   payload.WithString("IntervalUnit", IntervalUnitValuesMapper::GetNameForIntervalUnitValues(m_intervalUnit));
  }

  if(m_timesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timesJsonList(m_times.size());
   for(unsigned timesIndex = 0; timesIndex < timesJsonList.GetLength(); ++timesIndex)
   {
     timesJsonList[timesIndex].AsString(m_times[timesIndex]);
   }
   payload.WithArray("Times", std::move(timesJsonList));

  }

  if(m_cronExpressionHasBeenSet)
  {
   payload.WithString("CronExpression", m_cronExpression);

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
