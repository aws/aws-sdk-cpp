/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ContainerOverrides.h>
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

ContainerOverrides::ContainerOverrides() : 
    m_commandHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false)
{
}

ContainerOverrides::ContainerOverrides(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerOverrides& ContainerOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environment"))
  {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceRequirements"))
  {
    Aws::Utils::Array<JsonView> resourceRequirementsJsonList = jsonValue.GetArray("resourceRequirements");
    for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
    {
      m_resourceRequirements.push_back(resourceRequirementsJsonList[resourceRequirementsIndex].AsObject());
    }
    m_resourceRequirementsHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("command", std::move(commandJsonList));

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("environment", std::move(environmentJsonList));

  }

  if(m_resourceRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRequirementsJsonList(m_resourceRequirements.size());
   for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
   {
     resourceRequirementsJsonList[resourceRequirementsIndex].AsObject(m_resourceRequirements[resourceRequirementsIndex].Jsonize());
   }
   payload.WithArray("resourceRequirements", std::move(resourceRequirementsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
