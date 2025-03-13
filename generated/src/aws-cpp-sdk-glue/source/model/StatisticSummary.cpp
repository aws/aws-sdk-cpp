/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StatisticSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

StatisticSummary::StatisticSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

StatisticSummary& StatisticSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatisticId"))
  {
    m_statisticId = jsonValue.GetString("StatisticId");
    m_statisticIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RunIdentifier"))
  {
    m_runIdentifier = jsonValue.GetObject("RunIdentifier");
    m_runIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatisticName"))
  {
    m_statisticName = jsonValue.GetString("StatisticName");
    m_statisticNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DoubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("DoubleValue");
    m_doubleValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationLevel"))
  {
    m_evaluationLevel = StatisticEvaluationLevelMapper::GetStatisticEvaluationLevelForName(jsonValue.GetString("EvaluationLevel"));
    m_evaluationLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ColumnsReferenced"))
  {
    Aws::Utils::Array<JsonView> columnsReferencedJsonList = jsonValue.GetArray("ColumnsReferenced");
    for(unsigned columnsReferencedIndex = 0; columnsReferencedIndex < columnsReferencedJsonList.GetLength(); ++columnsReferencedIndex)
    {
      m_columnsReferenced.push_back(columnsReferencedJsonList[columnsReferencedIndex].AsString());
    }
    m_columnsReferencedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReferencedDatasets"))
  {
    Aws::Utils::Array<JsonView> referencedDatasetsJsonList = jsonValue.GetArray("ReferencedDatasets");
    for(unsigned referencedDatasetsIndex = 0; referencedDatasetsIndex < referencedDatasetsJsonList.GetLength(); ++referencedDatasetsIndex)
    {
      m_referencedDatasets.push_back(referencedDatasetsJsonList[referencedDatasetsIndex].AsString());
    }
    m_referencedDatasetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatisticProperties"))
  {
    Aws::Map<Aws::String, JsonView> statisticPropertiesJsonMap = jsonValue.GetObject("StatisticProperties").GetAllObjects();
    for(auto& statisticPropertiesItem : statisticPropertiesJsonMap)
    {
      m_statisticProperties[statisticPropertiesItem.first] = statisticPropertiesItem.second.AsString();
    }
    m_statisticPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecordedOn"))
  {
    m_recordedOn = jsonValue.GetDouble("RecordedOn");
    m_recordedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InclusionAnnotation"))
  {
    m_inclusionAnnotation = jsonValue.GetObject("InclusionAnnotation");
    m_inclusionAnnotationHasBeenSet = true;
  }
  return *this;
}

JsonValue StatisticSummary::Jsonize() const
{
  JsonValue payload;

  if(m_statisticIdHasBeenSet)
  {
   payload.WithString("StatisticId", m_statisticId);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_runIdentifierHasBeenSet)
  {
   payload.WithObject("RunIdentifier", m_runIdentifier.Jsonize());

  }

  if(m_statisticNameHasBeenSet)
  {
   payload.WithString("StatisticName", m_statisticName);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("DoubleValue", m_doubleValue);

  }

  if(m_evaluationLevelHasBeenSet)
  {
   payload.WithString("EvaluationLevel", StatisticEvaluationLevelMapper::GetNameForStatisticEvaluationLevel(m_evaluationLevel));
  }

  if(m_columnsReferencedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsReferencedJsonList(m_columnsReferenced.size());
   for(unsigned columnsReferencedIndex = 0; columnsReferencedIndex < columnsReferencedJsonList.GetLength(); ++columnsReferencedIndex)
   {
     columnsReferencedJsonList[columnsReferencedIndex].AsString(m_columnsReferenced[columnsReferencedIndex]);
   }
   payload.WithArray("ColumnsReferenced", std::move(columnsReferencedJsonList));

  }

  if(m_referencedDatasetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> referencedDatasetsJsonList(m_referencedDatasets.size());
   for(unsigned referencedDatasetsIndex = 0; referencedDatasetsIndex < referencedDatasetsJsonList.GetLength(); ++referencedDatasetsIndex)
   {
     referencedDatasetsJsonList[referencedDatasetsIndex].AsString(m_referencedDatasets[referencedDatasetsIndex]);
   }
   payload.WithArray("ReferencedDatasets", std::move(referencedDatasetsJsonList));

  }

  if(m_statisticPropertiesHasBeenSet)
  {
   JsonValue statisticPropertiesJsonMap;
   for(auto& statisticPropertiesItem : m_statisticProperties)
   {
     statisticPropertiesJsonMap.WithString(statisticPropertiesItem.first, statisticPropertiesItem.second);
   }
   payload.WithObject("StatisticProperties", std::move(statisticPropertiesJsonMap));

  }

  if(m_recordedOnHasBeenSet)
  {
   payload.WithDouble("RecordedOn", m_recordedOn.SecondsWithMSPrecision());
  }

  if(m_inclusionAnnotationHasBeenSet)
  {
   payload.WithObject("InclusionAnnotation", m_inclusionAnnotation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
