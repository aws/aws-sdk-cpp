/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileCacheRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFileCacheRequest::UpdateFileCacheRequest() : 
    m_fileCacheIdHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_lustreConfigurationHasBeenSet(false)
{
}

Aws::String UpdateFileCacheRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fileCacheIdHasBeenSet)
  {
   payload.WithString("FileCacheId", m_fileCacheId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_lustreConfigurationHasBeenSet)
  {
   payload.WithObject("LustreConfiguration", m_lustreConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFileCacheRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSimbaAPIService_v20180301.UpdateFileCache"));
  return headers;

}




