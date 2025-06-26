/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/MatterCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

MatterCluster::MatterCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

MatterCluster& MatterCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributes"))
  {
    m_attributes = jsonValue.GetObject("attributes");
    m_attributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commands"))
  {
    Aws::Map<Aws::String, JsonView> commandsJsonMap = jsonValue.GetObject("commands").GetAllObjects();
    for(auto& commandsItem : commandsJsonMap)
    {
      m_commands[commandsItem.first] = commandsItem.second.AsObject();
    }
    m_commandsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("events"))
  {
    Aws::Map<Aws::String, JsonView> eventsJsonMap = jsonValue.GetObject("events").GetAllObjects();
    for(auto& eventsItem : eventsJsonMap)
    {
      m_events[eventsItem.first] = eventsItem.second.AsObject();
    }
    m_eventsHasBeenSet = true;
  }
  return *this;
}

JsonValue MatterCluster::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_attributesHasBeenSet)
  {
    if(!m_attributes.View().IsNull())
    {
       payload.WithObject("attributes", JsonValue(m_attributes.View()));
    }
  }

  if(m_commandsHasBeenSet)
  {
   JsonValue commandsJsonMap;
   for(auto& commandsItem : m_commands)
   {
     commandsJsonMap.WithObject(commandsItem.first, commandsItem.second.View());
   }
   payload.WithObject("commands", std::move(commandsJsonMap));

  }

  if(m_eventsHasBeenSet)
  {
   JsonValue eventsJsonMap;
   for(auto& eventsItem : m_events)
   {
     eventsJsonMap.WithObject(eventsItem.first, eventsItem.second.View());
   }
   payload.WithObject("events", std::move(eventsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
