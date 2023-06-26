/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/RemoveStorageSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveStorageSystemRequest::RemoveStorageSystemRequest() : 
    m_storageSystemArnHasBeenSet(false)
{
}

Aws::String RemoveStorageSystemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_storageSystemArnHasBeenSet)
  {
   payload.WithString("StorageSystemArn", m_storageSystemArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveStorageSystemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.RemoveStorageSystem"));
  return headers;

}




