/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Recommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

Recommendation::Recommendation() : 
    m_storageTypeHasBeenSet(false),
    m_storageConfigurationHasBeenSet(false),
    m_estimatedMonthlyStorageCostHasBeenSet(false)
{
}

Recommendation::Recommendation(JsonView jsonValue) : 
    m_storageTypeHasBeenSet(false),
    m_storageConfigurationHasBeenSet(false),
    m_estimatedMonthlyStorageCostHasBeenSet(false)
{
  *this = jsonValue;
}

Recommendation& Recommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> storageConfigurationJsonMap = jsonValue.GetObject("StorageConfiguration").GetAllObjects();
    for(auto& storageConfigurationItem : storageConfigurationJsonMap)
    {
      m_storageConfiguration[storageConfigurationItem.first] = storageConfigurationItem.second.AsString();
    }
    m_storageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EstimatedMonthlyStorageCost"))
  {
    m_estimatedMonthlyStorageCost = jsonValue.GetString("EstimatedMonthlyStorageCost");

    m_estimatedMonthlyStorageCostHasBeenSet = true;
  }

  return *this;
}

JsonValue Recommendation::Jsonize() const
{
  JsonValue payload;

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_storageConfigurationHasBeenSet)
  {
   JsonValue storageConfigurationJsonMap;
   for(auto& storageConfigurationItem : m_storageConfiguration)
   {
     storageConfigurationJsonMap.WithString(storageConfigurationItem.first, storageConfigurationItem.second);
   }
   payload.WithObject("StorageConfiguration", std::move(storageConfigurationJsonMap));

  }

  if(m_estimatedMonthlyStorageCostHasBeenSet)
  {
   payload.WithString("EstimatedMonthlyStorageCost", m_estimatedMonthlyStorageCost);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
