/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CatalogItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

CatalogItem::CatalogItem() : 
    m_catalogItemIdHasBeenSet(false),
    m_itemStatus(CatalogItemStatus::NOT_SET),
    m_itemStatusHasBeenSet(false),
    m_eC2CapacitiesHasBeenSet(false),
    m_powerKva(0.0),
    m_powerKvaHasBeenSet(false),
    m_weightLbs(0),
    m_weightLbsHasBeenSet(false),
    m_supportedUplinkGbpsHasBeenSet(false),
    m_supportedStorageHasBeenSet(false)
{
}

CatalogItem::CatalogItem(JsonView jsonValue) : 
    m_catalogItemIdHasBeenSet(false),
    m_itemStatus(CatalogItemStatus::NOT_SET),
    m_itemStatusHasBeenSet(false),
    m_eC2CapacitiesHasBeenSet(false),
    m_powerKva(0.0),
    m_powerKvaHasBeenSet(false),
    m_weightLbs(0),
    m_weightLbsHasBeenSet(false),
    m_supportedUplinkGbpsHasBeenSet(false),
    m_supportedStorageHasBeenSet(false)
{
  *this = jsonValue;
}

CatalogItem& CatalogItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CatalogItemId"))
  {
    m_catalogItemId = jsonValue.GetString("CatalogItemId");

    m_catalogItemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ItemStatus"))
  {
    m_itemStatus = CatalogItemStatusMapper::GetCatalogItemStatusForName(jsonValue.GetString("ItemStatus"));

    m_itemStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EC2Capacities"))
  {
    Aws::Utils::Array<JsonView> eC2CapacitiesJsonList = jsonValue.GetArray("EC2Capacities");
    for(unsigned eC2CapacitiesIndex = 0; eC2CapacitiesIndex < eC2CapacitiesJsonList.GetLength(); ++eC2CapacitiesIndex)
    {
      m_eC2Capacities.push_back(eC2CapacitiesJsonList[eC2CapacitiesIndex].AsObject());
    }
    m_eC2CapacitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PowerKva"))
  {
    m_powerKva = jsonValue.GetDouble("PowerKva");

    m_powerKvaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeightLbs"))
  {
    m_weightLbs = jsonValue.GetInteger("WeightLbs");

    m_weightLbsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedUplinkGbps"))
  {
    Aws::Utils::Array<JsonView> supportedUplinkGbpsJsonList = jsonValue.GetArray("SupportedUplinkGbps");
    for(unsigned supportedUplinkGbpsIndex = 0; supportedUplinkGbpsIndex < supportedUplinkGbpsJsonList.GetLength(); ++supportedUplinkGbpsIndex)
    {
      m_supportedUplinkGbps.push_back(supportedUplinkGbpsJsonList[supportedUplinkGbpsIndex].AsInteger());
    }
    m_supportedUplinkGbpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedStorage"))
  {
    Aws::Utils::Array<JsonView> supportedStorageJsonList = jsonValue.GetArray("SupportedStorage");
    for(unsigned supportedStorageIndex = 0; supportedStorageIndex < supportedStorageJsonList.GetLength(); ++supportedStorageIndex)
    {
      m_supportedStorage.push_back(SupportedStorageEnumMapper::GetSupportedStorageEnumForName(supportedStorageJsonList[supportedStorageIndex].AsString()));
    }
    m_supportedStorageHasBeenSet = true;
  }

  return *this;
}

JsonValue CatalogItem::Jsonize() const
{
  JsonValue payload;

  if(m_catalogItemIdHasBeenSet)
  {
   payload.WithString("CatalogItemId", m_catalogItemId);

  }

  if(m_itemStatusHasBeenSet)
  {
   payload.WithString("ItemStatus", CatalogItemStatusMapper::GetNameForCatalogItemStatus(m_itemStatus));
  }

  if(m_eC2CapacitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eC2CapacitiesJsonList(m_eC2Capacities.size());
   for(unsigned eC2CapacitiesIndex = 0; eC2CapacitiesIndex < eC2CapacitiesJsonList.GetLength(); ++eC2CapacitiesIndex)
   {
     eC2CapacitiesJsonList[eC2CapacitiesIndex].AsObject(m_eC2Capacities[eC2CapacitiesIndex].Jsonize());
   }
   payload.WithArray("EC2Capacities", std::move(eC2CapacitiesJsonList));

  }

  if(m_powerKvaHasBeenSet)
  {
   payload.WithDouble("PowerKva", m_powerKva);

  }

  if(m_weightLbsHasBeenSet)
  {
   payload.WithInteger("WeightLbs", m_weightLbs);

  }

  if(m_supportedUplinkGbpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedUplinkGbpsJsonList(m_supportedUplinkGbps.size());
   for(unsigned supportedUplinkGbpsIndex = 0; supportedUplinkGbpsIndex < supportedUplinkGbpsJsonList.GetLength(); ++supportedUplinkGbpsIndex)
   {
     supportedUplinkGbpsJsonList[supportedUplinkGbpsIndex].AsInteger(m_supportedUplinkGbps[supportedUplinkGbpsIndex]);
   }
   payload.WithArray("SupportedUplinkGbps", std::move(supportedUplinkGbpsJsonList));

  }

  if(m_supportedStorageHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedStorageJsonList(m_supportedStorage.size());
   for(unsigned supportedStorageIndex = 0; supportedStorageIndex < supportedStorageJsonList.GetLength(); ++supportedStorageIndex)
   {
     supportedStorageJsonList[supportedStorageIndex].AsString(SupportedStorageEnumMapper::GetNameForSupportedStorageEnum(m_supportedStorage[supportedStorageIndex]));
   }
   payload.WithArray("SupportedStorage", std::move(supportedStorageJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
