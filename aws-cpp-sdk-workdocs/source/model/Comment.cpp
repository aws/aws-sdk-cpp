/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/Comment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

Comment::Comment() : 
    m_commentIdHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_contributorHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_status(CommentStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_visibility(CommentVisibilityType::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_recipientIdHasBeenSet(false)
{
}

Comment::Comment(JsonView jsonValue) : 
    m_commentIdHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_contributorHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_status(CommentStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_visibility(CommentVisibilityType::NOT_SET),
    m_visibilityHasBeenSet(false),
    m_recipientIdHasBeenSet(false)
{
  *this = jsonValue;
}

Comment& Comment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommentId"))
  {
    m_commentId = jsonValue.GetString("CommentId");

    m_commentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentId"))
  {
    m_parentId = jsonValue.GetString("ParentId");

    m_parentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadId"))
  {
    m_threadId = jsonValue.GetString("ThreadId");

    m_threadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Contributor"))
  {
    m_contributor = jsonValue.GetObject("Contributor");

    m_contributorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommentStatusTypeMapper::GetCommentStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = CommentVisibilityTypeMapper::GetCommentVisibilityTypeForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecipientId"))
  {
    m_recipientId = jsonValue.GetString("RecipientId");

    m_recipientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Comment::Jsonize() const
{
  JsonValue payload;

  if(m_commentIdHasBeenSet)
  {
   payload.WithString("CommentId", m_commentId);

  }

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

  if(m_contributorHasBeenSet)
  {
   payload.WithObject("Contributor", m_contributor.Jsonize());

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CommentStatusTypeMapper::GetNameForCommentStatusType(m_status));
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", CommentVisibilityTypeMapper::GetNameForCommentVisibilityType(m_visibility));
  }

  if(m_recipientIdHasBeenSet)
  {
   payload.WithString("RecipientId", m_recipientId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
