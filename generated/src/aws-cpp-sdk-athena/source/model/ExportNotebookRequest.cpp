/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ExportNotebookRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportNotebookRequest::ExportNotebookRequest() : 
    m_notebookIdHasBeenSet(false)
{
}

Aws::String ExportNotebookRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookIdHasBeenSet)
  {
   payload.WithString("NotebookId", m_notebookId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportNotebookRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.ExportNotebook"));
  return headers;

}




