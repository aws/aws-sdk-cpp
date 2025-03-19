/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/StartDashboardRefreshRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDashboardRefreshRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dashboardIdHasBeenSet)
  {
   payload.WithString("DashboardId", m_dashboardId);

  }

  if(m_queryParameterValuesHasBeenSet)
  {
   JsonValue queryParameterValuesJsonMap;
   for(auto& queryParameterValuesItem : m_queryParameterValues)
   {
     queryParameterValuesJsonMap.WithString(queryParameterValuesItem.first, queryParameterValuesItem.second);
   }
   payload.WithObject("QueryParameterValues", std::move(queryParameterValuesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDashboardRefreshRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.StartDashboardRefresh"));
  return headers;

}




