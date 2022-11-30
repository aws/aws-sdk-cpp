/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CreatePresignedNotebookUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePresignedNotebookUrlRequest::CreatePresignedNotebookUrlRequest() : 
    m_sessionIdHasBeenSet(false)
{
}

Aws::String CreatePresignedNotebookUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePresignedNotebookUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.CreatePresignedNotebookUrl"));
  return headers;

}




