/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/HadoopStepConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

HadoopStepConfig::HadoopStepConfig() : 
    m_jarHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

HadoopStepConfig::HadoopStepConfig(JsonView jsonValue) : 
    m_jarHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_argsHasBeenSet(false)
{
  *this = jsonValue;
}

HadoopStepConfig& HadoopStepConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Jar"))
  {
    m_jar = jsonValue.GetString("Jar");

    m_jarHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("Properties").GetAllObjects();
    for(auto& propertiesItem : propertiesJsonMap)
    {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MainClass"))
  {
    m_mainClass = jsonValue.GetString("MainClass");

    m_mainClassHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Args"))
  {
    Aws::Utils::Array<JsonView> argsJsonList = jsonValue.GetArray("Args");
    for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
    {
      m_args.push_back(argsJsonList[argsIndex].AsString());
    }
    m_argsHasBeenSet = true;
  }

  return *this;
}

JsonValue HadoopStepConfig::Jsonize() const
{
  JsonValue payload;

  if(m_jarHasBeenSet)
  {
   payload.WithString("Jar", m_jar);

  }

  if(m_propertiesHasBeenSet)
  {
   JsonValue propertiesJsonMap;
   for(auto& propertiesItem : m_properties)
   {
     propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
   }
   payload.WithObject("Properties", std::move(propertiesJsonMap));

  }

  if(m_mainClassHasBeenSet)
  {
   payload.WithString("MainClass", m_mainClass);

  }

  if(m_argsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> argsJsonList(m_args.size());
   for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
   {
     argsJsonList[argsIndex].AsString(m_args[argsIndex]);
   }
   payload.WithArray("Args", std::move(argsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
