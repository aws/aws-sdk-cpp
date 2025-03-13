/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ImportNotebookRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ImportNotebookRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("Payload", m_payload);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", NotebookTypeMapper::GetNameForNotebookType(m_type));
  }

  if(m_notebookS3LocationUriHasBeenSet)
  {
   payload.WithString("NotebookS3LocationUri", m_notebookS3LocationUri);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportNotebookRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.ImportNotebook"));
  return headers;

}




