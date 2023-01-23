/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PostCommentReplyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PostCommentReplyRequest::PostCommentReplyRequest() : 
    m_inReplyToHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_contentHasBeenSet(false)
{
}

Aws::String PostCommentReplyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inReplyToHasBeenSet)
  {
   payload.WithString("inReplyTo", m_inReplyTo);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PostCommentReplyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.PostCommentReply"));
  return headers;

}




