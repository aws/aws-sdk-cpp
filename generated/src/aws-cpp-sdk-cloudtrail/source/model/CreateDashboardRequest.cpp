/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/CreateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_refreshScheduleHasBeenSet)
  {
   payload.WithObject("RefreshSchedule", m_refreshSchedule.Jsonize());

  }

  if(m_tagsListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsListJsonList(m_tagsList.size());
   for(unsigned tagsListIndex = 0; tagsListIndex < tagsListJsonList.GetLength(); ++tagsListIndex)
   {
     tagsListJsonList[tagsListIndex].AsObject(m_tagsList[tagsListIndex].Jsonize());
   }
   payload.WithArray("TagsList", std::move(tagsListJsonList));

  }

  if(m_terminationProtectionEnabledHasBeenSet)
  {
   payload.WithBool("TerminationProtectionEnabled", m_terminationProtectionEnabled);

  }

  if(m_widgetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> widgetsJsonList(m_widgets.size());
   for(unsigned widgetsIndex = 0; widgetsIndex < widgetsJsonList.GetLength(); ++widgetsIndex)
   {
     widgetsJsonList[widgetsIndex].AsObject(m_widgets[widgetsIndex].Jsonize());
   }
   payload.WithArray("Widgets", std::move(widgetsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDashboardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.CreateDashboard"));
  return headers;

}




