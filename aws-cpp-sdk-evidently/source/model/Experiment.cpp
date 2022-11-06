/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/Experiment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

Experiment::Experiment() : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_metricGoalsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_onlineAbDefinitionHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_randomizationSaltHasBeenSet(false),
    m_samplingRate(0),
    m_samplingRateHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_status(ExperimentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_treatmentsHasBeenSet(false),
    m_type(ExperimentType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Experiment::Experiment(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_metricGoalsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_onlineAbDefinitionHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_randomizationSaltHasBeenSet(false),
    m_samplingRate(0),
    m_samplingRateHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_status(ExperimentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_treatmentsHasBeenSet(false),
    m_type(ExperimentType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Experiment& Experiment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("execution"))
  {
    m_execution = jsonValue.GetObject("execution");

    m_executionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricGoals"))
  {
    Aws::Utils::Array<JsonView> metricGoalsJsonList = jsonValue.GetArray("metricGoals");
    for(unsigned metricGoalsIndex = 0; metricGoalsIndex < metricGoalsJsonList.GetLength(); ++metricGoalsIndex)
    {
      m_metricGoals.push_back(metricGoalsJsonList[metricGoalsIndex].AsObject());
    }
    m_metricGoalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("onlineAbDefinition"))
  {
    m_onlineAbDefinition = jsonValue.GetObject("onlineAbDefinition");

    m_onlineAbDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetString("project");

    m_projectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("randomizationSalt"))
  {
    m_randomizationSalt = jsonValue.GetString("randomizationSalt");

    m_randomizationSaltHasBeenSet = true;
  }

  if(jsonValue.ValueExists("samplingRate"))
  {
    m_samplingRate = jsonValue.GetInt64("samplingRate");

    m_samplingRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segment"))
  {
    m_segment = jsonValue.GetString("segment");

    m_segmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExperimentStatusMapper::GetExperimentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treatments"))
  {
    Aws::Utils::Array<JsonView> treatmentsJsonList = jsonValue.GetArray("treatments");
    for(unsigned treatmentsIndex = 0; treatmentsIndex < treatmentsJsonList.GetLength(); ++treatmentsIndex)
    {
      m_treatments.push_back(treatmentsJsonList[treatmentsIndex].AsObject());
    }
    m_treatmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ExperimentTypeMapper::GetExperimentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Experiment::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_executionHasBeenSet)
  {
   payload.WithObject("execution", m_execution.Jsonize());

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_metricGoalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricGoalsJsonList(m_metricGoals.size());
   for(unsigned metricGoalsIndex = 0; metricGoalsIndex < metricGoalsJsonList.GetLength(); ++metricGoalsIndex)
   {
     metricGoalsJsonList[metricGoalsIndex].AsObject(m_metricGoals[metricGoalsIndex].Jsonize());
   }
   payload.WithArray("metricGoals", std::move(metricGoalsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_onlineAbDefinitionHasBeenSet)
  {
   payload.WithObject("onlineAbDefinition", m_onlineAbDefinition.Jsonize());

  }

  if(m_projectHasBeenSet)
  {
   payload.WithString("project", m_project);

  }

  if(m_randomizationSaltHasBeenSet)
  {
   payload.WithString("randomizationSalt", m_randomizationSalt);

  }

  if(m_samplingRateHasBeenSet)
  {
   payload.WithInt64("samplingRate", m_samplingRate);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithObject("schedule", m_schedule.Jsonize());

  }

  if(m_segmentHasBeenSet)
  {
   payload.WithString("segment", m_segment);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExperimentStatusMapper::GetNameForExperimentStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_treatmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> treatmentsJsonList(m_treatments.size());
   for(unsigned treatmentsIndex = 0; treatmentsIndex < treatmentsJsonList.GetLength(); ++treatmentsIndex)
   {
     treatmentsJsonList[treatmentsIndex].AsObject(m_treatments[treatmentsIndex].Jsonize());
   }
   payload.WithArray("treatments", std::move(treatmentsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ExperimentTypeMapper::GetNameForExperimentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
