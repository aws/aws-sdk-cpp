/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/UpdateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

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

  if(m_refreshScheduleHasBeenSet)
  {
   payload.WithObject("RefreshSchedule", m_refreshSchedule.Jsonize());

  }

  if(m_terminationProtectionEnabledHasBeenSet)
  {
   payload.WithBool("TerminationProtectionEnabled", m_terminationProtectionEnabled);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDashboardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.UpdateDashboard"));
  return headers;

}




