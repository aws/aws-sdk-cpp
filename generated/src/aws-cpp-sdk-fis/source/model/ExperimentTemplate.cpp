﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplate.h>
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

ExperimentTemplate::ExperimentTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

ExperimentTemplate& ExperimentTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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
    Aws::Utils::Array<JsonView> stopConditionsJsonList = jsonValue.GetArray("stopConditions");
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
  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("logConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("logConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("experimentOptions"))
  {
    m_experimentOptions = jsonValue.GetObject("experimentOptions");
    m_experimentOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetAccountConfigurationsCount"))
  {
    m_targetAccountConfigurationsCount = jsonValue.GetInt64("targetAccountConfigurationsCount");
    m_targetAccountConfigurationsCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("experimentReportConfiguration"))
  {
    m_experimentReportConfiguration = jsonValue.GetObject("experimentReportConfiguration");
    m_experimentReportConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExperimentTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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
   Aws::Utils::Array<JsonValue> stopConditionsJsonList(m_stopConditions.size());
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

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

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

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("logConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_experimentOptionsHasBeenSet)
  {
   payload.WithObject("experimentOptions", m_experimentOptions.Jsonize());

  }

  if(m_targetAccountConfigurationsCountHasBeenSet)
  {
   payload.WithInt64("targetAccountConfigurationsCount", m_targetAccountConfigurationsCount);

  }

  if(m_experimentReportConfigurationHasBeenSet)
  {
   payload.WithObject("experimentReportConfiguration", m_experimentReportConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
