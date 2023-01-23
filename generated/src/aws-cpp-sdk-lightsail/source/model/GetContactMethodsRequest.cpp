/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetContactMethodsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetContactMethodsRequest::GetContactMethodsRequest() : 
    m_protocolsHasBeenSet(false)
{
}

Aws::String GetContactMethodsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ContactProtocolMapper::GetNameForContactProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("protocols", std::move(protocolsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetContactMethodsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetContactMethods"));
  return headers;

}




