/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ConfirmPublicVirtualInterfaceRequest::ConfirmPublicVirtualInterfaceRequest() : 
    m_virtualInterfaceIdHasBeenSet(false)
{
}

Aws::String ConfirmPublicVirtualInterfaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ConfirmPublicVirtualInterfaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.ConfirmPublicVirtualInterface"));
  return headers;

}




