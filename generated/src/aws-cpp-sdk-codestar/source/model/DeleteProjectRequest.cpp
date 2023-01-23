/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/DeleteProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStar::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteProjectRequest::DeleteProjectRequest() : 
    m_idHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_deleteStack(false),
    m_deleteStackHasBeenSet(false)
{
}

Aws::String DeleteProjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_deleteStackHasBeenSet)
  {
   payload.WithBool("deleteStack", m_deleteStack);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteProjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeStar_20170419.DeleteProject"));
  return headers;

}




