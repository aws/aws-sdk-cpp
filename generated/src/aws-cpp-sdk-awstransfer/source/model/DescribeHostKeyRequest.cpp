/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribeHostKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeHostKeyRequest::DescribeHostKeyRequest() : 
    m_serverIdHasBeenSet(false),
    m_hostKeyIdHasBeenSet(false)
{
}

Aws::String DescribeHostKeyRequest::SerializePayload() const
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

Aws::Http::HeaderValueCollection DescribeHostKeyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.DescribeHostKey"));
  return headers;

}




