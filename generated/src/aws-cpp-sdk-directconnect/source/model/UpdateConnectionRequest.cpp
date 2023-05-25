/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/UpdateConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectionRequest::UpdateConnectionRequest() : 
    m_connectionIdHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_encryptionModeHasBeenSet(false)
{
}

Aws::String UpdateConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectionIdHasBeenSet)
  {
   payload.WithString("connectionId", m_connectionId);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("connectionName", m_connectionName);

  }

  if(m_encryptionModeHasBeenSet)
  {
   payload.WithString("encryptionMode", m_encryptionMode);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OvertureService.UpdateConnection"));
  return headers;

}




