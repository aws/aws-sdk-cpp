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
#include <aws/es/model/Limits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

Limits::Limits() : 
    m_storageTypesHasBeenSet(false),
    m_instanceLimitsHasBeenSet(false),
    m_additionalLimitsHasBeenSet(false)
{
}

Limits::Limits(const JsonValue& jsonValue) : 
    m_storageTypesHasBeenSet(false),
    m_instanceLimitsHasBeenSet(false),
    m_additionalLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

Limits& Limits::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StorageTypes"))
  {
    Array<JsonValue> storageTypesJsonList = jsonValue.GetArray("StorageTypes");
    for(unsigned storageTypesIndex = 0; storageTypesIndex < storageTypesJsonList.GetLength(); ++storageTypesIndex)
    {
      m_storageTypes.push_back(storageTypesJsonList[storageTypesIndex].AsObject());
    }
    m_storageTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceLimits"))
  {
    m_instanceLimits = jsonValue.GetObject("InstanceLimits");

    m_instanceLimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalLimits"))
  {
    Array<JsonValue> additionalLimitsJsonList = jsonValue.GetArray("AdditionalLimits");
    for(unsigned additionalLimitsIndex = 0; additionalLimitsIndex < additionalLimitsJsonList.GetLength(); ++additionalLimitsIndex)
    {
      m_additionalLimits.push_back(additionalLimitsJsonList[additionalLimitsIndex].AsObject());
    }
    m_additionalLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue Limits::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypesHasBeenSet)
  {
   Array<JsonValue> storageTypesJsonList(m_storageTypes.size());
   for(unsigned storageTypesIndex = 0; storageTypesIndex < storageTypesJsonList.GetLength(); ++storageTypesIndex)
   {
     storageTypesJsonList[storageTypesIndex].AsObject(m_storageTypes[storageTypesIndex].Jsonize());
   }
   payload.WithArray("StorageTypes", std::move(storageTypesJsonList));

  }

  if(m_instanceLimitsHasBeenSet)
  {
   payload.WithObject("InstanceLimits", m_instanceLimits.Jsonize());

  }

  if(m_additionalLimitsHasBeenSet)
  {
   Array<JsonValue> additionalLimitsJsonList(m_additionalLimits.size());
   for(unsigned additionalLimitsIndex = 0; additionalLimitsIndex < additionalLimitsJsonList.GetLength(); ++additionalLimitsIndex)
   {
     additionalLimitsJsonList[additionalLimitsIndex].AsObject(m_additionalLimits[additionalLimitsIndex].Jsonize());
   }
   payload.WithArray("AdditionalLimits", std::move(additionalLimitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws