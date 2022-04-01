/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/UpdateApplicationMaintenanceConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApplicationMaintenanceConfigurationRequest::UpdateApplicationMaintenanceConfigurationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_applicationMaintenanceConfigurationUpdateHasBeenSet(false)
{
}

Aws::String UpdateApplicationMaintenanceConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_applicationMaintenanceConfigurationUpdateHasBeenSet)
  {
   payload.WithObject("ApplicationMaintenanceConfigurationUpdate", m_applicationMaintenanceConfigurationUpdate.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApplicationMaintenanceConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20180523.UpdateApplicationMaintenanceConfiguration"));
  return headers;

}




