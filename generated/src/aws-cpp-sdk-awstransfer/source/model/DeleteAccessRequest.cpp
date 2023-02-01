/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccessRequest::DeleteAccessRequest() : 
    m_serverIdHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

Aws::String DeleteAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAccessRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DeleteAccess"));
  return headers;

}




