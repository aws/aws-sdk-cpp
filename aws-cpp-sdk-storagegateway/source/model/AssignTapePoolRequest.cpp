/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/AssignTapePoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssignTapePoolRequest::AssignTapePoolRequest() : 
    m_tapeARNHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_bypassGovernanceRetention(false),
    m_bypassGovernanceRetentionHasBeenSet(false)
{
}

Aws::String AssignTapePoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tapeARNHasBeenSet)
  {
   payload.WithString("TapeARN", m_tapeARN);

  }

  if(m_poolIdHasBeenSet)
  {
   payload.WithString("PoolId", m_poolId);

  }

  if(m_bypassGovernanceRetentionHasBeenSet)
  {
   payload.WithBool("BypassGovernanceRetention", m_bypassGovernanceRetention);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssignTapePoolRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.AssignTapePool"));
  return headers;

}




