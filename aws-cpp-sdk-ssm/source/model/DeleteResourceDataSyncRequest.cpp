/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DeleteResourceDataSyncRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteResourceDataSyncRequest::DeleteResourceDataSyncRequest() : 
    m_syncNameHasBeenSet(false),
    m_syncTypeHasBeenSet(false)
{
}

Aws::String DeleteResourceDataSyncRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_syncNameHasBeenSet)
  {
   payload.WithString("SyncName", m_syncName);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", m_syncType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteResourceDataSyncRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DeleteResourceDataSync"));
  return headers;

}




