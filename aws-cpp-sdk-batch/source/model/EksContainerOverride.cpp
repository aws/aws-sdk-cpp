/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksContainerOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksContainerOverride::EksContainerOverride() : 
    m_imageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
}

EksContainerOverride::EksContainerOverride(JsonView jsonValue) : 
    m_imageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_resourcesHasBeenSet(false)
{
  *this = jsonValue;
}

EksContainerOverride& EksContainerOverride::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("args"))
  {
    Aws::Utils::Array<JsonView> argsJsonList = jsonValue.GetArray("args");
    for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
    {
      m_args.push_back(argsJsonList[argsIndex].AsString());
    }
    m_argsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("env"))
  {
    Aws::Utils::Array<JsonView> envJsonList = jsonValue.GetArray("env");
    for(unsigned envIndex = 0; envIndex < envJsonList.GetLength(); ++envIndex)
    {
      m_env.push_back(envJsonList[envIndex].AsObject());
    }
    m_envHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resources"))
  {
    m_resources = jsonValue.GetObject("resources");

    m_resourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue EksContainerOverride::Jsonize() const
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

  if(m_argsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> argsJsonList(m_args.size());
   for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
   {
     argsJsonList[argsIndex].AsString(m_args[argsIndex]);
   }
   payload.WithArray("args", std::move(argsJsonList));

  }

  if(m_envHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> envJsonList(m_env.size());
   for(unsigned envIndex = 0; envIndex < envJsonList.GetLength(); ++envIndex)
   {
     envJsonList[envIndex].AsObject(m_env[envIndex].Jsonize());
   }
   payload.WithArray("env", std::move(envJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("resources", m_resources.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
