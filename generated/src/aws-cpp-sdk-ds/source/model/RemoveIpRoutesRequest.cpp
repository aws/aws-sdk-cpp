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

  if(m_cidrIpv6sHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrIpv6sJsonList(m_cidrIpv6s.size());
   for(unsigned cidrIpv6sIndex = 0; cidrIpv6sIndex < cidrIpv6sJsonList.GetLength(); ++cidrIpv6sIndex)
   {
     cidrIpv6sJsonList[cidrIpv6sIndex].AsString(m_cidrIpv6s[cidrIpv6sIndex]);
   }
   payload.WithArray("CidrIpv6s", std::move(cidrIpv6sJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveIpRoutesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.RemoveIpRoutes"));
  return headers;

}




