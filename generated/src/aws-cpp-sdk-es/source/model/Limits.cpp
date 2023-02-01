/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Limits::Limits(JsonView jsonValue) : 
    m_storageTypesHasBeenSet(false),
    m_instanceLimitsHasBeenSet(false),
    m_additionalLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

Limits& Limits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageTypes"))
  {
    Aws::Utils::Array<JsonView> storageTypesJsonList = jsonValue.GetArray("StorageTypes");
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
    Aws::Utils::Array<JsonView> additionalLimitsJsonList = jsonValue.GetArray("AdditionalLimits");
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
   Aws::Utils::Array<JsonValue> storageTypesJsonList(m_storageTypes.size());
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
   Aws::Utils::Array<JsonValue> additionalLimitsJsonList(m_additionalLimits.size());
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
