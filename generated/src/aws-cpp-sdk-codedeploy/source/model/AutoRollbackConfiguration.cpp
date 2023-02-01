/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/AutoRollbackConfiguration.h>
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

AutoRollbackConfiguration::AutoRollbackConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

AutoRollbackConfiguration::AutoRollbackConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

AutoRollbackConfiguration& AutoRollbackConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(AutoRollbackEventMapper::GetAutoRollbackEventForName(eventsJsonList[eventsIndex].AsString()));
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoRollbackConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(AutoRollbackEventMapper::GetNameForAutoRollbackEvent(m_events[eventsIndex]));
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
