/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/StartDataSourceSyncJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDataSourceSyncJobRequest::StartDataSourceSyncJobRequest() : 
    m_idHasBeenSet(false),
    m_indexIdHasBeenSet(false)
{
}

Aws::String StartDataSourceSyncJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartDataSourceSyncJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.StartDataSourceSyncJob"));
  return headers;

}




