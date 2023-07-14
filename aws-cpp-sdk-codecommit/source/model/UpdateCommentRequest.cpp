/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateCommentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCommentRequest::UpdateCommentRequest() : 
    m_commentIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Aws::String UpdateCommentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentIdHasBeenSet)
  {
   payload.WithString("commentId", m_commentId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCommentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateComment"));
  return headers;

}




