/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutAssetPropertyValueEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PutAssetPropertyValueEntry::PutAssetPropertyValueEntry() : 
    m_entryIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_propertyAliasHasBeenSet(false),
    m_propertyValuesHasBeenSet(false)
{
}

PutAssetPropertyValueEntry::PutAssetPropertyValueEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_propertyAliasHasBeenSet(false),
    m_propertyValuesHasBeenSet(false)
{
  *this = jsonValue;
}

PutAssetPropertyValueEntry& PutAssetPropertyValueEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");

    m_entryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyId"))
  {
    m_propertyId = jsonValue.GetString("propertyId");

    m_propertyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyAlias"))
  {
    m_propertyAlias = jsonValue.GetString("propertyAlias");

    m_propertyAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyValues"))
  {
    Aws::Utils::Array<JsonView> propertyValuesJsonList = jsonValue.GetArray("propertyValues");
    for(unsigned propertyValuesIndex = 0; propertyValuesIndex < propertyValuesJsonList.GetLength(); ++propertyValuesIndex)
    {
      m_propertyValues.push_back(propertyValuesJsonList[propertyValuesIndex].AsObject());
    }
    m_propertyValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue PutAssetPropertyValueEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_propertyIdHasBeenSet)
  {
   payload.WithString("propertyId", m_propertyId);

  }

  if(m_propertyAliasHasBeenSet)
  {
   payload.WithString("propertyAlias", m_propertyAlias);

  }

  if(m_propertyValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyValuesJsonList(m_propertyValues.size());
   for(unsigned propertyValuesIndex = 0; propertyValuesIndex < propertyValuesJsonList.GetLength(); ++propertyValuesIndex)
   {
     propertyValuesJsonList[propertyValuesIndex].AsObject(m_propertyValues[propertyValuesIndex].Jsonize());
   }
   payload.WithArray("propertyValues", std::move(propertyValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
