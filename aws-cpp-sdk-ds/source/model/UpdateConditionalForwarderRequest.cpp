/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/UpdateConditionalForwarderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConditionalForwarderRequest::UpdateConditionalForwarderRequest() : 
    m_directoryIdHasBeenSet(false),
    m_remoteDomainNameHasBeenSet(false),
    m_dnsIpAddrsHasBeenSet(false)
{
}

Aws::String UpdateConditionalForwarderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_remoteDomainNameHasBeenSet)
  {
   payload.WithString("RemoteDomainName", m_remoteDomainName);

  }

  if(m_dnsIpAddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsIpAddrsJsonList(m_dnsIpAddrs.size());
   for(unsigned dnsIpAddrsIndex = 0; dnsIpAddrsIndex < dnsIpAddrsJsonList.GetLength(); ++dnsIpAddrsIndex)
   {
     dnsIpAddrsJsonList[dnsIpAddrsIndex].AsString(m_dnsIpAddrs[dnsIpAddrsIndex]);
   }
   payload.WithArray("DnsIpAddrs", std::move(dnsIpAddrsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConditionalForwarderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.UpdateConditionalForwarder"));
  return headers;

}




