/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetCommentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCommentRequest::GetCommentRequest() : 
    m_commentIdHasBeenSet(false)
{
}

Aws::String GetCommentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commentIdHasBeenSet)
  {
   payload.WithString("commentId", m_commentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCommentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetComment"));
  return headers;

}




