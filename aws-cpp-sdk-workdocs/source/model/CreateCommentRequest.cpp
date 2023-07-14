/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CreateCommentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCommentRequest::CreateCommentRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_documentIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_visibility(CommentVisibilityType::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_notifyCollaborators(false),
    m_notifyCollaboratorsHasBeenSet(false)
{
}

Aws::String CreateCommentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parentIdHasBeenSet)
  {
   payload.WithString("ParentId", m_parentId);

  }

  if(m_threadIdHasBeenSet)
  {
   payload.WithString("ThreadId", m_threadId);

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", CommentVisibilityTypeMapper::GetNameForCommentVisibilityType(m_visibility));
  }

  if(m_notifyCollaboratorsHasBeenSet)
  {
   payload.WithBool("NotifyCollaborators", m_notifyCollaborators);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCommentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




