/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DeleteSshPublicKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSshPublicKeyRequest::DeleteSshPublicKeyRequest() : 
    m_serverIdHasBeenSet(false),
    m_sshPublicKeyIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

Aws::String DeleteSshPublicKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_sshPublicKeyIdHasBeenSet)
  {
   payload.WithString("SshPublicKeyId", m_sshPublicKeyId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSshPublicKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DeleteSshPublicKey"));
  return headers;

}




