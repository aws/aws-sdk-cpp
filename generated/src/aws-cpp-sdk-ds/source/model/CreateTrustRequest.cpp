/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CreateTrustRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrustRequest::CreateTrustRequest() : 
    m_directoryIdHasBeenSet(false),
    m_remoteDomainNameHasBeenSet(false),
    m_trustPasswordHasBeenSet(false),
    m_trustDirection(TrustDirection::NOT_SET),
    m_trustDirectionHasBeenSet(false),
    m_trustType(TrustType::NOT_SET),
    m_trustTypeHasBeenSet(false),
    m_conditionalForwarderIpAddrsHasBeenSet(false),
    m_selectiveAuth(SelectiveAuth::NOT_SET),
    m_selectiveAuthHasBeenSet(false)
{
}

Aws::String CreateTrustRequest::SerializePayload() const
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

  if(m_trustPasswordHasBeenSet)
  {
   payload.WithString("TrustPassword", m_trustPassword);

  }

  if(m_trustDirectionHasBeenSet)
  {
   payload.WithString("TrustDirection", TrustDirectionMapper::GetNameForTrustDirection(m_trustDirection));
  }

  if(m_trustTypeHasBeenSet)
  {
   payload.WithString("TrustType", TrustTypeMapper::GetNameForTrustType(m_trustType));
  }

  if(m_conditionalForwarderIpAddrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionalForwarderIpAddrsJsonList(m_conditionalForwarderIpAddrs.size());
   for(unsigned conditionalForwarderIpAddrsIndex = 0; conditionalForwarderIpAddrsIndex < conditionalForwarderIpAddrsJsonList.GetLength(); ++conditionalForwarderIpAddrsIndex)
   {
     conditionalForwarderIpAddrsJsonList[conditionalForwarderIpAddrsIndex].AsString(m_conditionalForwarderIpAddrs[conditionalForwarderIpAddrsIndex]);
   }
   payload.WithArray("ConditionalForwarderIpAddrs", std::move(conditionalForwarderIpAddrsJsonList));

  }

  if(m_selectiveAuthHasBeenSet)
  {
   payload.WithString("SelectiveAuth", SelectiveAuthMapper::GetNameForSelectiveAuth(m_selectiveAuth));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrustRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.CreateTrust"));
  return headers;

}




