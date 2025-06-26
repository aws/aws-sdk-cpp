/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/MatterCapabilityReportCluster.h>
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

MatterCapabilityReportCluster::MatterCapabilityReportCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

MatterCapabilityReportCluster& MatterCapabilityReportCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInteger("revision");
    m_revisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicId"))
  {
    m_publicId = jsonValue.GetString("publicId");
    m_publicIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("specVersion"))
  {
    m_specVersion = jsonValue.GetString("specVersion");
    m_specVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commands"))
  {
    Aws::Utils::Array<JsonView> commandsJsonList = jsonValue.GetArray("commands");
    for(unsigned commandsIndex = 0; commandsIndex < commandsJsonList.GetLength(); ++commandsIndex)
    {
      m_commands.push_back(commandsJsonList[commandsIndex].AsString());
    }
    m_commandsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsString());
    }
    m_eventsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("featureMap"))
  {
    m_featureMap = jsonValue.GetInt64("featureMap");
    m_featureMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generatedCommands"))
  {
    Aws::Utils::Array<JsonView> generatedCommandsJsonList = jsonValue.GetArray("generatedCommands");
    for(unsigned generatedCommandsIndex = 0; generatedCommandsIndex < generatedCommandsJsonList.GetLength(); ++generatedCommandsIndex)
    {
      m_generatedCommands.push_back(generatedCommandsJsonList[generatedCommandsIndex].AsString());
    }
    m_generatedCommandsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fabricIndex"))
  {
    m_fabricIndex = jsonValue.GetInteger("fabricIndex");
    m_fabricIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue MatterCapabilityReportCluster::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("revision", m_revision);

  }

  if(m_publicIdHasBeenSet)
  {
   payload.WithString("publicId", m_publicId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_specVersionHasBeenSet)
  {
   payload.WithString("specVersion", m_specVersion);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_commandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandsJsonList(m_commands.size());
   for(unsigned commandsIndex = 0; commandsIndex < commandsJsonList.GetLength(); ++commandsIndex)
   {
     commandsJsonList[commandsIndex].AsString(m_commands[commandsIndex]);
   }
   payload.WithArray("commands", std::move(commandsJsonList));

  }

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(m_events[eventsIndex]);
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  if(m_featureMapHasBeenSet)
  {
   payload.WithInt64("featureMap", m_featureMap);

  }

  if(m_generatedCommandsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> generatedCommandsJsonList(m_generatedCommands.size());
   for(unsigned generatedCommandsIndex = 0; generatedCommandsIndex < generatedCommandsJsonList.GetLength(); ++generatedCommandsIndex)
   {
     generatedCommandsJsonList[generatedCommandsIndex].AsString(m_generatedCommands[generatedCommandsIndex]);
   }
   payload.WithArray("generatedCommands", std::move(generatedCommandsJsonList));

  }

  if(m_fabricIndexHasBeenSet)
  {
   payload.WithInteger("fabricIndex", m_fabricIndex);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
