/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TriggerConfig::TriggerConfig(JsonView jsonValue) : 
    m_triggerNameHasBeenSet(false),
    m_triggerTargetArnHasBeenSet(false),
    m_triggerEventsHasBeenSet(false)
{
  *this = jsonValue;
}

TriggerConfig& TriggerConfig::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> triggerEventsJsonList = jsonValue.GetArray("triggerEvents");
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
   Aws::Utils::Array<JsonValue> triggerEventsJsonList(m_triggerEvents.size());
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
