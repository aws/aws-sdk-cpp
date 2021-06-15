/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/Experiment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

Experiment::Experiment() : 
    m_idHasBeenSet(false),
    m_experimentTemplateIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_stopConditionsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Experiment::Experiment(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_experimentTemplateIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_stopConditionsHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Experiment& Experiment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("experimentTemplateId"))
  {
    m_experimentTemplateId = jsonValue.GetString("experimentTemplateId");

    m_experimentTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targets"))
  {
    Aws::Map<Aws::String, JsonView> targetsJsonMap = jsonValue.GetObject("targets").GetAllObjects();
    for(auto& targetsItem : targetsJsonMap)
    {
      m_targets[targetsItem.first] = targetsItem.second.AsObject();
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Aws::Map<Aws::String, JsonView> actionsJsonMap = jsonValue.GetObject("actions").GetAllObjects();
    for(auto& actionsItem : actionsJsonMap)
    {
      m_actions[actionsItem.first] = actionsItem.second.AsObject();
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopConditions"))
  {
    Array<JsonView> stopConditionsJsonList = jsonValue.GetArray("stopConditions");
    for(unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex)
    {
      m_stopConditions.push_back(stopConditionsJsonList[stopConditionsIndex].AsObject());
    }
    m_stopConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
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

  return *this;
}

JsonValue Experiment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_experimentTemplateIdHasBeenSet)
  {
   payload.WithString("experimentTemplateId", m_experimentTemplateId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  if(m_targetsHasBeenSet)
  {
   JsonValue targetsJsonMap;
   for(auto& targetsItem : m_targets)
   {
     targetsJsonMap.WithObject(targetsItem.first, targetsItem.second.Jsonize());
   }
   payload.WithObject("targets", std::move(targetsJsonMap));

  }

  if(m_actionsHasBeenSet)
  {
   JsonValue actionsJsonMap;
   for(auto& actionsItem : m_actions)
   {
     actionsJsonMap.WithObject(actionsItem.first, actionsItem.second.Jsonize());
   }
   payload.WithObject("actions", std::move(actionsJsonMap));

  }

  if(m_stopConditionsHasBeenSet)
  {
   Array<JsonValue> stopConditionsJsonList(m_stopConditions.size());
   for(unsigned stopConditionsIndex = 0; stopConditionsIndex < stopConditionsJsonList.GetLength(); ++stopConditionsIndex)
   {
     stopConditionsJsonList[stopConditionsIndex].AsObject(m_stopConditions[stopConditionsIndex].Jsonize());
   }
   payload.WithArray("stopConditions", std::move(stopConditionsJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
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

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
