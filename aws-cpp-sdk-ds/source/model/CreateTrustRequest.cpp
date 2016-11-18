/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_conditionalForwarderIpAddrsHasBeenSet(false)
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
   Array<JsonValue> conditionalForwarderIpAddrsJsonList(m_conditionalForwarderIpAddrs.size());
   for(unsigned conditionalForwarderIpAddrsIndex = 0; conditionalForwarderIpAddrsIndex < conditionalForwarderIpAddrsJsonList.GetLength(); ++conditionalForwarderIpAddrsIndex)
   {
     conditionalForwarderIpAddrsJsonList[conditionalForwarderIpAddrsIndex].AsString(m_conditionalForwarderIpAddrs[conditionalForwarderIpAddrsIndex]);
   }
   payload.WithArray("ConditionalForwarderIpAddrs", std::move(conditionalForwarderIpAddrsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTrustRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.CreateTrust"));
  return headers;

}



