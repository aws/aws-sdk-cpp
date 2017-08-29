/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/glue/model/PartitionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

PartitionInput::PartitionInput() : 
    m_valuesHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_storageDescriptorHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastAnalyzedTimeHasBeenSet(false)
{
}

PartitionInput::PartitionInput(const JsonValue& jsonValue) : 
    m_valuesHasBeenSet(false),
    m_lastAccessTimeHasBeenSet(false),
    m_storageDescriptorHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_lastAnalyzedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PartitionInput& PartitionInput::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Values"))
  {
    Array<JsonValue> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessTime"))
  {
    m_lastAccessTime = jsonValue.GetDouble("LastAccessTime");

    m_lastAccessTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageDescriptor"))
  {
    m_storageDescriptor = jsonValue.GetObject("StorageDescriptor");

    m_storageDescriptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonValue> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      m_parameters[parametersItem.first] = parametersItem.second.AsString();
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAnalyzedTime"))
  {
    m_lastAnalyzedTime = jsonValue.GetDouble("LastAnalyzedTime");

    m_lastAnalyzedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PartitionInput::Jsonize() const
{
  JsonValue payload;

  if(m_valuesHasBeenSet)
  {
   Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_lastAccessTimeHasBeenSet)
  {
   payload.WithDouble("LastAccessTime", m_lastAccessTime.SecondsWithMSPrecision());
  }

  if(m_storageDescriptorHasBeenSet)
  {
   payload.WithObject("StorageDescriptor", m_storageDescriptor.Jsonize());

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_lastAnalyzedTimeHasBeenSet)
  {
   payload.WithDouble("LastAnalyzedTime", m_lastAnalyzedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
