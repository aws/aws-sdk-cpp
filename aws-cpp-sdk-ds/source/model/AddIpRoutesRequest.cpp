﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> ipRoutesJsonList(m_ipRoutes.size());
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




