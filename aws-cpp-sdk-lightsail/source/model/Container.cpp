/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Container.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Container::Container() : 
    m_imageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_portsHasBeenSet(false)
{
}

Container::Container(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_portsHasBeenSet(false)
{
  *this = jsonValue;
}

Container& Container::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ports"))
  {
    Aws::Map<Aws::String, JsonView> portsJsonMap = jsonValue.GetObject("ports").GetAllObjects();
    for(auto& portsItem : portsJsonMap)
    {
      m_ports[portsItem.first] = ContainerServiceProtocolMapper::GetContainerServiceProtocolForName(portsItem.second.AsString());
    }
    m_portsHasBeenSet = true;
  }

  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("environment", std::move(environmentJsonMap));

  }

  if(m_portsHasBeenSet)
  {
   JsonValue portsJsonMap;
   for(auto& portsItem : m_ports)
   {
     portsJsonMap.WithString(portsItem.first, ContainerServiceProtocolMapper::GetNameForContainerServiceProtocol(portsItem.second));
   }
   payload.WithObject("ports", std::move(portsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
