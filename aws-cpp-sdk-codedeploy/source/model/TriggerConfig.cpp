/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/TriggerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TriggerConfig::TriggerConfig() : 
    m_triggerNameHasBeenSet(false),
    m_triggerTargetArnHasBeenSet(false),
    m_triggerEventsHasBeenSet(false)
{
}

TriggerConfig::TriggerConfig(const JsonValue& jsonValue) : 
    m_triggerNameHasBeenSet(false),
    m_triggerTargetArnHasBeenSet(false),
    m_triggerEventsHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerConfig& TriggerConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("triggerName"))
  {
    m_triggerName = jsonValue.GetString("triggerName");

    m_triggerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerTargetArn"))
  {
    m_triggerTargetArn = jsonValue.GetString("triggerTargetArn");

    m_triggerTargetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("triggerEvents"))
  {
    Array<JsonValue> triggerEventsJsonList = jsonValue.GetArray("triggerEvents");
    for(unsigned triggerEventsIndex = 0; triggerEventsIndex < triggerEventsJsonList.GetLength(); ++triggerEventsIndex)
    {
      m_triggerEvents.push_back(TriggerEventTypeMapper::GetTriggerEventTypeForName(triggerEventsJsonList[triggerEventsIndex].AsString()));
    }
    m_triggerEventsHasBeenSet = true;
  }

  return *this;
}

JsonValue TriggerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_triggerNameHasBeenSet)
  {
   payload.WithString("triggerName", m_triggerName);

  }

  if(m_triggerTargetArnHasBeenSet)
  {
   payload.WithString("triggerTargetArn", m_triggerTargetArn);

  }

  if(m_triggerEventsHasBeenSet)
  {
   Array<JsonValue> triggerEventsJsonList(m_triggerEvents.size());
   for(unsigned triggerEventsIndex = 0; triggerEventsIndex < triggerEventsJsonList.GetLength(); ++triggerEventsIndex)
   {
     triggerEventsJsonList[triggerEventsIndex].AsString(TriggerEventTypeMapper::GetNameForTriggerEventType(m_triggerEvents[triggerEventsIndex]));
   }
   payload.WithArray("triggerEvents", std::move(triggerEventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws