/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RemoveIpRoutesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveIpRoutesRequest::RemoveIpRoutesRequest() : 
    m_directoryIdHasBeenSet(false),
    m_cidrIpsHasBeenSet(false)
{
}

Aws::String RemoveIpRoutesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_cidrIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrIpsJsonList(m_cidrIps.size());
   for(unsigned cidrIpsIndex = 0; cidrIpsIndex < cidrIpsJsonList.GetLength(); ++cidrIpsIndex)
   {
     cidrIpsJsonList[cidrIpsIndex].AsString(m_cidrIps[cidrIpsIndex]);
   }
   payload.WithArray("CidrIps", std::move(cidrIpsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveIpRoutesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.RemoveIpRoutes"));
  return headers;

}




