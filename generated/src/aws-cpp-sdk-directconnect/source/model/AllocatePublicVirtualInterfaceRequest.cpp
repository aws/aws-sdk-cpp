/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/AllocatePublicVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AllocatePublicVirtualInterfaceRequest::AllocatePublicVirtualInterfaceRequest() : 
    m_connectionIdHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_newPublicVirtualInterfaceAllocationHasBeenSet(false)
{
}

Aws::String AllocatePublicVirtualInterfaceRequest::SerializePayload() const
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

  if(m_newPublicVirtualInterfaceAllocationHasBeenSet)
  {
   payload.WithObject("newPublicVirtualInterfaceAllocation", m_newPublicVirtualInterfaceAllocation.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AllocatePublicVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.AllocatePublicVirtualInterface"));
  return headers;

}




