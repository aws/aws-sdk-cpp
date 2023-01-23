/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociateHostedConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateHostedConnectionRequest::AssociateHostedConnectionRequest() : 
    m_connectionIdHasBeenSet(false),
    m_parentConnectionIdHasBeenSet(false)
{
}

Aws::String AssociateHostedConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_parentConnectionIdHasBeenSet)
  {
   payload.WithString("parentConnectionId", m_parentConnectionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateHostedConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AssociateHostedConnection"));
  return headers;

}




