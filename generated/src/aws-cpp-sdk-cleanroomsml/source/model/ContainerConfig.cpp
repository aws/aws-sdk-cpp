/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ContainerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

ContainerConfig::ContainerConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ContainerConfig& ContainerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageUri"))
  {
    m_imageUri = jsonValue.GetString("imageUri");
    m_imageUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entrypoint"))
  {
    Aws::Utils::Array<JsonView> entrypointJsonList = jsonValue.GetArray("entrypoint");
    for(unsigned entrypointIndex = 0; entrypointIndex < entrypointJsonList.GetLength(); ++entrypointIndex)
    {
      m_entrypoint.push_back(entrypointJsonList[entrypointIndex].AsString());
    }
    m_entrypointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arguments"))
  {
    Aws::Utils::Array<JsonView> argumentsJsonList = jsonValue.GetArray("arguments");
    for(unsigned argumentsIndex = 0; argumentsIndex < argumentsJsonList.GetLength(); ++argumentsIndex)
    {
      m_arguments.push_back(argumentsJsonList[argumentsIndex].AsString());
    }
    m_argumentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metricDefinitions"))
  {
    Aws::Utils::Array<JsonView> metricDefinitionsJsonList = jsonValue.GetArray("metricDefinitions");
    for(unsigned metricDefinitionsIndex = 0; metricDefinitionsIndex < metricDefinitionsJsonList.GetLength(); ++metricDefinitionsIndex)
    {
      m_metricDefinitions.push_back(metricDefinitionsJsonList[metricDefinitionsIndex].AsObject());
    }
    m_metricDefinitionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ContainerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_imageUriHasBeenSet)
  {
   payload.WithString("imageUri", m_imageUri);

  }

  if(m_entrypointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entrypointJsonList(m_entrypoint.size());
   for(unsigned entrypointIndex = 0; entrypointIndex < entrypointJsonList.GetLength(); ++entrypointIndex)
   {
     entrypointJsonList[entrypointIndex].AsString(m_entrypoint[entrypointIndex]);
   }
   payload.WithArray("entrypoint", std::move(entrypointJsonList));

  }

  if(m_argumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> argumentsJsonList(m_arguments.size());
   for(unsigned argumentsIndex = 0; argumentsIndex < argumentsJsonList.GetLength(); ++argumentsIndex)
   {
     argumentsJsonList[argumentsIndex].AsString(m_arguments[argumentsIndex]);
   }
   payload.WithArray("arguments", std::move(argumentsJsonList));

  }

  if(m_metricDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricDefinitionsJsonList(m_metricDefinitions.size());
   for(unsigned metricDefinitionsIndex = 0; metricDefinitionsIndex < metricDefinitionsJsonList.GetLength(); ++metricDefinitionsIndex)
   {
     metricDefinitionsJsonList[metricDefinitionsIndex].AsObject(m_metricDefinitions[metricDefinitionsIndex].Jsonize());
   }
   payload.WithArray("metricDefinitions", std::move(metricDefinitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
