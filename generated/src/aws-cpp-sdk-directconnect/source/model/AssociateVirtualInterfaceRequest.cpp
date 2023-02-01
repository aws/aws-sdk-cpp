/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AssociateVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateVirtualInterfaceRequest::AssociateVirtualInterfaceRequest() : 
    m_virtualInterfaceIdHasBeenSet(false),
    m_connectionIdHasBeenSet(false)
{
}

Aws::String AssociateVirtualInterfaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AssociateVirtualInterface"));
  return headers;

}




