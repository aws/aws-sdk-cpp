/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

HadoopJarStepConfig::HadoopJarStepConfig(const JsonValue& jsonValue) : 
    m_propertiesHasBeenSet(false),
    m_jarHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_argsHasBeenSet(false)
{
  *this = jsonValue;
}

HadoopJarStepConfig& HadoopJarStepConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Properties"))
  {
    Array<JsonValue> propertiesJsonList = jsonValue.GetArray("Properties");
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
    Array<JsonValue> argsJsonList = jsonValue.GetArray("Args");
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
   Array<JsonValue> propertiesJsonList(m_properties.size());
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
   Array<JsonValue> argsJsonList(m_args.size());
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