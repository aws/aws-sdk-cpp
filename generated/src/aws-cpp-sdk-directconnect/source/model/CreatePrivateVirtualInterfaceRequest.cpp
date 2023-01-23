/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreatePrivateVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePrivateVirtualInterfaceRequest::CreatePrivateVirtualInterfaceRequest() : 
    m_connectionIdHasBeenSet(false),
    m_newPrivateVirtualInterfaceHasBeenSet(false)
{
}

Aws::String CreatePrivateVirtualInterfaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_newPrivateVirtualInterfaceHasBeenSet)
  {
   payload.WithObject("newPrivateVirtualInterface", m_newPrivateVirtualInterface.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePrivateVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreatePrivateVirtualInterface"));
  return headers;

}




