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
#include <aws/es/model/StorageType.h>
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

StorageType::StorageType() : 
    m_storageTypeNameHasBeenSet(false),
    m_storageSubTypeNameHasBeenSet(false),
    m_storageTypeLimitsHasBeenSet(false)
{
}

StorageType::StorageType(const JsonValue& jsonValue) : 
    m_storageTypeNameHasBeenSet(false),
    m_storageSubTypeNameHasBeenSet(false),
    m_storageTypeLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

StorageType& StorageType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StorageTypeName"))
  {
    m_storageTypeName = jsonValue.GetString("StorageTypeName");

    m_storageTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageSubTypeName"))
  {
    m_storageSubTypeName = jsonValue.GetString("StorageSubTypeName");

    m_storageSubTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageTypeLimits"))
  {
    Array<JsonValue> storageTypeLimitsJsonList = jsonValue.GetArray("StorageTypeLimits");
    for(unsigned storageTypeLimitsIndex = 0; storageTypeLimitsIndex < storageTypeLimitsJsonList.GetLength(); ++storageTypeLimitsIndex)
    {
      m_storageTypeLimits.push_back(storageTypeLimitsJsonList[storageTypeLimitsIndex].AsObject());
    }
    m_storageTypeLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageType::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypeNameHasBeenSet)
  {
   payload.WithString("StorageTypeName", m_storageTypeName);

  }

  if(m_storageSubTypeNameHasBeenSet)
  {
   payload.WithString("StorageSubTypeName", m_storageSubTypeName);

  }

  if(m_storageTypeLimitsHasBeenSet)
  {
   Array<JsonValue> storageTypeLimitsJsonList(m_storageTypeLimits.size());
   for(unsigned storageTypeLimitsIndex = 0; storageTypeLimitsIndex < storageTypeLimitsJsonList.GetLength(); ++storageTypeLimitsIndex)
   {
     storageTypeLimitsJsonList[storageTypeLimitsIndex].AsObject(m_storageTypeLimits[storageTypeLimitsIndex].Jsonize());
   }
   payload.WithArray("StorageTypeLimits", std::move(storageTypeLimitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws