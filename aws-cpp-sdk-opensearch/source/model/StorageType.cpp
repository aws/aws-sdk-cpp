/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/StorageType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

StorageType::StorageType() : 
    m_storageTypeNameHasBeenSet(false),
    m_storageSubTypeNameHasBeenSet(false),
    m_storageTypeLimitsHasBeenSet(false)
{
}

StorageType::StorageType(JsonView jsonValue) : 
    m_storageTypeNameHasBeenSet(false),
    m_storageSubTypeNameHasBeenSet(false),
    m_storageTypeLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

StorageType& StorageType::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> storageTypeLimitsJsonList = jsonValue.GetArray("StorageTypeLimits");
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
   Aws::Utils::Array<JsonValue> storageTypeLimitsJsonList(m_storageTypeLimits.size());
   for(unsigned storageTypeLimitsIndex = 0; storageTypeLimitsIndex < storageTypeLimitsJsonList.GetLength(); ++storageTypeLimitsIndex)
   {
     storageTypeLimitsJsonList[storageTypeLimitsIndex].AsObject(m_storageTypeLimits[storageTypeLimitsIndex].Jsonize());
   }
   payload.WithArray("StorageTypeLimits", std::move(storageTypeLimitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
