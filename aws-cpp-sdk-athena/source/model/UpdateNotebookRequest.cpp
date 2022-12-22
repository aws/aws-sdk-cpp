/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UpdateNotebookRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateNotebookRequest::UpdateNotebookRequest() : 
    m_notebookIdHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_type(NotebookType::NOT_SET),
    m_typeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String UpdateNotebookRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookIdHasBeenSet)
  {
   payload.WithString("NotebookId", m_notebookId);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("Payload", m_payload);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", NotebookTypeMapper::GetNameForNotebookType(m_type));
  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateNotebookRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.UpdateNotebook"));
  return headers;

}




