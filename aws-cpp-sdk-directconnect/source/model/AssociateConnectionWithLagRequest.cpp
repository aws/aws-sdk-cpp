/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociateConnectionWithLagRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest() : 
    m_connectionIdHasBeenSet(false),
    m_lagIdHasBeenSet(false)
{
}

Aws::String AssociateConnectionWithLagRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_lagIdHasBeenSet)
  {
   payload.WithString("lagId", m_lagId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateConnectionWithLagRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AssociateConnectionWithLag"));
  return headers;

}




