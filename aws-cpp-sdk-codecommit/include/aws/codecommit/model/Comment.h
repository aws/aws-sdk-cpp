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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a specific comment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/Comment">AWS
   * API Reference</a></p>
   */
  class AWS_CODECOMMIT_API Comment
  {
  public:
    Comment();
    Comment(Aws::Utils::Json::JsonView jsonValue);
    Comment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated comment ID.</p>
     */
    inline const Aws::String& GetCommentId() const{ return m_commentId; }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline bool CommentIdHasBeenSet() const { return m_commentIdHasBeenSet; }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline void SetCommentId(const Aws::String& value) { m_commentIdHasBeenSet = true; m_commentId = value; }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline void SetCommentId(Aws::String&& value) { m_commentIdHasBeenSet = true; m_commentId = std::move(value); }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline void SetCommentId(const char* value) { m_commentIdHasBeenSet = true; m_commentId.assign(value); }

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline Comment& WithCommentId(const Aws::String& value) { SetCommentId(value); return *this;}

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline Comment& WithCommentId(Aws::String&& value) { SetCommentId(std::move(value)); return *this;}

    /**
     * <p>The system-generated comment ID.</p>
     */
    inline Comment& WithCommentId(const char* value) { SetCommentId(value); return *this;}


    /**
     * <p>The content of the comment.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the comment.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the comment.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the comment.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the comment.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the comment.</p>
     */
    inline Comment& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the comment.</p>
     */
    inline Comment& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the comment.</p>
     */
    inline Comment& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline const Aws::String& GetInReplyTo() const{ return m_inReplyTo; }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline bool InReplyToHasBeenSet() const { return m_inReplyToHasBeenSet; }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline void SetInReplyTo(const Aws::String& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = value; }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline void SetInReplyTo(Aws::String&& value) { m_inReplyToHasBeenSet = true; m_inReplyTo = std::move(value); }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline void SetInReplyTo(const char* value) { m_inReplyToHasBeenSet = true; m_inReplyTo.assign(value); }

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline Comment& WithInReplyTo(const Aws::String& value) { SetInReplyTo(value); return *this;}

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline Comment& WithInReplyTo(Aws::String&& value) { SetInReplyTo(std::move(value)); return *this;}

    /**
     * <p>The ID of the comment for which this comment is a reply, if any.</p>
     */
    inline Comment& WithInReplyTo(const char* value) { SetInReplyTo(value); return *this;}


    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline Comment& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the comment was created, in timestamp format.</p>
     */
    inline Comment& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline Comment& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time the comment was most recently modified, in timestamp
     * format.</p>
     */
    inline Comment& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline const Aws::String& GetAuthorArn() const{ return m_authorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline void SetAuthorArn(const Aws::String& value) { m_authorArnHasBeenSet = true; m_authorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline void SetAuthorArn(Aws::String&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline void SetAuthorArn(const char* value) { m_authorArnHasBeenSet = true; m_authorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline Comment& WithAuthorArn(const Aws::String& value) { SetAuthorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline Comment& WithAuthorArn(Aws::String&& value) { SetAuthorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the person who posted the comment.</p>
     */
    inline Comment& WithAuthorArn(const char* value) { SetAuthorArn(value); return *this;}


    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>A Boolean value indicating whether the comment has been deleted.</p>
     */
    inline Comment& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline Comment& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline Comment& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that when provided in a request,
     * ensures the request cannot be repeated with a changed parameter. If a request is
     * received with the same parameters and a token is included, the request will
     * return information about the initial request that used that token.</p>
     */
    inline Comment& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_commentId;
    bool m_commentIdHasBeenSet;

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::String m_inReplyTo;
    bool m_inReplyToHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::String m_authorArn;
    bool m_authorArnHasBeenSet;

    bool m_deleted;
    bool m_deletedHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
