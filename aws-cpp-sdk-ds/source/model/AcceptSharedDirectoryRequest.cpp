/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/AcceptSharedDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AcceptSharedDirectoryRequest::AcceptSharedDirectoryRequest() : 
    m_sharedDirectoryIdHasBeenSet(false)
{
}

Aws::String AcceptSharedDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sharedDirectoryIdHasBeenSet)
  {
   payload.WithString("SharedDirectoryId", m_sharedDirectoryId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptSharedDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.AcceptSharedDirectory"));
  return headers;

}




