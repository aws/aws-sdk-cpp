/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CreateAnomalyMonitorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAnomalyMonitorRequest::CreateAnomalyMonitorRequest() : 
    m_anomalyMonitorHasBeenSet(false)
{
}

Aws::String CreateAnomalyMonitorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyMonitorHasBeenSet)
  {
   payload.WithObject("AnomalyMonitor", m_anomalyMonitor.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAnomalyMonitorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.CreateAnomalyMonitor"));
  return headers;

}




