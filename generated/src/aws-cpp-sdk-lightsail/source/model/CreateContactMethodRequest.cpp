/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateContactMethodRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateContactMethodRequest::CreateContactMethodRequest() : 
    m_protocol(ContactProtocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_contactEndpointHasBeenSet(false)
{
}

Aws::String CreateContactMethodRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ContactProtocolMapper::GetNameForContactProtocol(m_protocol));
  }

  if(m_contactEndpointHasBeenSet)
  {
   payload.WithString("contactEndpoint", m_contactEndpoint);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContactMethodRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateContactMethod"));
  return headers;

}




