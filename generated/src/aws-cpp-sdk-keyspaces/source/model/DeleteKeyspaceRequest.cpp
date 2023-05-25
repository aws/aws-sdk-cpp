/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/DeleteKeyspaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteKeyspaceRequest::DeleteKeyspaceRequest() : 
    m_keyspaceNameHasBeenSet(false)
{
}

Aws::String DeleteKeyspaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteKeyspaceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesService.DeleteKeyspace"));
  return headers;

}




