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
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(IntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false),
    m_timesHasBeenSet(false)
{
}

CreateRule::CreateRule(JsonView jsonValue) : 
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_intervalUnit(IntervalUnitValues::NOT_SET),
    m_intervalUnitHasBeenSet(false),
    m_timesHasBeenSet(false)
{
  *this = jsonValue;
}

CreateRule& CreateRule::operator =(JsonView jsonValue)
{
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
    Array<JsonView> timesJsonList = jsonValue.GetArray("Times");
    for(unsigned timesIndex = 0; timesIndex < timesJsonList.GetLength(); ++timesIndex)
    {
      m_times.push_back(timesJsonList[timesIndex].AsString());
    }
    m_timesHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateRule::Jsonize() const
{
  JsonValue payload;

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
   Array<JsonValue> timesJsonList(m_times.size());
   for(unsigned timesIndex = 0; timesIndex < timesJsonList.GetLength(); ++timesIndex)
   {
     timesJsonList[timesIndex].AsString(m_times[timesIndex]);
   }
   payload.WithArray("Times", std::move(timesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
