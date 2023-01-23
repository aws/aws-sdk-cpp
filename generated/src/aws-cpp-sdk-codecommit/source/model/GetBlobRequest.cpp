/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetBlobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBlobRequest::GetBlobRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_blobIdHasBeenSet(false)
{
}

Aws::String GetBlobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_blobIdHasBeenSet)
  {
   payload.WithString("blobId", m_blobId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBlobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetBlob"));
  return headers;

}




