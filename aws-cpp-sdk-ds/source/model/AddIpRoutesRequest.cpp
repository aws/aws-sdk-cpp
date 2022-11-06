/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/AddIpRoutesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddIpRoutesRequest::AddIpRoutesRequest() : 
    m_directoryIdHasBeenSet(false),
    m_ipRoutesHasBeenSet(false),
    m_updateSecurityGroupForDirectoryControllers(false),
    m_updateSecurityGroupForDirectoryControllersHasBeenSet(false)
{
}

Aws::String AddIpRoutesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_ipRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipRoutesJsonList(m_ipRoutes.size());
   for(unsigned ipRoutesIndex = 0; ipRoutesIndex < ipRoutesJsonList.GetLength(); ++ipRoutesIndex)
   {
     ipRoutesJsonList[ipRoutesIndex].AsObject(m_ipRoutes[ipRoutesIndex].Jsonize());
   }
   payload.WithArray("IpRoutes", std::move(ipRoutesJsonList));

  }

  if(m_updateSecurityGroupForDirectoryControllersHasBeenSet)
  {
   payload.WithBool("UpdateSecurityGroupForDirectoryControllers", m_updateSecurityGroupForDirectoryControllers);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddIpRoutesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.AddIpRoutes"));
  return headers;

}




