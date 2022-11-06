/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesSuccessEntry.h>
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

BatchGetAssetPropertyAggregatesSuccessEntry::BatchGetAssetPropertyAggregatesSuccessEntry() : 
    m_entryIdHasBeenSet(false),
    m_aggregatedValuesHasBeenSet(false)
{
}

BatchGetAssetPropertyAggregatesSuccessEntry::BatchGetAssetPropertyAggregatesSuccessEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_aggregatedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetAssetPropertyAggregatesSuccessEntry& BatchGetAssetPropertyAggregatesSuccessEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");

    m_entryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aggregatedValues"))
  {
    Aws::Utils::Array<JsonView> aggregatedValuesJsonList = jsonValue.GetArray("aggregatedValues");
    for(unsigned aggregatedValuesIndex = 0; aggregatedValuesIndex < aggregatedValuesJsonList.GetLength(); ++aggregatedValuesIndex)
    {
      m_aggregatedValues.push_back(aggregatedValuesJsonList[aggregatedValuesIndex].AsObject());
    }
    m_aggregatedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetAssetPropertyAggregatesSuccessEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_aggregatedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatedValuesJsonList(m_aggregatedValues.size());
   for(unsigned aggregatedValuesIndex = 0; aggregatedValuesIndex < aggregatedValuesJsonList.GetLength(); ++aggregatedValuesIndex)
   {
     aggregatedValuesJsonList[aggregatedValuesIndex].AsObject(m_aggregatedValues[aggregatedValuesIndex].Jsonize());
   }
   payload.WithArray("aggregatedValues", std::move(aggregatedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
