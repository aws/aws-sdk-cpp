/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/UpdateAnomalyMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAnomalyMonitorRequest::UpdateAnomalyMonitorRequest() : 
    m_monitorArnHasBeenSet(false),
    m_monitorNameHasBeenSet(false)
{
}

Aws::String UpdateAnomalyMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitorArnHasBeenSet)
  {
   payload.WithString("MonitorArn", m_monitorArn);

  }

  if(m_monitorNameHasBeenSet)
  {
   payload.WithString("MonitorName", m_monitorName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAnomalyMonitorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.UpdateAnomalyMonitor"));
  return headers;

}




