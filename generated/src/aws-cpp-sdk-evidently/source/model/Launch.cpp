/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/Launch.h>
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

Launch::Launch() : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_metricMonitorsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_randomizationSaltHasBeenSet(false),
    m_scheduledSplitsDefinitionHasBeenSet(false),
    m_status(LaunchStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(LaunchType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Launch::Launch(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_executionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_metricMonitorsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_randomizationSaltHasBeenSet(false),
    m_scheduledSplitsDefinitionHasBeenSet(false),
    m_status(LaunchStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(LaunchType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Launch& Launch::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricMonitors"))
  {
    Aws::Utils::Array<JsonView> metricMonitorsJsonList = jsonValue.GetArray("metricMonitors");
    for(unsigned metricMonitorsIndex = 0; metricMonitorsIndex < metricMonitorsJsonList.GetLength(); ++metricMonitorsIndex)
    {
      m_metricMonitors.push_back(metricMonitorsJsonList[metricMonitorsIndex].AsObject());
    }
    m_metricMonitorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
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

  if(jsonValue.ValueExists("scheduledSplitsDefinition"))
  {
    m_scheduledSplitsDefinition = jsonValue.GetObject("scheduledSplitsDefinition");

    m_scheduledSplitsDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = LaunchStatusMapper::GetLaunchStatusForName(jsonValue.GetString("status"));

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

  if(jsonValue.ValueExists("type"))
  {
    m_type = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Launch::Jsonize() const
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

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
   }
   payload.WithArray("groups", std::move(groupsJsonList));

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_metricMonitorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricMonitorsJsonList(m_metricMonitors.size());
   for(unsigned metricMonitorsIndex = 0; metricMonitorsIndex < metricMonitorsJsonList.GetLength(); ++metricMonitorsIndex)
   {
     metricMonitorsJsonList[metricMonitorsIndex].AsObject(m_metricMonitors[metricMonitorsIndex].Jsonize());
   }
   payload.WithArray("metricMonitors", std::move(metricMonitorsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectHasBeenSet)
  {
   payload.WithString("project", m_project);

  }

  if(m_randomizationSaltHasBeenSet)
  {
   payload.WithString("randomizationSalt", m_randomizationSalt);

  }

  if(m_scheduledSplitsDefinitionHasBeenSet)
  {
   payload.WithObject("scheduledSplitsDefinition", m_scheduledSplitsDefinition.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LaunchStatusMapper::GetNameForLaunchStatus(m_status));
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LaunchTypeMapper::GetNameForLaunchType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
