/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/User.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workdocs/model/CommentStatusType.h>
#include <aws/workdocs/model/CommentVisibilityType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes a comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/Comment">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API Comment
  {
  public:
    Comment();
    Comment(Aws::Utils::Json::JsonView jsonValue);
    Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the comment.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The ID of the comment.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The ID of the comment.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The ID of the comment.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The ID of the comment.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The ID of the comment.</p>
     */
    inline Comment& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The ID of the comment.</p>
     */
    inline Comment& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment.</p>
     */
    inline Comment& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>The ID of the parent comment.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline Comment& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline Comment& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the parent comment.</p>
     */
    inline Comment& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline const Aws::String& GetThreadId() const{ return m_threadId; }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline bool ThreadIdHasBeenSet() const { return m_threadIdHasBeenSet; }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline void SetThreadId(const Aws::String& value) { m_threadIdHasBeenSet = true; m_threadId = value; }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline void SetThreadId(Aws::String&& value) { m_threadIdHasBeenSet = true; m_threadId = std::move(value); }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline void SetThreadId(const char* value) { m_threadIdHasBeenSet = true; m_threadId.assign(value); }

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline Comment& WithThreadId(const Aws::String& value) { SetThreadId(value); return *this;}

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline Comment& WithThreadId(Aws::String&& value) { SetThreadId(std::move(value)); return *this;}

    /**
     * <p>The ID of the root comment in the thread.</p>
     */
    inline Comment& WithThreadId(const char* value) { SetThreadId(value); return *this;}


    /**
     * <p>The text of the comment.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of the comment.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of the comment.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of the comment.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of the comment.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of the comment.</p>
     */
    inline Comment& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of the comment.</p>
     */
    inline Comment& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of the comment.</p>
     */
    inline Comment& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline const User& GetContributor() const{ return m_contributor; }

    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }

    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline void SetContributor(const User& value) { m_contributorHasBeenSet = true; m_contributor = value; }

    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline void SetContributor(User&& value) { m_contributorHasBeenSet = true; m_contributor = std::move(value); }

    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline Comment& WithContributor(const User& value) { SetContributor(value); return *this;}

    /**
     * <p>The details of the user who made the comment.</p>
     */
    inline Comment& WithContributor(User&& value) { SetContributor(std::move(value)); return *this;}


    /**
     * <p>The time that the comment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time that the comment was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time that the comment was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time that the comment was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time that the comment was created.</p>
     */
    inline Comment& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time that the comment was created.</p>
     */
    inline Comment& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the comment.</p>
     */
    inline const CommentStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the comment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the comment.</p>
     */
    inline void SetStatus(const CommentStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the comment.</p>
     */
    inline void SetStatus(CommentStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the comment.</p>
     */
    inline Comment& WithStatus(const CommentStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the comment.</p>
     */
    inline Comment& WithStatus(CommentStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline const CommentVisibilityType& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline void SetVisibility(const CommentVisibilityType& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline void SetVisibility(CommentVisibilityType&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline Comment& WithVisibility(const CommentVisibilityType& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the comment. Options are either PRIVATE, where the comment
     * is visible only to the comment author and document owner and co-owners, or
     * PUBLIC, where the comment is visible to document owners, co-owners, and
     * contributors.</p>
     */
    inline Comment& WithVisibility(CommentVisibilityType&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline const Aws::String& GetRecipientId() const{ return m_recipientId; }

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline void SetRecipientId(const Aws::String& value) { m_recipientIdHasBeenSet = true; m_recipientId = value; }

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline void SetRecipientId(Aws::String&& value) { m_recipientIdHasBeenSet = true; m_recipientId = std::move(value); }

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline void SetRecipientId(const char* value) { m_recipientIdHasBeenSet = true; m_recipientId.assign(value); }

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline Comment& WithRecipientId(const Aws::String& value) { SetRecipientId(value); return *this;}

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline Comment& WithRecipientId(Aws::String&& value) { SetRecipientId(std::move(value)); return *this;}

    /**
     * <p>If the comment is a reply to another user's comment, this field contains the
     * user ID of the user being replied to.</p>
     */
    inline Comment& WithRecipientId(const char* value) { SetRecipientId(value); return *this;}

  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;

    Aws::String m_threadId;
    bool m_threadIdHasBeenSet;

    Aws::String m_text;
    bool m_textHasBeenSet;

    User m_contributor;
    bool m_contributorHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    CommentStatusType m_status;
    bool m_statusHasBeenSet;

    CommentVisibilityType m_visibility;
    bool m_visibilityHasBeenSet;

    Aws::String m_recipientId;
    bool m_recipientIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
