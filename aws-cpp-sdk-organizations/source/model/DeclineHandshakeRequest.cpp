/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/DeclineHandshakeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeclineHandshakeRequest::DeclineHandshakeRequest() : 
    m_handshakeIdHasBeenSet(false)
{
}

Aws::String DeclineHandshakeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_handshakeIdHasBeenSet)
  {
   payload.WithString("HandshakeId", m_handshakeId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeclineHandshakeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.DeclineHandshake"));
  return headers;

}




