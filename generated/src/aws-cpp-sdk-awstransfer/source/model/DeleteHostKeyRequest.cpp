/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteHostKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHostKeyRequest::DeleteHostKeyRequest() : 
    m_serverIdHasBeenSet(false),
    m_hostKeyIdHasBeenSet(false)
{
}

Aws::String DeleteHostKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_hostKeyIdHasBeenSet)
  {
   payload.WithString("HostKeyId", m_hostKeyId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHostKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DeleteHostKey"));
  return headers;

}




