/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVirtualInterfaceAttributesRequest::UpdateVirtualInterfaceAttributesRequest() : 
    m_virtualInterfaceIdHasBeenSet(false),
    m_mtu(0),
    m_mtuHasBeenSet(false)
{
}

Aws::String UpdateVirtualInterfaceAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_mtuHasBeenSet)
  {
   payload.WithInteger("mtu", m_mtu);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVirtualInterfaceAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateVirtualInterfaceAttributes"));
  return headers;

}




