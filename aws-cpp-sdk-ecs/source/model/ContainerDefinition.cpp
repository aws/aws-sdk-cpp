/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ContainerDefinition::ContainerDefinition() : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_volumesFromHasBeenSet(false)
{
}

ContainerDefinition::ContainerDefinition(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_volumesFromHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerDefinition& ContainerDefinition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetInteger("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("links"))
  {
    Array<JsonValue> linksJsonList = jsonValue.GetArray("links");
    for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
    {
      m_links.push_back(linksJsonList[linksIndex].AsString());
    }
    m_linksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portMappings"))
  {
    Array<JsonValue> portMappingsJsonList = jsonValue.GetArray("portMappings");
    for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
    {
      m_portMappings.push_back(portMappingsJsonList[portMappingsIndex].AsObject());
    }
    m_portMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("essential"))
  {
    m_essential = jsonValue.GetBool("essential");

    m_essentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entryPoint"))
  {
    Array<JsonValue> entryPointJsonList = jsonValue.GetArray("entryPoint");
    for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
    {
      m_entryPoint.push_back(entryPointJsonList[entryPointIndex].AsString());
    }
    m_entryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Array<JsonValue> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Array<JsonValue> environmentJsonList = jsonValue.GetArray("environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mountPoints"))
  {
    Array<JsonValue> mountPointsJsonList = jsonValue.GetArray("mountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumesFrom"))
  {
    Array<JsonValue> volumesFromJsonList = jsonValue.GetArray("volumesFrom");
    for(unsigned volumesFromIndex = 0; volumesFromIndex < volumesFromJsonList.GetLength(); ++volumesFromIndex)
    {
      m_volumesFrom.push_back(volumesFromJsonList[volumesFromIndex].AsObject());
    }
    m_volumesFromHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_linksHasBeenSet)
  {
   Array<JsonValue> linksJsonList(m_links.size());
   for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
   {
     linksJsonList[linksIndex].AsString(m_links[linksIndex]);
   }
   payload.WithArray("links", std::move(linksJsonList));

  }

  if(m_portMappingsHasBeenSet)
  {
   Array<JsonValue> portMappingsJsonList(m_portMappings.size());
   for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
   {
     portMappingsJsonList[portMappingsIndex].AsObject(m_portMappings[portMappingsIndex].Jsonize());
   }
   payload.WithArray("portMappings", std::move(portMappingsJsonList));

  }

  if(m_essentialHasBeenSet)
  {
   payload.WithBool("essential", m_essential);

  }

  if(m_entryPointHasBeenSet)
  {
   Array<JsonValue> entryPointJsonList(m_entryPoint.size());
   for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
   {
     entryPointJsonList[entryPointIndex].AsString(m_entryPoint[entryPointIndex]);
   }
   payload.WithArray("entryPoint", std::move(entryPointJsonList));

  }

  if(m_commandHasBeenSet)
  {
   Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("environment", std::move(environmentJsonList));

  }

  if(m_mountPointsHasBeenSet)
  {
   Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
   for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
   {
     mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
   }
   payload.WithArray("mountPoints", std::move(mountPointsJsonList));

  }

  if(m_volumesFromHasBeenSet)
  {
   Array<JsonValue> volumesFromJsonList(m_volumesFrom.size());
   for(unsigned volumesFromIndex = 0; volumesFromIndex < volumesFromJsonList.GetLength(); ++volumesFromIndex)
   {
     volumesFromJsonList[volumesFromIndex].AsObject(m_volumesFrom[volumesFromIndex].Jsonize());
   }
   payload.WithArray("volumesFrom", std::move(volumesFromJsonList));

  }

  return std::move(payload);
}