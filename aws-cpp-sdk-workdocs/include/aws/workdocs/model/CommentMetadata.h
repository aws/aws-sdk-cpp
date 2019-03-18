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
   * <p>Describes the metadata of a comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/CommentMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_WORKDOCS_API CommentMetadata
  {
  public:
    CommentMetadata();
    CommentMetadata(Aws::Utils::Json::JsonView jsonValue);
    CommentMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CommentMetadata& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The ID of the comment.</p>
     */
    inline CommentMetadata& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment.</p>
     */
    inline CommentMetadata& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>The user who made the comment.</p>
     */
    inline const User& GetContributor() const{ return m_contributor; }

    /**
     * <p>The user who made the comment.</p>
     */
    inline bool ContributorHasBeenSet() const { return m_contributorHasBeenSet; }

    /**
     * <p>The user who made the comment.</p>
     */
    inline void SetContributor(const User& value) { m_contributorHasBeenSet = true; m_contributor = value; }

    /**
     * <p>The user who made the comment.</p>
     */
    inline void SetContributor(User&& value) { m_contributorHasBeenSet = true; m_contributor = std::move(value); }

    /**
     * <p>The user who made the comment.</p>
     */
    inline CommentMetadata& WithContributor(const User& value) { SetContributor(value); return *this;}

    /**
     * <p>The user who made the comment.</p>
     */
    inline CommentMetadata& WithContributor(User&& value) { SetContributor(std::move(value)); return *this;}


    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline CommentMetadata& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp that the comment was created.</p>
     */
    inline CommentMetadata& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the comment.</p>
     */
    inline const CommentStatusType& GetCommentStatus() const{ return m_commentStatus; }

    /**
     * <p>The status of the comment.</p>
     */
    inline bool CommentStatusHasBeenSet() const { return m_commentStatusHasBeenSet; }

    /**
     * <p>The status of the comment.</p>
     */
    inline void SetCommentStatus(const CommentStatusType& value) { m_commentStatusHasBeenSet = true; m_commentStatus = value; }

    /**
     * <p>The status of the comment.</p>
     */
    inline void SetCommentStatus(CommentStatusType&& value) { m_commentStatusHasBeenSet = true; m_commentStatus = std::move(value); }

    /**
     * <p>The status of the comment.</p>
     */
    inline CommentMetadata& WithCommentStatus(const CommentStatusType& value) { SetCommentStatus(value); return *this;}

    /**
     * <p>The status of the comment.</p>
     */
    inline CommentMetadata& WithCommentStatus(CommentStatusType&& value) { SetCommentStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline const Aws::String& GetRecipientId() const{ return m_recipientId; }

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline bool RecipientIdHasBeenSet() const { return m_recipientIdHasBeenSet; }

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline void SetRecipientId(const Aws::String& value) { m_recipientIdHasBeenSet = true; m_recipientId = value; }

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline void SetRecipientId(Aws::String&& value) { m_recipientIdHasBeenSet = true; m_recipientId = std::move(value); }

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline void SetRecipientId(const char* value) { m_recipientIdHasBeenSet = true; m_recipientId.assign(value); }

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline CommentMetadata& WithRecipientId(const Aws::String& value) { SetRecipientId(value); return *this;}

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline CommentMetadata& WithRecipientId(Aws::String&& value) { SetRecipientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user being replied to.</p>
     */
    inline CommentMetadata& WithRecipientId(const char* value) { SetRecipientId(value); return *this;}

  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet;

    User m_contributor;
    bool m_contributorHasBeenSet;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet;

    CommentStatusType m_commentStatus;
    bool m_commentStatusHasBeenSet;

    Aws::String m_recipientId;
    bool m_recipientIdHasBeenSet;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
