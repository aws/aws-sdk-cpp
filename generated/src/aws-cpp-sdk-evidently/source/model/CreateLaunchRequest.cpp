/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/CreateLaunchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLaunchRequest::CreateLaunchRequest() : 
    m_descriptionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_metricMonitorsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_randomizationSaltHasBeenSet(false),
    m_scheduledSplitsConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLaunchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_randomizationSaltHasBeenSet)
  {
   payload.WithString("randomizationSalt", m_randomizationSalt);

  }

  if(m_scheduledSplitsConfigHasBeenSet)
  {
   payload.WithObject("scheduledSplitsConfig", m_scheduledSplitsConfig.Jsonize());

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

  return payload.View().WriteReadable();
}




