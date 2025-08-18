/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/UpdateDashboardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDashboards::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDashboardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_widgetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> widgetsJsonList(m_widgets.size());
   for(unsigned widgetsIndex = 0; widgetsIndex < widgetsJsonList.GetLength(); ++widgetsIndex)
   {
     widgetsJsonList[widgetsIndex].AsObject(m_widgets[widgetsIndex].Jsonize());
   }
   payload.WithArray("widgets", std::move(widgetsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDashboardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMDashboardsService.UpdateDashboard"));
  return headers;

}




