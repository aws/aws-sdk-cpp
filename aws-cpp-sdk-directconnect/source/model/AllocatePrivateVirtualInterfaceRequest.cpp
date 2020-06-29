/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AllocatePrivateVirtualInterfaceRequest::AllocatePrivateVirtualInterfaceRequest() : 
    m_connectionIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_newPrivateVirtualInterfaceAllocationHasBeenSet(false)
{
}

Aws::String AllocatePrivateVirtualInterfaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_ownerAccountHasBeenSet)
  {
   payload.WithString("ownerAccount", m_ownerAccount);

  }

  if(m_newPrivateVirtualInterfaceAllocationHasBeenSet)
  {
   payload.WithObject("newPrivateVirtualInterfaceAllocation", m_newPrivateVirtualInterfaceAllocation.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AllocatePrivateVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AllocatePrivateVirtualInterface"));
  return headers;

}




