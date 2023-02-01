/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateTransitVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTransitVirtualInterfaceRequest::CreateTransitVirtualInterfaceRequest() : 
    m_connectionIdHasBeenSet(false),
    m_newTransitVirtualInterfaceHasBeenSet(false)
{
}

Aws::String CreateTransitVirtualInterfaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_newTransitVirtualInterfaceHasBeenSet)
  {
   payload.WithObject("newTransitVirtualInterface", m_newTransitVirtualInterface.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTransitVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.CreateTransitVirtualInterface"));
  return headers;

}




