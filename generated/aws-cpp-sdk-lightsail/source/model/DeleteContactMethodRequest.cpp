/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DeleteContactMethodRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteContactMethodRequest::DeleteContactMethodRequest() : 
    m_protocol(ContactProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

Aws::String DeleteContactMethodRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ContactProtocolMapper::GetNameForContactProtocol(m_protocol));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteContactMethodRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteContactMethod"));
  return headers;

}




