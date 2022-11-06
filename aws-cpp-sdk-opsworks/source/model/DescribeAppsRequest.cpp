/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeAppsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAppsRequest::DescribeAppsRequest() : 
    m_stackIdHasBeenSet(false),
    m_appIdsHasBeenSet(false)
{
}

Aws::String DescribeAppsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_appIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appIdsJsonList(m_appIds.size());
   for(unsigned appIdsIndex = 0; appIdsIndex < appIdsJsonList.GetLength(); ++appIdsIndex)
   {
     appIdsJsonList[appIdsIndex].AsString(m_appIds[appIdsIndex]);
   }
   payload.WithArray("AppIds", std::move(appIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAppsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeApps"));
  return headers;

}




