/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/HadoopJarStepConfig.h>
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

HadoopJarStepConfig::HadoopJarStepConfig() : 
    m_propertiesHasBeenSet(false),
    m_jarHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

HadoopJarStepConfig::HadoopJarStepConfig(JsonView jsonValue) : 
    m_propertiesHasBeenSet(false),
    m_jarHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_argsHasBeenSet(false)
{
  *this = jsonValue;
}

HadoopJarStepConfig& HadoopJarStepConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Properties"))
  {
    Aws::Utils::Array<JsonView> propertiesJsonList = jsonValue.GetArray("Properties");
    for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
    {
      m_properties.push_back(propertiesJsonList[propertiesIndex].AsObject());
    }
    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Jar"))
  {
    m_jar = jsonValue.GetString("Jar");

    m_jarHasBeenSet = true;
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

JsonValue HadoopJarStepConfig::Jsonize() const
{
  JsonValue payload;

  if(m_propertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertiesJsonList(m_properties.size());
   for(unsigned propertiesIndex = 0; propertiesIndex < propertiesJsonList.GetLength(); ++propertiesIndex)
   {
     propertiesJsonList[propertiesIndex].AsObject(m_properties[propertiesIndex].Jsonize());
   }
   payload.WithArray("Properties", std::move(propertiesJsonList));

  }

  if(m_jarHasBeenSet)
  {
   payload.WithString("Jar", m_jar);

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
