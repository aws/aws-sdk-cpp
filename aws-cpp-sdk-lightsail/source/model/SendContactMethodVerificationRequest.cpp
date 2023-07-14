/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SendContactMethodVerificationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendContactMethodVerificationRequest::SendContactMethodVerificationRequest() : 
    m_protocol(ContactMethodVerificationProtocol::NOT_SET),
    m_protocolHasBeenSet(false)
{
}

Aws::String SendContactMethodVerificationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ContactMethodVerificationProtocolMapper::GetNameForContactMethodVerificationProtocol(m_protocol));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendContactMethodVerificationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.SendContactMethodVerification"));
  return headers;

}




