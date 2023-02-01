/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistorySuccessEntry.h>
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

BatchGetAssetPropertyValueHistorySuccessEntry::BatchGetAssetPropertyValueHistorySuccessEntry() : 
    m_entryIdHasBeenSet(false),
    m_assetPropertyValueHistoryHasBeenSet(false)
{
}

BatchGetAssetPropertyValueHistorySuccessEntry::BatchGetAssetPropertyValueHistorySuccessEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_assetPropertyValueHistoryHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetAssetPropertyValueHistorySuccessEntry& BatchGetAssetPropertyValueHistorySuccessEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");

    m_entryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetPropertyValueHistory"))
  {
    Aws::Utils::Array<JsonView> assetPropertyValueHistoryJsonList = jsonValue.GetArray("assetPropertyValueHistory");
    for(unsigned assetPropertyValueHistoryIndex = 0; assetPropertyValueHistoryIndex < assetPropertyValueHistoryJsonList.GetLength(); ++assetPropertyValueHistoryIndex)
    {
      m_assetPropertyValueHistory.push_back(assetPropertyValueHistoryJsonList[assetPropertyValueHistoryIndex].AsObject());
    }
    m_assetPropertyValueHistoryHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetAssetPropertyValueHistorySuccessEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_assetPropertyValueHistoryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetPropertyValueHistoryJsonList(m_assetPropertyValueHistory.size());
   for(unsigned assetPropertyValueHistoryIndex = 0; assetPropertyValueHistoryIndex < assetPropertyValueHistoryJsonList.GetLength(); ++assetPropertyValueHistoryIndex)
   {
     assetPropertyValueHistoryJsonList[assetPropertyValueHistoryIndex].AsObject(m_assetPropertyValueHistory[assetPropertyValueHistoryIndex].Jsonize());
   }
   payload.WithArray("assetPropertyValueHistory", std::move(assetPropertyValueHistoryJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
