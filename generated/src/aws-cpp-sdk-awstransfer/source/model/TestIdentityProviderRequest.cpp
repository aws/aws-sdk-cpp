/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/TestIdentityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestIdentityProviderRequest::TestIdentityProviderRequest() : 
    m_serverIdHasBeenSet(false),
    m_serverProtocol(Protocol::NOT_SET),
    m_serverProtocolHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userPasswordHasBeenSet(false)
{
}

Aws::String TestIdentityProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_serverProtocolHasBeenSet)
  {
   payload.WithString("ServerProtocol", ProtocolMapper::GetNameForProtocol(m_serverProtocol));
  }

  if(m_sourceIpHasBeenSet)
  {
   payload.WithString("SourceIp", m_sourceIp);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_userPasswordHasBeenSet)
  {
   payload.WithString("UserPassword", m_userPassword);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection TestIdentityProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.TestIdentityProvider"));
  return headers;

}




