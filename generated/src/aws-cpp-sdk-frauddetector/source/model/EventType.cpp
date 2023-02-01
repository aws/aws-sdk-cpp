/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EventType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

EventType::EventType() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_eventIngestion(EventIngestion::NOT_SET),
    m_eventIngestionHasBeenSet(false),
    m_ingestedEventStatisticsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

EventType::EventType(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_eventIngestion(EventIngestion::NOT_SET),
    m_eventIngestionHasBeenSet(false),
    m_ingestedEventStatisticsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

EventType& EventType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventVariables"))
  {
    Aws::Utils::Array<JsonView> eventVariablesJsonList = jsonValue.GetArray("eventVariables");
    for(unsigned eventVariablesIndex = 0; eventVariablesIndex < eventVariablesJsonList.GetLength(); ++eventVariablesIndex)
    {
      m_eventVariables.push_back(eventVariablesJsonList[eventVariablesIndex].AsString());
    }
    m_eventVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsString());
    }
    m_labelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityTypes"))
  {
    Aws::Utils::Array<JsonView> entityTypesJsonList = jsonValue.GetArray("entityTypes");
    for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
    {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsString());
    }
    m_entityTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventIngestion"))
  {
    m_eventIngestion = EventIngestionMapper::GetEventIngestionForName(jsonValue.GetString("eventIngestion"));

    m_eventIngestionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingestedEventStatistics"))
  {
    m_ingestedEventStatistics = jsonValue.GetObject("ingestedEventStatistics");

    m_ingestedEventStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetString("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue EventType::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventVariablesJsonList(m_eventVariables.size());
   for(unsigned eventVariablesIndex = 0; eventVariablesIndex < eventVariablesJsonList.GetLength(); ++eventVariablesIndex)
   {
     eventVariablesJsonList[eventVariablesIndex].AsString(m_eventVariables[eventVariablesIndex]);
   }
   payload.WithArray("eventVariables", std::move(eventVariablesJsonList));

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("labels", std::move(labelsJsonList));

  }

  if(m_entityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsString(m_entityTypes[entityTypesIndex]);
   }
   payload.WithArray("entityTypes", std::move(entityTypesJsonList));

  }

  if(m_eventIngestionHasBeenSet)
  {
   payload.WithString("eventIngestion", EventIngestionMapper::GetNameForEventIngestion(m_eventIngestion));
  }

  if(m_ingestedEventStatisticsHasBeenSet)
  {
   payload.WithObject("ingestedEventStatistics", m_ingestedEventStatistics.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("lastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("createdTime", m_createdTime);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
