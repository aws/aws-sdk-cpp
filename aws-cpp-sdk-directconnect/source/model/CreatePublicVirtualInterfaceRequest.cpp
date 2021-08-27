/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreatePublicVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePublicVirtualInterfaceRequest::CreatePublicVirtualInterfaceRequest() : 
    m_connectionIdHasBeenSet(false),
    m_newPublicVirtualInterfaceHasBeenSet(false)
{
}

Aws::String CreatePublicVirtualInterfaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_newPublicVirtualInterfaceHasBeenSet)
  {
   payload.WithObject("newPublicVirtualInterface", m_newPublicVirtualInterface.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePublicVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreatePublicVirtualInterface"));
  return headers;

}




