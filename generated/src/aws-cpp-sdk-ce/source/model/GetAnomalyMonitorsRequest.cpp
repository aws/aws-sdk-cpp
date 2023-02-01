/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetAnomalyMonitorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAnomalyMonitorsRequest::GetAnomalyMonitorsRequest() : 
    m_monitorArnListHasBeenSet(false),
    m_nextPageTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetAnomalyMonitorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitorArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> monitorArnListJsonList(m_monitorArnList.size());
   for(unsigned monitorArnListIndex = 0; monitorArnListIndex < monitorArnListJsonList.GetLength(); ++monitorArnListIndex)
   {
     monitorArnListJsonList[monitorArnListIndex].AsString(m_monitorArnList[monitorArnListIndex]);
   }
   payload.WithArray("MonitorArnList", std::move(monitorArnListJsonList));

  }

  if(m_nextPageTokenHasBeenSet)
  {
   payload.WithString("NextPageToken", m_nextPageToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAnomalyMonitorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSInsightsIndexService.GetAnomalyMonitors"));
  return headers;

}




