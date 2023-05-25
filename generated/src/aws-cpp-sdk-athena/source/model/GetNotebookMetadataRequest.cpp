/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetNotebookMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNotebookMetadataRequest::GetNotebookMetadataRequest() : 
    m_notebookIdHasBeenSet(false)
{
}

Aws::String GetNotebookMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookIdHasBeenSet)
  {
   payload.WithString("NotebookId", m_notebookId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetNotebookMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetNotebookMetadata"));
  return headers;

}




