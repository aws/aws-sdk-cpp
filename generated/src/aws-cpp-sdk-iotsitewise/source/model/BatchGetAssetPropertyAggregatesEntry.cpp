/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesEntry.h>
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

BatchGetAssetPropertyAggregatesEntry::BatchGetAssetPropertyAggregatesEntry() : 
    m_entryIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_propertyAliasHasBeenSet(false),
    m_aggregateTypesHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_qualitiesHasBeenSet(false),
    m_timeOrdering(TimeOrdering::NOT_SET),
    m_timeOrderingHasBeenSet(false)
{
}

BatchGetAssetPropertyAggregatesEntry::BatchGetAssetPropertyAggregatesEntry(JsonView jsonValue) : 
    m_entryIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_propertyAliasHasBeenSet(false),
    m_aggregateTypesHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_qualitiesHasBeenSet(false),
    m_timeOrdering(TimeOrdering::NOT_SET),
    m_timeOrderingHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetAssetPropertyAggregatesEntry& BatchGetAssetPropertyAggregatesEntry::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("aggregateTypes"))
  {
    Aws::Utils::Array<JsonView> aggregateTypesJsonList = jsonValue.GetArray("aggregateTypes");
    for(unsigned aggregateTypesIndex = 0; aggregateTypesIndex < aggregateTypesJsonList.GetLength(); ++aggregateTypesIndex)
    {
      m_aggregateTypes.push_back(AggregateTypeMapper::GetAggregateTypeForName(aggregateTypesJsonList[aggregateTypesIndex].AsString()));
    }
    m_aggregateTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolution"))
  {
    m_resolution = jsonValue.GetString("resolution");

    m_resolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetDouble("endDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("qualities"))
  {
    Aws::Utils::Array<JsonView> qualitiesJsonList = jsonValue.GetArray("qualities");
    for(unsigned qualitiesIndex = 0; qualitiesIndex < qualitiesJsonList.GetLength(); ++qualitiesIndex)
    {
      m_qualities.push_back(QualityMapper::GetQualityForName(qualitiesJsonList[qualitiesIndex].AsString()));
    }
    m_qualitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeOrdering"))
  {
    m_timeOrdering = TimeOrderingMapper::GetTimeOrderingForName(jsonValue.GetString("timeOrdering"));

    m_timeOrderingHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetAssetPropertyAggregatesEntry::Jsonize() const
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

  if(m_aggregateTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregateTypesJsonList(m_aggregateTypes.size());
   for(unsigned aggregateTypesIndex = 0; aggregateTypesIndex < aggregateTypesJsonList.GetLength(); ++aggregateTypesIndex)
   {
     aggregateTypesJsonList[aggregateTypesIndex].AsString(AggregateTypeMapper::GetNameForAggregateType(m_aggregateTypes[aggregateTypesIndex]));
   }
   payload.WithArray("aggregateTypes", std::move(aggregateTypesJsonList));

  }

  if(m_resolutionHasBeenSet)
  {
   payload.WithString("resolution", m_resolution);

  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  if(m_qualitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> qualitiesJsonList(m_qualities.size());
   for(unsigned qualitiesIndex = 0; qualitiesIndex < qualitiesJsonList.GetLength(); ++qualitiesIndex)
   {
     qualitiesJsonList[qualitiesIndex].AsString(QualityMapper::GetNameForQuality(m_qualities[qualitiesIndex]));
   }
   payload.WithArray("qualities", std::move(qualitiesJsonList));

  }

  if(m_timeOrderingHasBeenSet)
  {
   payload.WithString("timeOrdering", TimeOrderingMapper::GetNameForTimeOrdering(m_timeOrdering));
  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
