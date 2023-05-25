/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ImportSshPublicKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportSshPublicKeyRequest::ImportSshPublicKeyRequest() : 
    m_serverIdHasBeenSet(false),
    m_sshPublicKeyBodyHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

Aws::String ImportSshPublicKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_sshPublicKeyBodyHasBeenSet)
  {
   payload.WithString("SshPublicKeyBody", m_sshPublicKeyBody);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportSshPublicKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.ImportSshPublicKey"));
  return headers;

}




